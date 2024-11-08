#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_DVR_CALLBACK_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_DVR_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/StrongPointer.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class ITunerDvrCallback : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(TunerDvrCallback)
  virtual ::android::binder::Status onRecordStatus(int32_t status) = 0;
  virtual ::android::binder::Status onPlaybackStatus(int32_t status) = 0;
};  // class ITunerDvrCallback

class ITunerDvrCallbackDefault : public ITunerDvrCallback {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status onRecordStatus(int32_t status) override;
  ::android::binder::Status onPlaybackStatus(int32_t status) override;

};

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_DVR_CALLBACK_H_
