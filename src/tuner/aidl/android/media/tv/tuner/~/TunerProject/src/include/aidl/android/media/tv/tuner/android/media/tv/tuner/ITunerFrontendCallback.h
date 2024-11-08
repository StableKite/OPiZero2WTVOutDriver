#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_FRONTEND_CALLBACK_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_FRONTEND_CALLBACK_H_

#include <android/media/tv/tuner/TunerFrontendScanMessage.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/StrongPointer.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class ITunerFrontendCallback : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(TunerFrontendCallback)
  virtual ::android::binder::Status onEvent(int32_t frontendEventType) = 0;
  virtual ::android::binder::Status onScanMessage(int32_t messageType, const ::android::media::tv::tuner::TunerFrontendScanMessage& message) = 0;
};  // class ITunerFrontendCallback

class ITunerFrontendCallbackDefault : public ITunerFrontendCallback {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status onEvent(int32_t frontendEventType) override;
  ::android::binder::Status onScanMessage(int32_t messageType, const ::android::media::tv::tuner::TunerFrontendScanMessage& message) override;

};

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_FRONTEND_CALLBACK_H_
