#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_FILTER_CALLBACK_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_FILTER_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/media/tv/tuner/ITunerFilterCallback.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BpTunerFilterCallback : public ::android::BpInterface<ITunerFilterCallback> {
public:
  explicit BpTunerFilterCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpTunerFilterCallback() = default;
  ::android::binder::Status onFilterStatus(int32_t status) override;
  ::android::binder::Status onFilterEvent(const ::std::vector<::android::media::tv::tuner::TunerFilterEvent>& filterEvent) override;
};  // class BpTunerFilterCallback

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_FILTER_CALLBACK_H_
