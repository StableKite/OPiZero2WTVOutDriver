#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_DVBT_SETTINGS_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_DVBT_SETTINGS_H_

#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFrontendDvbtSettings : public ::android::Parcelable {
public:
  int32_t frequency;
  int32_t transmissionMode;
  int32_t bandwidth;
  int32_t constellation;
  int32_t hierarchy;
  int32_t hpCodeRate;
  int32_t lpCodeRate;
  int32_t guardInterval;
  bool isHighPriority;
  int32_t standard;
  bool isMiso;
  int32_t plpMode;
  int32_t plpId;
  int32_t plpGroupId;
  bool isExtended;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFrontendDvbtSettings

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_DVBT_SETTINGS_H_
