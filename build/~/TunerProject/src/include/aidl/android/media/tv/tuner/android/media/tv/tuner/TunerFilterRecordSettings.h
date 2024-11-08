#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_RECORD_SETTINGS_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_RECORD_SETTINGS_H_

#include <android/media/tv/tuner/TunerFilterScIndexMask.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFilterRecordSettings : public ::android::Parcelable {
public:
  int32_t tsIndexMask;
  int32_t scIndexType;
  ::android::media::tv::tuner::TunerFilterScIndexMask scIndexMask;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFilterRecordSettings

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_RECORD_SETTINGS_H_
