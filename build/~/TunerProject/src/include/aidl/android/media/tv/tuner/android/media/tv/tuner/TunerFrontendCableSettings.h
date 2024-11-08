#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_CABLE_SETTINGS_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_CABLE_SETTINGS_H_

#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFrontendCableSettings : public ::android::Parcelable {
public:
  int32_t frequency;
  int32_t modulation;
  int64_t innerFec;
  int32_t symbolRate;
  int32_t outerFec;
  int32_t annex;
  int32_t spectralInversion;
  bool isExtended;
  int32_t interleaveMode;
  int32_t bandwidth;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFrontendCableSettings

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_CABLE_SETTINGS_H_
