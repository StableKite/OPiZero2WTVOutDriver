#ifndef AIDL_GENERATED_ANDROID_HARDWARE_COMMON_NATIVE_HANDLE_H_
#define AIDL_GENERATED_ANDROID_HARDWARE_COMMON_NATIVE_HANDLE_H_

#include <binder/Parcel.h>
#include <binder/ParcelFileDescriptor.h>
#include <binder/Status.h>
#include <cstdint>
#include <vector>

namespace android {

namespace hardware {

namespace common {

class NativeHandle : public ::android::Parcelable {
public:
  ::std::vector<::android::os::ParcelFileDescriptor> fds;
  ::std::vector<int32_t> ints;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class NativeHandle

}  // namespace common

}  // namespace hardware

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_HARDWARE_COMMON_NATIVE_HANDLE_H_
