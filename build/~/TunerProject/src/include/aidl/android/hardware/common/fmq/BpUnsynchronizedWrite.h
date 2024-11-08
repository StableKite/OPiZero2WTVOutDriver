#ifndef AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_BP_UNSYNCHRONIZED_WRITE_H_
#define AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_BP_UNSYNCHRONIZED_WRITE_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/hardware/common/fmq/UnsynchronizedWrite.h>

namespace android {

namespace hardware {

namespace common {

namespace fmq {

class BpUnsynchronizedWrite : public ::android::BpInterface<IUnsynchronizedWrite> {
public:
  explicit BpUnsynchronizedWrite(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpUnsynchronizedWrite() = default;
};  // class BpUnsynchronizedWrite

}  // namespace fmq

}  // namespace common

}  // namespace hardware

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_BP_UNSYNCHRONIZED_WRITE_H_
