#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_TS_RECORD_EVENT_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_TS_RECORD_EVENT_H_

#include <android/media/tv/tuner/TunerFilterScIndexMask.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFilterTsRecordEvent : public ::android::Parcelable {
public:
  char16_t pid;
  int32_t tsIndexMask;
  ::android::media::tv::tuner::TunerFilterScIndexMask scIndexMask;
  int64_t byteNumber;
  bool isExtended;
  int64_t pts;
  int32_t firstMbInSlice;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFilterTsRecordEvent

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_TS_RECORD_EVENT_H_
