#ifndef AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_M_Q_DESCRIPTOR_H_
#define AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_M_Q_DESCRIPTOR_H_

#include <android/hardware/common/NativeHandle.h>
#include <android/hardware/common/fmq/GrantorDescriptor.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <vector>

namespace android {

namespace hardware {

namespace common {

namespace fmq {

class MQDescriptor : public ::android::Parcelable {
public:
  ::std::vector<::android::hardware::common::fmq::GrantorDescriptor> grantors;
  ::android::hardware::common::NativeHandle handle;
  int32_t quantum;
  int32_t flags;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class MQDescriptor

}  // namespace fmq

}  // namespace common

}  // namespace hardware

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_M_Q_DESCRIPTOR_H_
