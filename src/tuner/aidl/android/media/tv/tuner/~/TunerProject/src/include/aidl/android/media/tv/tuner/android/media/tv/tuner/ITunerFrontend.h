#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_FRONTEND_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_FRONTEND_H_

#include <android/media/tv/tuner/ITunerFrontendCallback.h>
#include <android/media/tv/tuner/ITunerLnb.h>
#include <android/media/tv/tuner/TunerFrontendSettings.h>
#include <android/media/tv/tuner/TunerFrontendStatus.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/StrongPointer.h>
#include <vector>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class ITunerFrontend : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(TunerFrontend)
  virtual ::android::binder::Status setCallback(const ::android::sp<::android::media::tv::tuner::ITunerFrontendCallback>& tunerFrontendCallback) = 0;
  virtual ::android::binder::Status tune(const ::android::media::tv::tuner::TunerFrontendSettings& settings) = 0;
  virtual ::android::binder::Status stopTune() = 0;
  virtual ::android::binder::Status scan(const ::android::media::tv::tuner::TunerFrontendSettings& settings, int32_t frontendScanType) = 0;
  virtual ::android::binder::Status stopScan() = 0;
  virtual ::android::binder::Status setLnb(const ::android::sp<::android::media::tv::tuner::ITunerLnb>& lnb) = 0;
  virtual ::android::binder::Status setLna(bool bEnable) = 0;
  virtual ::android::binder::Status linkCiCamToFrontend(int32_t ciCamId, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status unlinkCiCamToFrontend(int32_t ciCamId) = 0;
  virtual ::android::binder::Status close() = 0;
  virtual ::android::binder::Status getStatus(const ::std::vector<int32_t>& statusTypes, ::std::vector<::android::media::tv::tuner::TunerFrontendStatus>* _aidl_return) = 0;
  virtual ::android::binder::Status getStatusExtended_1_1(const ::std::vector<int32_t>& statusTypes, ::std::vector<::android::media::tv::tuner::TunerFrontendStatus>* _aidl_return) = 0;
  virtual ::android::binder::Status getFrontendId(int32_t* _aidl_return) = 0;
};  // class ITunerFrontend

class ITunerFrontendDefault : public ITunerFrontend {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status setCallback(const ::android::sp<::android::media::tv::tuner::ITunerFrontendCallback>& tunerFrontendCallback) override;
  ::android::binder::Status tune(const ::android::media::tv::tuner::TunerFrontendSettings& settings) override;
  ::android::binder::Status stopTune() override;
  ::android::binder::Status scan(const ::android::media::tv::tuner::TunerFrontendSettings& settings, int32_t frontendScanType) override;
  ::android::binder::Status stopScan() override;
  ::android::binder::Status setLnb(const ::android::sp<::android::media::tv::tuner::ITunerLnb>& lnb) override;
  ::android::binder::Status setLna(bool bEnable) override;
  ::android::binder::Status linkCiCamToFrontend(int32_t ciCamId, int32_t* _aidl_return) override;
  ::android::binder::Status unlinkCiCamToFrontend(int32_t ciCamId) override;
  ::android::binder::Status close() override;
  ::android::binder::Status getStatus(const ::std::vector<int32_t>& statusTypes, ::std::vector<::android::media::tv::tuner::TunerFrontendStatus>* _aidl_return) override;
  ::android::binder::Status getStatusExtended_1_1(const ::std::vector<int32_t>& statusTypes, ::std::vector<::android::media::tv::tuner::TunerFrontendStatus>* _aidl_return) override;
  ::android::binder::Status getFrontendId(int32_t* _aidl_return) override;

};

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_FRONTEND_H_
