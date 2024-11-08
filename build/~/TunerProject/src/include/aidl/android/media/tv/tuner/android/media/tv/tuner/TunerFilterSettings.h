#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_SETTINGS_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_SETTINGS_H_

#include <android/media/tv/tuner/TunerFilterAvSettings.h>
#include <android/media/tv/tuner/TunerFilterDownloadSettings.h>
#include <android/media/tv/tuner/TunerFilterPesDataSettings.h>
#include <android/media/tv/tuner/TunerFilterRecordSettings.h>
#include <android/media/tv/tuner/TunerFilterSectionSettings.h>
#include <binder/Parcel.h>
#include <binder/Status.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFilterSettings : public ::android::Parcelable {
public:
  bool nothing;
  ::android::media::tv::tuner::TunerFilterAvSettings av;
  ::android::media::tv::tuner::TunerFilterSectionSettings section;
  ::android::media::tv::tuner::TunerFilterPesDataSettings pesData;
  ::android::media::tv::tuner::TunerFilterRecordSettings record;
  ::android::media::tv::tuner::TunerFilterDownloadSettings download;
  bool isPassthrough;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFilterSettings

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_SETTINGS_H_
