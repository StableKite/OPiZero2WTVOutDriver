#include <android/media/tv/tuner/TunerFrontendAtsc3PlpSettings.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

::android::status_t TunerFrontendAtsc3PlpSettings::readFromParcel(const ::android::Parcel* _aidl_parcel) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  size_t _aidl_start_pos = _aidl_parcel->dataPosition();
  int32_t _aidl_parcelable_raw_size = _aidl_parcel->readInt32();
  if (_aidl_parcelable_raw_size < 0) return ::android::BAD_VALUE;
  size_t _aidl_parcelable_size = static_cast<size_t>(_aidl_parcelable_raw_size);
  ;
  _aidl_ret_status = _aidl_parcel->readInt32(&plpId);
  if (((_aidl_ret_status) != (::android::OK))) {
    return _aidl_ret_status;
  }
  if (_aidl_parcel->dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) {
    _aidl_parcel->setDataPosition(_aidl_start_pos + _aidl_parcelable_size);
    return _aidl_ret_status;
  };
  _aidl_ret_status = _aidl_parcel->readInt32(&modulation);
  if (((_aidl_ret_status) != (::android::OK))) {
    return _aidl_ret_status;
  }
  if (_aidl_parcel->dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) {
    _aidl_parcel->setDataPosition(_aidl_start_pos + _aidl_parcelable_size);
    return _aidl_ret_status;
  };
  _aidl_ret_status = _aidl_parcel->readInt32(&interleaveMode);
  if (((_aidl_ret_status) != (::android::OK))) {
    return _aidl_ret_status;
  }
  if (_aidl_parcel->dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) {
    _aidl_parcel->setDataPosition(_aidl_start_pos + _aidl_parcelable_size);
    return _aidl_ret_status;
  };
  _aidl_ret_status = _aidl_parcel->readInt32(&codeRate);
  if (((_aidl_ret_status) != (::android::OK))) {
    return _aidl_ret_status;
  }
  if (_aidl_parcel->dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) {
    _aidl_parcel->setDataPosition(_aidl_start_pos + _aidl_parcelable_size);
    return _aidl_ret_status;
  };
  _aidl_ret_status = _aidl_parcel->readInt32(&fec);
  if (((_aidl_ret_status) != (::android::OK))) {
    return _aidl_ret_status;
  }
  if (_aidl_parcel->dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) {
    _aidl_parcel->setDataPosition(_aidl_start_pos + _aidl_parcelable_size);
    return _aidl_ret_status;
  };
  return _aidl_ret_status;
}

::android::status_t TunerFrontendAtsc3PlpSettings::writeToParcel(::android::Parcel* _aidl_parcel) const {
  ::android::status_t _aidl_ret_status = ::android::OK;
  auto _aidl_start_pos = _aidl_parcel->dataPosition();
  _aidl_parcel->writeInt32(0);;
  _aidl_ret_status = _aidl_parcel->writeInt32(plpId);
  if (((_aidl_ret_status) != (::android::OK))) {
    return _aidl_ret_status;
  }
  _aidl_ret_status = _aidl_parcel->writeInt32(modulation);
  if (((_aidl_ret_status) != (::android::OK))) {
    return _aidl_ret_status;
  }
  _aidl_ret_status = _aidl_parcel->writeInt32(interleaveMode);
  if (((_aidl_ret_status) != (::android::OK))) {
    return _aidl_ret_status;
  }
  _aidl_ret_status = _aidl_parcel->writeInt32(codeRate);
  if (((_aidl_ret_status) != (::android::OK))) {
    return _aidl_ret_status;
  }
  _aidl_ret_status = _aidl_parcel->writeInt32(fec);
  if (((_aidl_ret_status) != (::android::OK))) {
    return _aidl_ret_status;
  }
  auto _aidl_end_pos = _aidl_parcel->dataPosition();
  _aidl_parcel->setDataPosition(_aidl_start_pos);
  _aidl_parcel->writeInt32(_aidl_end_pos - _aidl_start_pos);
  _aidl_parcel->setDataPosition(_aidl_end_pos);;
  return _aidl_ret_status;
}

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android