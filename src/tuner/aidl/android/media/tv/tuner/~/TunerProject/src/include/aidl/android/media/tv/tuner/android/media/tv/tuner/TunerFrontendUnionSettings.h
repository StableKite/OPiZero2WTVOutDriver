#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_UNION_SETTINGS_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_UNION_SETTINGS_H_

#include <android/media/tv/tuner/TunerFrontendAnalogSettings.h>
#include <android/media/tv/tuner/TunerFrontendAtsc3Settings.h>
#include <android/media/tv/tuner/TunerFrontendAtscSettings.h>
#include <android/media/tv/tuner/TunerFrontendCableSettings.h>
#include <android/media/tv/tuner/TunerFrontendDtmbSettings.h>
#include <android/media/tv/tuner/TunerFrontendDvbsSettings.h>
#include <android/media/tv/tuner/TunerFrontendDvbtSettings.h>
#include <android/media/tv/tuner/TunerFrontendIsdbs3Settings.h>
#include <android/media/tv/tuner/TunerFrontendIsdbsSettings.h>
#include <android/media/tv/tuner/TunerFrontendIsdbtSettings.h>
#include <binder/Parcel.h>
#include <binder/Status.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFrontendUnionSettings : public ::android::Parcelable {
public:
  ::android::media::tv::tuner::TunerFrontendAnalogSettings analog;
  ::android::media::tv::tuner::TunerFrontendAtscSettings atsc;
  ::android::media::tv::tuner::TunerFrontendAtsc3Settings atsc3;
  ::android::media::tv::tuner::TunerFrontendCableSettings cable;
  ::android::media::tv::tuner::TunerFrontendDvbsSettings dvbs;
  ::android::media::tv::tuner::TunerFrontendDvbtSettings dvbt;
  ::android::media::tv::tuner::TunerFrontendIsdbsSettings isdbs;
  ::android::media::tv::tuner::TunerFrontendIsdbs3Settings isdbs3;
  ::android::media::tv::tuner::TunerFrontendIsdbtSettings isdbt;
  ::android::media::tv::tuner::TunerFrontendDtmbSettings dtmb;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFrontendUnionSettings

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_UNION_SETTINGS_H_
