#ifndef AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_GRANTOR_DESCRIPTOR_H_
#define AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_GRANTOR_DESCRIPTOR_H_

#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace hardware {

namespace common {

namespace fmq {

class GrantorDescriptor : public ::android::Parcelable {
public:
  int32_t fdIndex;
  int32_t offset;
  int64_t extent;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class GrantorDescriptor

}  // namespace fmq

}  // namespace common

}  // namespace hardware

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_GRANTOR_DESCRIPTOR_H_
