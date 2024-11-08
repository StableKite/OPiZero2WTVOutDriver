#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_ISDBT_SETTINGS_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_ISDBT_SETTINGS_H_

#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFrontendIsdbtSettings : public ::android::Parcelable {
public:
  int32_t frequency;
  int32_t modulation;
  int32_t bandwidth;
  int32_t mode;
  int32_t codeRate;
  int32_t guardInterval;
  int32_t serviceAreaId;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFrontendIsdbtSettings

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_ISDBT_SETTINGS_H_
