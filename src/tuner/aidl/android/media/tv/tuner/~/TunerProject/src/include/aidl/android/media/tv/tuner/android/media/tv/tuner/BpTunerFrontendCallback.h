#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_FRONTEND_CALLBACK_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_FRONTEND_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/media/tv/tuner/ITunerFrontendCallback.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BpTunerFrontendCallback : public ::android::BpInterface<ITunerFrontendCallback> {
public:
  explicit BpTunerFrontendCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpTunerFrontendCallback() = default;
  ::android::binder::Status onEvent(int32_t frontendEventType) override;
  ::android::binder::Status onScanMessage(int32_t messageType, const ::android::media::tv::tuner::TunerFrontendScanMessage& message) override;
};  // class BpTunerFrontendCallback

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_FRONTEND_CALLBACK_H_
