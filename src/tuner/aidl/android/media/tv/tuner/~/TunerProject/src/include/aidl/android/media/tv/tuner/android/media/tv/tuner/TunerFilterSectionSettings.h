#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_SECTION_SETTINGS_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_SECTION_SETTINGS_H_

#include <android/media/tv/tuner/TunerFilterSectionCondition.h>
#include <binder/Parcel.h>
#include <binder/Status.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFilterSectionSettings : public ::android::Parcelable {
public:
  ::android::media::tv::tuner::TunerFilterSectionCondition condition;
  bool isCheckCrc;
  bool isRepeat;
  bool isRaw;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFilterSectionSettings

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_SECTION_SETTINGS_H_
