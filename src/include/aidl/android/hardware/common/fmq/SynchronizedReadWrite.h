#ifndef AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_I_SYNCHRONIZED_READ_WRITE_H_
#define AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_I_SYNCHRONIZED_READ_WRITE_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <utils/StrongPointer.h>

namespace android {

namespace hardware {

namespace common {

namespace fmq {

class ISynchronizedReadWrite : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(SynchronizedReadWrite)
  enum  : int32_t {
    EMPTY = 0,
  };
};  // class ISynchronizedReadWrite

class ISynchronizedReadWriteDefault : public ISynchronizedReadWrite {
public:
  ::android::IBinder* onAsBinder() override;
  
};

}  // namespace fmq

}  // namespace common

}  // namespace hardware

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_I_SYNCHRONIZED_READ_WRITE_H_
