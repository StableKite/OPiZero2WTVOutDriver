#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_TS_CONFIGURATION_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_TS_CONFIGURATION_H_

#include <android/media/tv/tuner/TunerFilterSettings.h>
#include <binder/Parcel.h>
#include <binder/Status.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFilterTsConfiguration : public ::android::Parcelable {
public:
  char16_t tpid;
  ::android::media::tv::tuner::TunerFilterSettings filterSettings;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFilterTsConfiguration

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_TS_CONFIGURATION_H_
