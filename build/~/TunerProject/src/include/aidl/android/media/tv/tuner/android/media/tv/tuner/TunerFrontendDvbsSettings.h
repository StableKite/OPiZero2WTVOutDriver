#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_DVBS_SETTINGS_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_DVBS_SETTINGS_H_

#include <android/media/tv/tuner/TunerFrontendDvbsCodeRate.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFrontendDvbsSettings : public ::android::Parcelable {
public:
  int32_t frequency;
  int32_t modulation;
  ::android::media::tv::tuner::TunerFrontendDvbsCodeRate codeRate;
  int32_t symbolRate;
  int32_t rolloff;
  int32_t pilot;
  int32_t inputStreamId;
  int32_t standard;
  int32_t vcm;
  bool isExtended;
  int32_t scanType;
  bool isDiseqcRxMessage;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFrontendDvbsSettings

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_DVBS_SETTINGS_H_
