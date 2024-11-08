#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_DEMUX_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_DEMUX_H_

#include <android/media/tv/tuner/ITunerDvr.h>
#include <android/media/tv/tuner/ITunerDvrCallback.h>
#include <android/media/tv/tuner/ITunerFilter.h>
#include <android/media/tv/tuner/ITunerFilterCallback.h>
#include <android/media/tv/tuner/ITunerFrontend.h>
#include <android/media/tv/tuner/ITunerTimeFilter.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/StrongPointer.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class ITunerDemux : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(TunerDemux)
  virtual ::android::binder::Status setFrontendDataSource(const ::android::sp<::android::media::tv::tuner::ITunerFrontend>& frontend) = 0;
  virtual ::android::binder::Status openFilter(int32_t mainType, int32_t subtype, int32_t bufferSize, const ::android::sp<::android::media::tv::tuner::ITunerFilterCallback>& cb, ::android::sp<::android::media::tv::tuner::ITunerFilter>* _aidl_return) = 0;
  virtual ::android::binder::Status openTimeFilter(::android::sp<::android::media::tv::tuner::ITunerTimeFilter>* _aidl_return) = 0;
  virtual ::android::binder::Status getAvSyncHwId(const ::android::sp<::android::media::tv::tuner::ITunerFilter>& tunerFilter, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status getAvSyncTime(int32_t avSyncHwId, int64_t* _aidl_return) = 0;
  virtual ::android::binder::Status openDvr(int32_t dvbType, int32_t bufferSize, const ::android::sp<::android::media::tv::tuner::ITunerDvrCallback>& cb, ::android::sp<::android::media::tv::tuner::ITunerDvr>* _aidl_return) = 0;
  virtual ::android::binder::Status connectCiCam(int32_t ciCamId) = 0;
  virtual ::android::binder::Status disconnectCiCam() = 0;
  virtual ::android::binder::Status close() = 0;
};  // class ITunerDemux

class ITunerDemuxDefault : public ITunerDemux {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status setFrontendDataSource(const ::android::sp<::android::media::tv::tuner::ITunerFrontend>& frontend) override;
  ::android::binder::Status openFilter(int32_t mainType, int32_t subtype, int32_t bufferSize, const ::android::sp<::android::media::tv::tuner::ITunerFilterCallback>& cb, ::android::sp<::android::media::tv::tuner::ITunerFilter>* _aidl_return) override;
  ::android::binder::Status openTimeFilter(::android::sp<::android::media::tv::tuner::ITunerTimeFilter>* _aidl_return) override;
  ::android::binder::Status getAvSyncHwId(const ::android::sp<::android::media::tv::tuner::ITunerFilter>& tunerFilter, int32_t* _aidl_return) override;
  ::android::binder::Status getAvSyncTime(int32_t avSyncHwId, int64_t* _aidl_return) override;
  ::android::binder::Status openDvr(int32_t dvbType, int32_t bufferSize, const ::android::sp<::android::media::tv::tuner::ITunerDvrCallback>& cb, ::android::sp<::android::media::tv::tuner::ITunerDvr>* _aidl_return) override;
  ::android::binder::Status connectCiCam(int32_t ciCamId) override;
  ::android::binder::Status disconnectCiCam() override;
  ::android::binder::Status close() override;

};

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_DEMUX_H_
