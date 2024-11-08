#define LOG_TAG "TunerDemux"

#include "TunerDvr.h"
#include "TunerDemux.h"
#include "TunerTimeFilter.h"

#include <memory>
#include <iostream>

using namespace std;

namespace mynamespace {

class DvrCallback : public ITunerDvrCallback {
public:
    DvrCallback(const std::shared_ptr<ITunerDvrCallback>& cb) {}
};


TunerDemux::TunerDemux(std::shared_ptr<IDemux> demux, int demuxId) {
    mDemux = demux;
    mDemuxId = demuxId;
}

TunerDemux::~TunerDemux() {
    mDemux = nullptr;
}

Status TunerDemux::setFrontendDataSource(const std::shared_ptr<ITunerFrontend>& frontend) {
    if (mDemux == nullptr) {
        cerr << "IDemux is not initialized" << endl;
        return -1;
    }

    int frontendId;
    frontend->getFrontendId(&frontendId);
    int res = mDemux->setFrontendDataSource(frontendId);
    if (res != 0) {
        return res;
    }
    return 0;
}

Status TunerDemux::openFilter(
        int type, int subType, int bufferSize, const std::shared_ptr<mynamespace::ITunerFilterCallback>& cb,
        std::shared_ptr<ITunerFilter>* _aidl_return) {
    if (mDemux == nullptr) {
        cerr << "IDemux is not initialized." << endl;
        return -1;
    }

    int status;
    auto filterSp = make_shared<ITunerFilter>();

    if (status != 0) {
        return status;
    }

    *_aidl_return = make_shared<ITunerFilter>();
    return 0;
}

Status TunerDemux::openTimeFilter(std::shared_ptr<ITunerTimeFilter>* _aidl_return) {
    if (mDemux == nullptr) {
        cerr << "IDemux is not initialized." << endl;
        return -1;
    }

    int status;
    auto filterSp = make_shared<ITunerTimeFilter>();

    if (status != 0) {
        return status;
    }

    *_aidl_return = make_shared<ITunerTimeFilter>();
    return 0;
}

Status TunerDemux::getAvSyncHwId(const std::shared_ptr<mynamespace::ITunerFilter>& tunerFilter, int* _aidl_return) {
    if (mDemux == nullptr) {
        cerr << "IDemux is not initialized." << endl;
        return -1;
    }

    int avSyncHwId;
    int res;
    std::shared_ptr<mynamespace::ITunerFilter> halFilter = std::dynamic_pointer_cast<mynamespace::ITunerFilter>(tunerFilter);

    res = mDemux->getAvSyncHwId(halFilter, avSyncHwId);

    if (res != 0) {
        return res;
    }

    *_aidl_return = avSyncHwId;
    return 0;
}

Status TunerDemux::getAvSyncTime(int avSyncHwId, int64_t* _aidl_return) {
    if (mDemux == nullptr) {
        std::cerr << "IDemux is not initialized." << std::endl;
        return -1;
    }

    int64_t time;
    int res = mDemux->getAvSyncTime(avSyncHwId, time);
    if (res != 0) {
        return res;
    }

    *_aidl_return = time;
    return 0;
}

Status TunerDemux::openDvr(int dvrType, int bufferSize, const std::shared_ptr<mynamespace::ITunerDvrCallback>& cb,
        std::shared_ptr<mynamespace::ITunerDvr>* _aidl_return) {
    if (mDemux == nullptr) {
        std::cerr << "IDemux is not initialized." << std::endl;
        return -1;
    }

    int res;
    auto callback = std::make_shared<DvrCallback>(cb);
    std::shared_ptr<mynamespace::IDvr> dvr = std::make_shared<mynamespace::IDvr>();
    res = mDemux->openDvr(dvrType, bufferSize, std::dynamic_pointer_cast<mynamespace::ITunerDvrCallback>(callback), dvr);

    if (res != 0) {
        *_aidl_return = nullptr;
        return res;
    }

    *_aidl_return = std::make_shared<ITunerDvr>();
    return 0;
}

Status TunerDemux::connectCiCam(int ciCamId) {
    if (mDemux == nullptr) {
        std::cerr << "IDemux is not initialized." << std::endl;
        return -1;
    }

    int res = mDemux->connectCiCam(ciCamId);
    if (res != 0) {
        return res;
    }
    return 0;
}

Status TunerDemux::disconnectCiCam() {
    if (mDemux == nullptr) {
        std::cerr << "IDemux is not initialized." << std::endl;
        return -1;
    }

    int res = mDemux->disconnectCiCam();
    if (res != 0) {
        return res;
    }
    return 0;
}

Status TunerDemux::close() {
    if (mDemux == nullptr) {
        return -1;
    }

    mDemux = nullptr;

    return 0;
}

} // namespace mynamespace
