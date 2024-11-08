#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_LNB_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_LNB_H_

#include <android/media/tv/tuner/ITunerLnbCallback.h>
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

class ITunerLnb : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(TunerLnb)
  virtual ::android::binder::Status setCallback(const ::android::sp<::android::media::tv::tuner::ITunerLnbCallback>& tunerLnbCallback) = 0;
  virtual ::android::binder::Status setVoltage(int32_t voltage) = 0;
  virtual ::android::binder::Status setTone(int32_t tone) = 0;
  virtual ::android::binder::Status setSatellitePosition(int32_t position) = 0;
  virtual ::android::binder::Status sendDiseqcMessage(const ::std::vector<uint8_t>& diseqcMessage) = 0;
  virtual ::android::binder::Status close() = 0;
};  // class ITunerLnb

class ITunerLnbDefault : public ITunerLnb {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status setCallback(const ::android::sp<::android::media::tv::tuner::ITunerLnbCallback>& tunerLnbCallback) override;
  ::android::binder::Status setVoltage(int32_t voltage) override;
  ::android::binder::Status setTone(int32_t tone) override;
  ::android::binder::Status setSatellitePosition(int32_t position) override;
  ::android::binder::Status sendDiseqcMessage(const ::std::vector<uint8_t>& diseqcMessage) override;
  ::android::binder::Status close() override;

};

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_LNB_H_
