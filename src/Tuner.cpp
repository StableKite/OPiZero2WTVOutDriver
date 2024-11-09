#define LOG_TAG "Tuner"

#include "Tuner.h"
#include "Demux.h"
#include "Descrambler.h"
#include "Frontend.h"
#include "Lnb.h"
#include <iostream>

#define ALOGV(msg) std::cout << msg << std::endl
#define ALOGW(msg) std::cerr << msg << std::endl
#define ALOGE(msg) std::cerr << msg << std::endl
#define ALOGD(msg) std::cout << msg << std::endl

namespace tuner_project {
namespace hardware {
namespace tv {
namespace tuner {
namespace V1_0 {
namespace implementation {

using tuner_project::DemuxId;

Tuner::Tuner() {
    // Static Frontends array to maintain local frontends information
    // Array index matches their FrontendId in the default impl
    mFrontendSize = 8;
    mFrontends[0] = std::make_shared<Frontend>(FrontendType::DVBT, 0, this);
    mFrontends[1] = std::make_shared<Frontend>(FrontendType::ATSC, 1, this);
    mFrontends[2] = std::make_shared<Frontend>(FrontendType::DVBC, 2, this);
    mFrontends[3] = std::make_shared<Frontend>(FrontendType::DVBS, 3, this);
    mFrontends[4] = std::make_shared<Frontend>(FrontendType::DVBT, 4, this);
    mFrontends[5] = std::make_shared<Frontend>(FrontendType::ISDBT, 5, this);
    mFrontends[6] = std::make_shared<Frontend>(FrontendType::ANALOG, 6, this);
    mFrontends[7] = std::make_shared<Frontend>(FrontendType::ATSC, 7, this);

    FrontendInfo::FrontendCapabilities caps;
    caps = FrontendInfo::FrontendCapabilities();
    caps.dvbtCaps(FrontendDvbtCapabilities());
    mFrontendCaps[0] = caps;

    caps = FrontendInfo::FrontendCapabilities();
    caps.atscCaps(FrontendAtscCapabilities());
    mFrontendCaps[1] = caps;

    caps = FrontendInfo::FrontendCapabilities();
    caps.dvbcCaps(FrontendDvbcCapabilities());
    mFrontendCaps[2] = caps;

    caps = FrontendInfo::FrontendCapabilities();
    caps.dvbsCaps(FrontendDvbsCapabilities());
    mFrontendCaps[3] = caps;

    caps = FrontendInfo::FrontendCapabilities();
    caps.dvbtCaps(FrontendDvbtCapabilities());
    mFrontendCaps[4] = caps;

    caps = FrontendInfo::FrontendCapabilities();
    FrontendIsdbtCapabilities isdbtCaps{
            .modeCap = FrontendIsdbtMode::MODE_1 | FrontendIsdbtMode::MODE_2,
            .bandwidthCap = (unsigned int)FrontendIsdbtBandwidth::BANDWIDTH_6MHZ,
            .modulationCap = (unsigned int)FrontendIsdbtModulation::MOD_16QAM,
            // ISDBT shares coderate and guard interval with DVBT
            .coderateCap = FrontendDvbtCoderate::CODERATE_4_5 | FrontendDvbtCoderate::CODERATE_6_7,
            .guardIntervalCap = (unsigned int)FrontendDvbtGuardInterval::INTERVAL_1_128,
    };
    caps.isdbtCaps(isdbtCaps);
    mFrontendCaps[5] = caps;

    caps = FrontendInfo::FrontendCapabilities();
    caps.analogCaps(FrontendAnalogCapabilities());
    mFrontendCaps[6] = caps;

    caps = FrontendInfo::FrontendCapabilities();
    caps.atscCaps(FrontendAtscCapabilities());
    mFrontendCaps[7] = caps;

    mLnbs.resize(2);
    mLnbs[0] = std::make_shared<Lnb>(0);
    mLnbs[1] = std::make_shared<Lnb>(1);
}

Tuner::~Tuner() {}

Return<void> Tuner::getFrontendIds(getFrontendIds_cb _hidl_cb) {
    ALOGV("%s", __FUNCTION__);

    vector<FrontendId> frontendIds;
    frontendIds.resize(mFrontendSize);
    for (int i = 0; i < mFrontendSize; i++) {
        frontendIds[i] = mFrontends[i]->getFrontendId();
    }

    _hidl_cb(Result::SUCCESS, frontendIds);
    return Void();
}

Return<void> Tuner::openFrontendById(uint32_t frontendId, openFrontendById_cb _hidl_cb) {
    ALOGV("%s", __FUNCTION__);

    if (frontendId >= mFrontendSize || frontendId < 0) {
        ALOGW("[   WARN   ] Frontend with id %d isn't available", frontendId);
        _hidl_cb(Result::UNAVAILABLE, nullptr);
        return Void();
    }

    _hidl_cb(Result::SUCCESS, mFrontends[frontendId]);
    return Void();
}

Return<void> Tuner::openDemux(openDemux_cb _hidl_cb) {
    ALOGV("%s", __FUNCTION__);

    DemuxId demuxId = mLastUsedId + 1;
    mLastUsedId += 1;
    std::shared_ptr<Demux> demux = std::make_shared<Demux>(demuxId, this);
    mDemuxes[demuxId] = demux;

    _hidl_cb(Result::SUCCESS, demuxId, demux);
    return Void();
}

Return<void> Tuner::getDemuxCaps(getDemuxCaps_cb _hidl_cb) {
    ALOGV("%s", __FUNCTION__);

    DemuxCapabilities caps;

    // IP filter can be an MMTP filter's data source.
    caps.linkCaps = {0x00, 0x00, 0x02, 0x00, 0x00};
    // Support time filter testing
    caps.bTimeFilter = true;
    _hidl_cb(Result::SUCCESS, caps);
    return Void();
}

Return<void> Tuner::openDescrambler(openDescrambler_cb _hidl_cb) {
    ALOGV("%s", __FUNCTION__);

    std::shared_ptr<IDescrambler> descrambler = std::make_shared<Descrambler>();

    _hidl_cb(Result::SUCCESS, descrambler);
    return Void();
}

Return<void> Tuner::getFrontendInfo(FrontendId frontendId, getFrontendInfo_cb _hidl_cb) {
    ALOGV("%s", __FUNCTION__);

    FrontendInfo info;
    if (frontendId >= mFrontendSize) {
        _hidl_cb(Result::INVALID_ARGUMENT, info);
        return Void();
    }

    vector<FrontendStatusType> statusCaps = {
            FrontendStatusType::DEMOD_LOCK,
            FrontendStatusType::SNR,
            FrontendStatusType::FEC,
            FrontendStatusType::MODULATION,
            FrontendStatusType::PLP_ID,
            FrontendStatusType::LAYER_ERROR,
            FrontendStatusType::ATSC3_PLP_INFO,
    };
    // assign randomly selected values for testing.
    info = {
            .type = mFrontends[frontendId]->getFrontendType(),
            .minFrequency = 139,
            .maxFrequency = 1139,
            .minSymbolRate = 45,
            .maxSymbolRate = 1145,
            .acquireRange = 30,
            .exclusiveGroupId = 57,
            .statusCaps = statusCaps,
            .frontendCaps = mFrontendCaps[frontendId],
    };

    _hidl_cb(Result::SUCCESS, info);
    return Void();
}

Return<void> Tuner::getLnbIds(getLnbIds_cb _hidl_cb) {
    ALOGV("%s", __FUNCTION__);

    vector<LnbId> lnbIds;
    lnbIds.resize(mLnbs.size());
    for (int i = 0; i < lnbIds.size(); i++) {
        lnbIds[i] = mLnbs[i]->getId();
    }

    _hidl_cb(Result::SUCCESS, lnbIds);
    return Void();
}

Return<void> Tuner::openLnbById(LnbId lnbId, openLnbById_cb _hidl_cb) {
    ALOGV("%s", __FUNCTION__);

    if (lnbId >= mLnbs.size()) {
        _hidl_cb(Result::INVALID_ARGUMENT, nullptr);
        return Void();
    }

    _hidl_cb(Result::SUCCESS, mLnbs[lnbId]);
    return Void();
}

std::shared_ptr<Frontend> Tuner::getFrontendById(uint32_t frontendId) {
    ALOGV("%s", __FUNCTION__);

    return mFrontends[frontendId];
}

Return<void> Tuner::openLnbByName(const hidl_string& /*lnbName*/, openLnbByName_cb _hidl_cb) {
    ALOGV("%s", __FUNCTION__);

    std::shared_ptr<ILnb> lnb = std::make_shared<Lnb>();

    _hidl_cb(Result::SUCCESS, 1234, lnb);
    return Void();
}

void Tuner::setFrontendAsDemuxSource(uint32_t frontendId, uint32_t demuxId) {
    mFrontendToDemux[frontendId] = demuxId;
    if (mFrontends[frontendId] != nullptr && mFrontends[frontendId]->isLocked()) {
        mDemuxes[demuxId]->startFrontendInputLoop();
    }
}

void Tuner::removeDemux(uint32_t demuxId) {
    map<uint32_t, uint32_t>::iterator it;
    for (it = mFrontendToDemux.begin(); it != mFrontendToDemux.end(); it++) {
        if (it->second == demuxId) {
            it = mFrontendToDemux.erase(it);
            break;
        }
    }
    mDemuxes.erase(demuxId);
}

void Tuner::removeFrontend(uint32_t frontendId) {
    mFrontendToDemux.erase(frontendId);
}

void Tuner::frontendStopTune(uint32_t frontendId) {
    map<uint32_t, uint32_t>::iterator it = mFrontendToDemux.find(frontendId);
    uint32_t demuxId;
    if (it != mFrontendToDemux.end()) {
        demuxId = it->second;
        mDemuxes[demuxId]->stopFrontendInput();
    }
}

void Tuner::frontendStartTune(uint32_t frontendId) {
    map<uint32_t, uint32_t>::iterator it = mFrontendToDemux.find(frontendId);
    uint32_t demuxId;
    if (it != mFrontendToDemux.end()) {
        demuxId = it->second;
        mDemuxes[demuxId]->startFrontendInputLoop();
    }
}

}  // namespace implementation
}  // namespace V1_0
}  // namespace tuner
}  // namespace tv
}  // namespace hardware
}  // namespace tuner_project
