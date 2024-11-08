#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_DVBT_CAPABILITIES_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_DVBT_CAPABILITIES_H_

#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFrontendDvbtCapabilities : public ::android::Parcelable {
public:
  int32_t transmissionModeCap;
  int32_t bandwidthCap;
  int32_t constellationCap;
  int32_t codeRateCap;
  int32_t hierarchyCap;
  int32_t guardIntervalCap;
  bool isT2Supported;
  bool isMisoSupported;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFrontendDvbtCapabilities

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_DVBT_CAPABILITIES_H_
