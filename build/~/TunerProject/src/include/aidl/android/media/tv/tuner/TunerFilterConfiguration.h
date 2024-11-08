#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_CONFIGURATION_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_CONFIGURATION_H_

#include <android/media/tv/tuner/TunerFilterAlpConfiguration.h>
#include <android/media/tv/tuner/TunerFilterIpConfiguration.h>
#include <android/media/tv/tuner/TunerFilterMmtpConfiguration.h>
#include <android/media/tv/tuner/TunerFilterTlvConfiguration.h>
#include <android/media/tv/tuner/TunerFilterTsConfiguration.h>
#include <binder/Parcel.h>
#include <binder/Status.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFilterConfiguration : public ::android::Parcelable {
public:
  ::android::media::tv::tuner::TunerFilterTsConfiguration ts;
  ::android::media::tv::tuner::TunerFilterMmtpConfiguration mmtp;
  ::android::media::tv::tuner::TunerFilterIpConfiguration ip;
  ::android::media::tv::tuner::TunerFilterTlvConfiguration tlv;
  ::android::media::tv::tuner::TunerFilterAlpConfiguration alp;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFilterConfiguration

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_CONFIGURATION_H_
