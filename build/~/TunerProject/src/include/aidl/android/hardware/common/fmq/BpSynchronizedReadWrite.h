#ifndef AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_BP_SYNCHRONIZED_READ_WRITE_H_
#define AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_BP_SYNCHRONIZED_READ_WRITE_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/hardware/common/fmq/SynchronizedReadWrite.h>

namespace android {

namespace hardware {

namespace common {

namespace fmq {

class BpSynchronizedReadWrite : public ::android::BpInterface<ISynchronizedReadWrite> {
public:
  explicit BpSynchronizedReadWrite(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpSynchronizedReadWrite() = default;
};  // class BpSynchronizedReadWrite

}  // namespace fmq

}  // namespace common

}  // namespace hardware

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_BP_SYNCHRONIZED_READ_WRITE_H_
