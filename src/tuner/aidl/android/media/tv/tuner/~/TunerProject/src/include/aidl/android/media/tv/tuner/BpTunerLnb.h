#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_LNB_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_LNB_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/media/tv/tuner/ITunerLnb.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BpTunerLnb : public ::android::BpInterface<ITunerLnb> {
public:
  explicit BpTunerLnb(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpTunerLnb() = default;
  ::android::binder::Status setCallback(const ::android::sp<::android::media::tv::tuner::ITunerLnbCallback>& tunerLnbCallback) override;
  ::android::binder::Status setVoltage(int32_t voltage) override;
  ::android::binder::Status setTone(int32_t tone) override;
  ::android::binder::Status setSatellitePosition(int32_t position) override;
  ::android::binder::Status sendDiseqcMessage(const ::std::vector<uint8_t>& diseqcMessage) override;
  ::android::binder::Status close() override;
};  // class BpTunerLnb

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_LNB_H_
