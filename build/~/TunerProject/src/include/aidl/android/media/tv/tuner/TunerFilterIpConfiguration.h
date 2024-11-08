#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_IP_CONFIGURATION_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_IP_CONFIGURATION_H_

#include <android/media/tv/tuner/TunerDemuxIpAddressSettings.h>
#include <android/media/tv/tuner/TunerFilterSettings.h>
#include <binder/Parcel.h>
#include <binder/Status.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFilterIpConfiguration : public ::android::Parcelable {
public:
  ::android::media::tv::tuner::TunerDemuxIpAddressSettings ipAddr;
  ::android::media::tv::tuner::TunerFilterSettings filterSettings;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFilterIpConfiguration

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_IP_CONFIGURATION_H_
