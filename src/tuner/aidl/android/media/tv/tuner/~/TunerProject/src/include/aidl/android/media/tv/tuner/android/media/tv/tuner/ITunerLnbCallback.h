#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_LNB_CALLBACK_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_LNB_CALLBACK_H_

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

class ITunerLnbCallback : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(TunerLnbCallback)
  virtual ::android::binder::Status onEvent(int32_t lnbEventType) = 0;
  virtual ::android::binder::Status onDiseqcMessage(const ::std::vector<uint8_t>& diseqcMessage) = 0;
};  // class ITunerLnbCallback

class ITunerLnbCallbackDefault : public ITunerLnbCallback {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status onEvent(int32_t lnbEventType) override;
  ::android::binder::Status onDiseqcMessage(const ::std::vector<uint8_t>& diseqcMessage) override;

};

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_LNB_CALLBACK_H_
