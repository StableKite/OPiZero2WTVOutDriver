#ifndef ANDROID_HARDWARE_TV_TUNER_V1_1_IFILTERCALLBACK_H_
#define ANDROID_HARDWARE_TV_TUNER_V1_1_IFILTERCALLBACK_H_

#include <android/hardware/tv/tuner/1.0/IFilterCallback.h>
#include <android/hardware/tv/tuner/1.0/DemuxFilterEvent.h>
#include <android/hardware/tv/tuner/1.1/types.h>

namespace android {
namespace hardware {
namespace tv {
namespace tuner {
namespace V1_1 {

class IFilterCallback : public ::android::hardware::tv::tuner::V1_0::IFilterCallback {
public:
    virtual ~IFilterCallback() = default;

    virtual ::android::hardware::Return<void> onFilterEvent_1_1(
        const ::android::hardware::tv::tuner::V1_0::DemuxFilterEvent& filterEvent, 
        const ::android::hardware::tv::tuner::V1_1::DemuxFilterEventExt& filterEventExt) = 0;
};

}  // namespace V1_1
}  // namespace tuner
}  // namespace tv
}  // namespace hardware
}  // namespace android

#endif  // ANDROID_HARDWARE_TV_TUNER_V1_1_IFILTERCALLBACK_H_
