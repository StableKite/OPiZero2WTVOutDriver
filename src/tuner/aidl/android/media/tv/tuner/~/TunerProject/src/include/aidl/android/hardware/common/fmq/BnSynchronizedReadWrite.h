#ifndef AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_BN_SYNCHRONIZED_READ_WRITE_H_
#define AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_BN_SYNCHRONIZED_READ_WRITE_H_

#include <binder/IInterface.h>
#include <android/hardware/common/fmq/SynchronizedReadWrite.h>

namespace android {

namespace hardware {

namespace common {

namespace fmq {

class BnSynchronizedReadWrite : public ::android::BnInterface<ISynchronizedReadWrite> {
public:
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnSynchronizedReadWrite

}  // namespace fmq

}  // namespace common

}  // namespace hardware

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_HARDWARE_COMMON_FMQ_BN_SYNCHRONIZED_READ_WRITE_H_
