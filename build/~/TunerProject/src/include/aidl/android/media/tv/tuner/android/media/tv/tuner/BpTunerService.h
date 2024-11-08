#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_SERVICE_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_SERVICE_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/media/tv/tuner/ITunerService.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BpTunerService : public ::android::BpInterface<ITunerService> {
public:
  explicit BpTunerService(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpTunerService() = default;
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
};  // class BpTunerService

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_SERVICE_H_
