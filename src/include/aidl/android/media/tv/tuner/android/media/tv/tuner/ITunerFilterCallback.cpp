#include <android/media/tv/tuner/ITunerFilterCallback.h>
#include <android/media/tv/tuner/BpTunerFilterCallback.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

IMPLEMENT_META_INTERFACE(TunerFilterCallback, "android.media.tv.tuner.ITunerFilterCallback")

::android::IBinder* ITunerFilterCallbackDefault::onAsBinder() {
  return nullptr;
}

::android::binder::Status ITunerFilterCallbackDefault::onFilterStatus(int32_t) {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

::android::binder::Status ITunerFilterCallbackDefault::onFilterEvent(const ::std::vector<::android::media::tv::tuner::TunerFilterEvent>&) {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android
#include <android/media/tv/tuner/BpTunerFilterCallback.h>
#include <binder/Parcel.h>
#include <android-base/macros.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

BpTunerFilterCallback::BpTunerFilterCallback(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<ITunerFilterCallback>(_aidl_impl){
}

::android::binder::Status BpTunerFilterCallback::onFilterStatus(int32_t status) {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeInt32(status);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* onFilterStatus */, _aidl_data, &_aidl_reply);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && ITunerFilterCallback::getDefaultImpl())) {
     return ITunerFilterCallback::getDefaultImpl()->onFilterStatus(status);
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_status.readFromParcel(_aidl_reply);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  if (!_aidl_status.isOk()) {
    return _aidl_status;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

::android::binder::Status BpTunerFilterCallback::onFilterEvent(const ::std::vector<::android::media::tv::tuner::TunerFilterEvent>& filterEvent) {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeParcelableVector(filterEvent);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 1 /* onFilterEvent */, _aidl_data, &_aidl_reply);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && ITunerFilterCallback::getDefaultImpl())) {
     return ITunerFilterCallback::getDefaultImpl()->onFilterEvent(filterEvent);
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_status.readFromParcel(_aidl_reply);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  if (!_aidl_status.isOk()) {
    return _aidl_status;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android
#include <android/media/tv/tuner/BnTunerFilterCallback.h>
#include <binder/Parcel.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

::android::status_t BnTunerFilterCallback::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  switch (_aidl_code) {
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* onFilterStatus */:
  {
    int32_t in_status;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    _aidl_ret_status = _aidl_data.readInt32(&in_status);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    ::android::binder::Status _aidl_status(onFilterStatus(in_status));
    _aidl_ret_status = _aidl_status.writeToParcel(_aidl_reply);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    if (!_aidl_status.isOk()) {
      break;
    }
  }
  break;
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 1 /* onFilterEvent */:
  {
    ::std::vector<::android::media::tv::tuner::TunerFilterEvent> in_filterEvent;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    _aidl_ret_status = _aidl_data.readParcelableVector(&in_filterEvent);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    ::android::binder::Status _aidl_status(onFilterEvent(in_filterEvent));
    _aidl_ret_status = _aidl_status.writeToParcel(_aidl_reply);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    if (!_aidl_status.isOk()) {
      break;
    }
  }
  break;
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

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android
