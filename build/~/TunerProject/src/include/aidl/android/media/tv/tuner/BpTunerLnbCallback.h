#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_LNB_CALLBACK_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_LNB_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/media/tv/tuner/ITunerLnbCallback.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BpTunerLnbCallback : public ::android::BpInterface<ITunerLnbCallback> {
public:
  explicit BpTunerLnbCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpTunerLnbCallback() = default;
  ::android::binder::Status onEvent(int32_t lnbEventType) override;
  ::android::binder::Status onDiseqcMessage(const ::std::vector<uint8_t>& diseqcMessage) override;
};  // class BpTunerLnbCallback

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_LNB_CALLBACK_H_
