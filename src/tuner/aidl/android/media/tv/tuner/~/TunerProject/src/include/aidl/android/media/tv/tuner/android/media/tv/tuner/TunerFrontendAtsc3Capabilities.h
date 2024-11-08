#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_ATSC3_CAPABILITIES_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_ATSC3_CAPABILITIES_H_

#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFrontendAtsc3Capabilities : public ::android::Parcelable {
public:
  int32_t bandwidthCap;
  int32_t modulationCap;
  int32_t timeInterleaveModeCap;
  int32_t codeRateCap;
  int32_t fecCap;
  int32_t demodOutputFormatCap;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFrontendAtsc3Capabilities

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_ATSC3_CAPABILITIES_H_
