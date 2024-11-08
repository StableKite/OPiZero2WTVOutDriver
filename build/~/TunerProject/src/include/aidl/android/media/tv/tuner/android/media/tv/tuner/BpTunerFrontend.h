#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_FRONTEND_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_FRONTEND_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/media/tv/tuner/ITunerFrontend.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BpTunerFrontend : public ::android::BpInterface<ITunerFrontend> {
public:
  explicit BpTunerFrontend(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpTunerFrontend() = default;
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
};  // class BpTunerFrontend

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_FRONTEND_H_
