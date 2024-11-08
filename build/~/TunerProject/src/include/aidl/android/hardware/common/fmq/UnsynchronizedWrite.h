#ifndef AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_I_UNSYNCHRONIZED_WRITE_H_
#define AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_I_UNSYNCHRONIZED_WRITE_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <utils/StrongPointer.h>

namespace android {

namespace hardware {

namespace common {

namespace fmq {

class IUnsynchronizedWrite : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(UnsynchronizedWrite)
  enum  : int32_t {
    EMPTY = 0,
  };
};  // class IUnsynchronizedWrite

class IUnsynchronizedWriteDefault : public IUnsynchronizedWrite {
public:
  ::android::IBinder* onAsBinder() override;
  
};

}  // namespace fmq

}  // namespace common

}  // namespace hardware

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_I_UNSYNCHRONIZED_WRITE_H_
