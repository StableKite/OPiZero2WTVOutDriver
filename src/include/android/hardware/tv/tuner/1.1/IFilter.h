#ifndef ANDROID_HARDWARE_TV_TUNER_V1_1_IFILTER_H_
#define ANDROID_HARDWARE_TV_TUNER_V1_1_IFILTER_H_

#include <android/hardware/tv/tuner/1.0/IFilter.h>
#include <android/hardware/tv/tuner/1.0/Result.h>

namespace android {
namespace hardware {
namespace tv {
namespace tuner {
namespace V1_1 {

class IFilter : public ::android::hardware::tv::tuner::V1_0::IFilter {
public:
    virtual ~IFilter() = default;

    // Get the 64-bit filter Id. This id is 32-bit in Tuner HAL 1.0.
    virtual ::android::hardware::Return<void> getId64Bit(getId64Bit_cb _hidl_cb) = 0;

    // Configure additional Context ID on the IP filter.
    virtual ::android::hardware::Return<::android::hardware::tv::tuner::V1_0::Result> configureIpCid(uint32_t ipCid) = 0;

    // Get the shared AV memory handle.
    virtual ::android::hardware::Return<void> getAvSharedHandle(getAvSharedHandle_cb _hidl_cb) = 0;

    // Configure A/V filter’s stream type.
    virtual ::android::hardware::Return<::android::hardware::tv::tuner::V1_0::Result> configureAvStreamType(::android::hardware::tv::tuner::V1_1::AvStreamType avStreamType) = 0;

    // Configure the monitor event.
    virtual ::android::hardware::Return<::android::hardware::tv::tuner::V1_0::Result> configureMonitorEvent(bitfield<::android::hardware::tv::tuner::V1_1::DemuxFilterMonitorEventType> monitorEventTypes) = 0;
};

}  // namespace V1_1
}  // namespace tuner
}  // namespace tv
}  // namespace hardware
}  // namespace android

#endif  // ANDROID_HARDWARE_TV_TUNER_V1_1_IFILTER_H_
