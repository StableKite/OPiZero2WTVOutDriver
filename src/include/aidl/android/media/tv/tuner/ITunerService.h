#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_SERVICE_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_SERVICE_H_

#include <android/media/tv/tuner/ITunerDemux.h>
#include <android/media/tv/tuner/ITunerDescrambler.h>
#include <android/media/tv/tuner/ITunerFrontend.h>
#include <android/media/tv/tuner/ITunerLnb.h>
#include <android/media/tv/tuner/TunerDemuxCapabilities.h>
#include <android/media/tv/tuner/TunerFrontendDtmbCapabilities.h>
#include <android/media/tv/tuner/TunerFrontendInfo.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/String16.h>
#include <utils/StrongPointer.h>
#include <vector>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class ITunerService : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(TunerService)
  virtual ::android::binder::Status getFrontendIds(::std::vector<int32_t>* ids) = 0;
  virtual ::android::binder::Status getFrontendInfo(int32_t frontendHandle, ::android::media::tv::tuner::TunerFrontendInfo* _aidl_return) = 0;
  virtual ::android::binder::Status getFrontendDtmbCapabilities(int32_t id, ::android::media::tv::tuner::TunerFrontendDtmbCapabilities* _aidl_return) = 0;
  virtual ::android::binder::Status openFrontend(int32_t frontendHandle, ::android::sp<::android::media::tv::tuner::ITunerFrontend>* _aidl_return) = 0;
  virtual ::android::binder::Status openLnb(int32_t lnbHandle, ::android::sp<::android::media::tv::tuner::ITunerLnb>* _aidl_return) = 0;
  virtual ::android::binder::Status openLnbByName(const ::android::String16& lnbName, ::android::sp<::android::media::tv::tuner::ITunerLnb>* _aidl_return) = 0;
  virtual ::android::binder::Status openDemux(int32_t demuxHandle, ::android::sp<::android::media::tv::tuner::ITunerDemux>* _aidl_return) = 0;
  virtual ::android::binder::Status getDemuxCaps(::android::media::tv::tuner::TunerDemuxCapabilities* _aidl_return) = 0;
  virtual ::android::binder::Status openDescrambler(int32_t descramblerHandle, ::android::sp<::android::media::tv::tuner::ITunerDescrambler>* _aidl_return) = 0;
  virtual ::android::binder::Status getTunerHalVersion(int32_t* _aidl_return) = 0;
};  // class ITunerService

class ITunerServiceDefault : public ITunerService {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status getFrontendIds(::std::vector<int32_t>* ids) override;
  ::android::binder::Status getFrontendInfo(int32_t frontendHandle, ::android::media::tv::tuner::TunerFrontendInfo* _aidl_return) override;
  ::android::binder::Status getFrontendDtmbCapabilities(int32_t id, ::android::media::tv::tuner::TunerFrontendDtmbCapabilities* _aidl_return) override;
  ::android::binder::Status openFrontend(int32_t frontendHandle, ::android::sp<::android::media::tv::tuner::ITunerFrontend>* _aidl_return) override;
  ::android::binder::Status openLnb(int32_t lnbHandle, ::android::sp<::android::media::tv::tuner::ITunerLnb>* _aidl_return) override;
  ::android::binder::Status openLnbByName(const ::android::String16& lnbName, ::android::sp<::android::media::tv::tuner::ITunerLnb>* _aidl_return) override;
  ::android::binder::Status openDemux(int32_t demuxHandle, ::android::sp<::android::media::tv::tuner::ITunerDemux>* _aidl_return) override;
  ::android::binder::Status getDemuxCaps(::android::media::tv::tuner::TunerDemuxCapabilities* _aidl_return) override;
  ::android::binder::Status openDescrambler(int32_t descramblerHandle, ::android::sp<::android::media::tv::tuner::ITunerDescrambler>* _aidl_return) override;
  ::android::binder::Status getTunerHalVersion(int32_t* _aidl_return) override;

};

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_SERVICE_H_
