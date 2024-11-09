#ifndef TUNER_PROJECT_TUNERSERVICE_H
#define TUNER_PROJECT_TUNERSERVICE_H

#include <aidl/android/media/tv/tunerresourcemanager/ITunerResourceManager.h>
#include <aidl/android/media/tv/tuner/BnTunerService.h>
#include <fmq/AidlMessageQueue.h>
#include <fmq/EventFlag.h>
#include <fmq/MessageQueue.h>

using ::aidl::android::hardware::common::fmq::GrantorDescriptor;
using ::aidl::android::hardware::common::fmq::MQDescriptor;
using ::aidl::android::hardware::common::fmq::SynchronizedReadWrite;
using ::aidl::android::media::tv::tuner::BnTunerService;
using ::aidl::android::media::tv::tuner::ITunerDemux;
using ::aidl::android::media::tv::tuner::ITunerDescrambler;
using ::aidl::android::media::tv::tuner::ITunerFrontend;
using ::aidl::android::media::tv::tuner::ITunerLnb;
using ::aidl::android::media::tv::tuner::TunerDemuxCapabilities;
using ::aidl::android::media::tv::tuner::TunerFrontendDtmbCapabilities;
using ::aidl::android::media::tv::tuner::TunerFrontendInfo;
using ::aidl::android::media::tv::tunerresourcemanager::ITunerResourceManager;

using ::android::hardware::details::logError;
using ::android::hardware::hidl_vec;
using ::android::hardware::kSynchronizedReadWrite;
using ::android::hardware::EventFlag;
using ::android::hardware::MessageQueue;
using ::android::hardware::MQDescriptorSync;

using Status = ::ndk::ScopedAStatus;

using namespace std;

namespace tuner_project {

const static int TUNER_HAL_VERSION_UNKNOWN = 0;
const static int TUNER_HAL_VERSION_1_0 = 1 << 16;
const static int TUNER_HAL_VERSION_1_1 = (1 << 16) | 1;
// System Feature defined in PackageManager
static const ::android::String16 FEATURE_TUNER("android.hardware.tv.tuner");

typedef enum {
    FRONTEND,
    LNB,
    DEMUX,
    DESCRAMBLER,
} TunerResourceType;

struct FilterCallback : public IFilterCallback {
    ~FilterCallback() {}
    Return<void> onFilterEvent(const DemuxFilterEvent&) {
        return Void();
    }
    Return<void> onFilterStatus(const DemuxFilterStatus) {
        return Void();
    }
};

class TunerService : public BnTunerService {
    typedef AidlMessageQueue<int8_t, SynchronizedReadWrite> AidlMessageQueue;
    typedef MessageQueue<uint8_t, kSynchronizedReadWrite> HidlMessageQueue;
    typedef MQDescriptor<int8_t, SynchronizedReadWrite> AidlMQDesc;

public:
    static char const *getServiceName() { return "media.tuner"; }
    static binder_status_t instantiate();
    TunerService();
    virtual ~TunerService();

    Status getFrontendIds(vector<int32_t>* ids) override;
    Status getFrontendInfo(int32_t id, TunerFrontendInfo* _aidl_return) override;
    Status getFrontendDtmbCapabilities(
            int32_t id, TunerFrontendDtmbCapabilities* _aidl_return) override;
    Status openFrontend(
            int32_t frontendHandle, shared_ptr<ITunerFrontend>* _aidl_return) override;
    Status openLnb(int lnbHandle, shared_ptr<ITunerLnb>* _aidl_return) override;
    Status openLnbByName(const string& lnbName, shared_ptr<ITunerLnb>* _aidl_return) override;
    Status openDemux(int32_t demuxHandle, std::shared_ptr<ITunerDemux>* _aidl_return) override;
    Status getDemuxCaps(TunerDemuxCapabilities* _aidl_return) override;
    Status openDescrambler(int32_t descramblerHandle,
            std::shared_ptr<ITunerDescrambler>* _aidl_return) override;
    Status getTunerHalVersion(int* _aidl_return) override;

    // TODO: create a map between resource id and handles.
    static int getResourceIdFromHandle(int resourceHandle, int /*type*/) {
        return (resourceHandle & 0x00ff0000) >> 16;
    }

    int getResourceHandleFromId(int id, int resourceType) {
        // TODO: build up randomly generated id to handle mapping
        return (resourceType & 0x000000ff) << 24
                | (id << 16)
                | (mResourceRequestCount++ & 0xffff);
    }

private:
    bool hasITuner();
    bool hasITuner_1_1();
    void updateTunerResources();

    void updateFrontendResources();
    void updateLnbResources();
    vector<int> getLnbHandles();

    TunerDemuxCapabilities getAidlDemuxCaps(DemuxCapabilities caps);
    TunerFrontendInfo convertToAidlFrontendInfo(FrontendInfo halInfo);

    std::shared_ptr<ITuner> mTuner;
    std::shared_ptr<ITunerResourceManager> mTunerResourceManager;
    int mResourceRequestCount = 0;

    int mTunerVersion = TUNER_HAL_VERSION_UNKNOWN;
};

} // namespace tuner_project

#endif // TUNER_PROJECT_TUNERSERVICE_H