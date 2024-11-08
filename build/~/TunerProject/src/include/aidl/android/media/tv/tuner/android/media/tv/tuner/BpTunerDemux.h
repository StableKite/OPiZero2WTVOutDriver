#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_DEMUX_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_DEMUX_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/media/tv/tuner/ITunerDemux.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BpTunerDemux : public ::android::BpInterface<ITunerDemux> {
public:
  explicit BpTunerDemux(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpTunerDemux() = default;
  ::android::binder::Status setFrontendDataSource(const ::android::sp<::android::media::tv::tuner::ITunerFrontend>& frontend) override;
  ::android::binder::Status openFilter(int32_t mainType, int32_t subtype, int32_t bufferSize, const ::android::sp<::android::media::tv::tuner::ITunerFilterCallback>& cb, ::android::sp<::android::media::tv::tuner::ITunerFilter>* _aidl_return) override;
  ::android::binder::Status openTimeFilter(::android::sp<::android::media::tv::tuner::ITunerTimeFilter>* _aidl_return) override;
  ::android::binder::Status getAvSyncHwId(const ::android::sp<::android::media::tv::tuner::ITunerFilter>& tunerFilter, int32_t* _aidl_return) override;
  ::android::binder::Status getAvSyncTime(int32_t avSyncHwId, int64_t* _aidl_return) override;
  ::android::binder::Status openDvr(int32_t dvbType, int32_t bufferSize, const ::android::sp<::android::media::tv::tuner::ITunerDvrCallback>& cb, ::android::sp<::android::media::tv::tuner::ITunerDvr>* _aidl_return) override;
  ::android::binder::Status connectCiCam(int32_t ciCamId) override;
  ::android::binder::Status disconnectCiCam() override;
  ::android::binder::Status close() override;
};  // class BpTunerDemux

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_DEMUX_H_
