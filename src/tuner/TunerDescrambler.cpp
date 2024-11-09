#include "TunerDescrambler.h"

#ifndef LOG_TAG
#define LOG_TAG "TunerDescrambler"
#endif

#include <iostream>
#include "TunerFilter.h"

namespace tuner_project {

using tuner_project::DemuxPid;

TunerDescrambler::TunerDescrambler(std::shared_ptr<::aidl::android::media::tv::tuner::IDescrambler> descrambler)
    : mDescrambler(descrambler) {}

TunerDescrambler::~TunerDescrambler() {}

Status TunerDescrambler::setDemuxSource(const std::shared_ptr<::aidl::android::media::tv::tuner::ITunerDemux>& demux) {
    ::android::Parcel _aidl_data;
    ::android::Parcel _aidl_reply;
    ::android::status_t _aidl_ret_status = ::android::OK;
    ::android::binder::Status _aidl_status;

    _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = _aidl_data.writeStrongBinder(::android::media::tv::tuner::ITunerDemux::asBinder(demux));
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* setDemuxSource */, _aidl_data, &_aidl_reply);
    if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && ITunerDescrambler::getDefaultImpl())) {
        return ITunerDescrambler::getDefaultImpl()->setDemuxSource(demux);
    }
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = _aidl_status.readFromParcel(_aidl_reply);
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    if (!_aidl_status.isOk()) {
        return _aidl_status;
    }
    _aidl_error:
    _aidl_status.setFromStatusT(_aidl_ret_status);
    return _aidl_status;
}

Status TunerDescrambler::setKeyToken(const std::vector<uint8_t>& keyToken) {
    ::android::Parcel _aidl_data;
    ::android::Parcel _aidl_reply;
    ::android::status_t _aidl_ret_status = ::android::OK;
    ::android::binder::Status _aidl_status;

    _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = _aidl_data.writeByteVector(keyToken);
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 1 /* setKeyToken */, _aidl_data, &_aidl_reply);
    if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && ITunerDescrambler::getDefaultImpl())) {
        return ITunerDescrambler::getDefaultImpl()->setKeyToken(keyToken);
    }
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = _aidl_status.readFromParcel(_aidl_reply);
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    if (!_aidl_status.isOk()) {
        return _aidl_status;
    }
    _aidl_error:
    _aidl_status.setFromStatusT(_aidl_ret_status);
    return _aidl_status;
}

Status TunerDescrambler::addPid(const ::aidl::android::media::tv::tuner::TunerDemuxPid& pid,
                                const std::shared_ptr<::aidl::android::media::tv::tuner::ITunerFilter>& optionalSourceFilter) {
    ::android::Parcel _aidl_data;
    ::android::Parcel _aidl_reply;
    ::android::status_t _aidl_ret_status = ::android::OK;
    ::android::binder::Status _aidl_status;

    _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = _aidl_data.writeParcelable(pid);
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = _aidl_data.writeStrongBinder(::android::media::tv::tuner::ITunerFilter::asBinder(optionalSourceFilter));
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 2 /* addPid */, _aidl_data, &_aidl_reply);
    if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && ITunerDescrambler::getDefaultImpl())) {
        return ITunerDescrambler::getDefaultImpl()->addPid(pid, optionalSourceFilter);
    }
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = _aidl_status.readFromParcel(_aidl_reply);
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    if (!_aidl_status.isOk()) {
        return _aidl_status;
    }
    _aidl_error:
    _aidl_status.setFromStatusT(_aidl_ret_status);
    return _aidl_status;
}

Status TunerDescrambler::removePid(const ::aidl::android::media::tv::tuner::TunerDemuxPid& pid,
                                   const std::shared_ptr<::aidl::android::media::tv::tuner::ITunerFilter>& optionalSourceFilter) {
    ::android::Parcel _aidl_data;
    ::android::Parcel _aidl_reply;
    ::android::status_t _aidl_ret_status = ::android::OK;
    ::android::binder::Status _aidl_status;

    _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = _aidl_data.writeParcelable(pid);
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = _aidl_data.writeStrongBinder(::android::media::tv::tuner::ITunerFilter::asBinder(optionalSourceFilter));
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 3 /* removePid */, _aidl_data, &_aidl_reply);
    if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && ITunerDescrambler::getDefaultImpl())) {
        return ITunerDescrambler::getDefaultImpl()->removePid(pid, optionalSourceFilter);
    }
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = _aidl_status.readFromParcel(_aidl_reply);
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    if (!_aidl_status.isOk()) {
        return _aidl_status;
    }
    _aidl_error:
    _aidl_status.setFromStatusT(_aidl_ret_status);
    return _aidl_status;
}

Status TunerDescrambler::close() {
    ::android::Parcel _aidl_data;
    ::android::Parcel _aidl_reply;
    ::android::status_t _aidl_ret_status = ::android::OK;
    ::android::binder::Status _aidl_status;

    _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 4 /* close */, _aidl_data, &_aidl_reply);
    if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && ITunerDescrambler::getDefaultImpl())) {
        return ITunerDescrambler::getDefaultImpl()->close();
    }
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    _aidl_ret_status = _aidl_status.readFromParcel(_aidl_reply);
    if ((_aidl_ret_status) != (::android::OK)) {
        goto _aidl_error;
    }
    if (!_aidl_status.isOk()) {
        return _aidl_status;
    }
    _aidl_error:
    _aidl_status.setFromStatusT(_aidl_ret_status);
    return _aidl_status;
}

DemuxPid TunerDescrambler::getHidlDemuxPid(const ::aidl::android::media::tv::tuner::TunerDemuxPid& pid) {
    DemuxPid hidlPid;
    if (pid.tPid != 0) {  // Проверяем, установлен ли tPid
        hidlPid.tPid(static_cast<uint16_t>(pid.tPid));
    } else if (pid.mmtpPid != 0) {  // Проверяем, установлен ли mmtpPid
        hidlPid.mmtpPid(static_cast<uint16_t>(pid.mmtpPid));
    }
    return hidlPid;
}

}  // namespace tuner_project
