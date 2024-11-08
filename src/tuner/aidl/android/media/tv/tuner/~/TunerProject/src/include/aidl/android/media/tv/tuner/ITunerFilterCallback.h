#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_FILTER_CALLBACK_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_FILTER_CALLBACK_H_

#include <android/media/tv/tuner/TunerFilterEvent.h>
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

class ITunerFilterCallback : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(TunerFilterCallback)
  virtual ::android::binder::Status onFilterStatus(int32_t status) = 0;
  virtual ::android::binder::Status onFilterEvent(const ::std::vector<::android::media::tv::tuner::TunerFilterEvent>& filterEvent) = 0;
};  // class ITunerFilterCallback

class ITunerFilterCallbackDefault : public ITunerFilterCallback {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status onFilterStatus(int32_t status) override;
  ::android::binder::Status onFilterEvent(const ::std::vector<::android::media::tv::tuner::TunerFilterEvent>& filterEvent) override;

};

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_FILTER_CALLBACK_H_
