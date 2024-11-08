#ifndef ANDROID_HARDWARE_TV_TUNER_V1_0_RESULT_H_
#define ANDROID_HARDWARE_TV_TUNER_V1_0_RESULT_H_

namespace android {
namespace hardware {
namespace tv {
namespace tuner {
namespace V1_0 {

enum class Result : uint32_t {
    SUCCESS,
    INVALID_STATE,
    UNKNOWN_ERROR
};

}  // namespace V1_0
}  // namespace tuner
}  // namespace tv
}  // namespace hardware
}  // namespace android

#endif  // ANDROID_HARDWARE_TV_TUNER_V1_0_RESULT_H_
