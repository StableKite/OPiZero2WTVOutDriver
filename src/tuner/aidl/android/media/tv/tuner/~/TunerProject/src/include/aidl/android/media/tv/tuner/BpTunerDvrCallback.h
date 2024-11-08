#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_DVR_CALLBACK_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_DVR_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/media/tv/tuner/ITunerDvrCallback.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BpTunerDvrCallback : public ::android::BpInterface<ITunerDvrCallback> {
public:
  explicit BpTunerDvrCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpTunerDvrCallback() = default;
  ::android::binder::Status onRecordStatus(int32_t status) override;
  ::android::binder::Status onPlaybackStatus(int32_t status) override;
};  // class BpTunerDvrCallback

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_DVR_CALLBACK_H_
