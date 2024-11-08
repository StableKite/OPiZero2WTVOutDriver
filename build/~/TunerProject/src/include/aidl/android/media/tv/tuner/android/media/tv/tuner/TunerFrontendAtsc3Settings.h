#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_ATSC3_SETTINGS_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_ATSC3_SETTINGS_H_

#include <android/media/tv/tuner/TunerFrontendAtsc3PlpSettings.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <vector>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFrontendAtsc3Settings : public ::android::Parcelable {
public:
  int32_t frequency;
  int32_t bandwidth;
  int32_t demodOutputFormat;
  ::std::vector<::android::media::tv::tuner::TunerFrontendAtsc3PlpSettings> plpSettings;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFrontendAtsc3Settings

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_ATSC3_SETTINGS_H_
