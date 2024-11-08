#include <android/hardware/common/fmq/UnsynchronizedWrite.h>
#include <android/hardware/common/fmq/BpUnsynchronizedWrite.h>

namespace android {

namespace hardware {

namespace common {

namespace fmq {

IMPLEMENT_META_INTERFACE(UnsynchronizedWrite, "android.hardware.common.fmq.IUnsynchronizedWrite")

::android::IBinder* IUnsynchronizedWriteDefault::onAsBinder() {
  return nullptr;
}

}  // namespace fmq

}  // namespace common

}  // namespace hardware

}  // namespace android
#include <android/hardware/common/fmq/BpUnsynchronizedWrite.h>
#include <binder/Parcel.h>
#include <android-base/macros.h>

namespace android {

namespace hardware {

namespace common {

namespace fmq {

BpUnsynchronizedWrite::BpUnsynchronizedWrite(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IUnsynchronizedWrite>(_aidl_impl){
}

}  // namespace fmq

}  // namespace common

}  // namespace hardware

}  // namespace android
#include <android/hardware/common/fmq/BnUnsynchronizedWrite.h>
#include <binder/Parcel.h>

namespace android {

namespace hardware {

namespace common {

namespace fmq {

::android::status_t BnUnsynchronizedWrite::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  switch (_aidl_code) {
  default:
  {
    _aidl_ret_status = ::android::BBinder::onTransact(_aidl_code, _aidl_data, _aidl_reply, _aidl_flags);
  }
  break;
  }
  if (_aidl_ret_status == ::android::UNEXPECTED_NULL) {
    _aidl_ret_status = ::android::binder::Status::fromExceptionCode(::android::binder::Status::EX_NULL_POINTER).writeToParcel(_aidl_reply);
  }
  return _aidl_ret_status;
}

}  // namespace fmq

}  // namespace common

}  // namespace hardware

}  // namespace android
