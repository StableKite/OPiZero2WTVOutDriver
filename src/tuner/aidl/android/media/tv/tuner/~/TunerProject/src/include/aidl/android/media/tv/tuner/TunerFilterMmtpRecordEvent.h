#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_MMTP_RECORD_EVENT_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_MMTP_RECORD_EVENT_H_

#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFilterMmtpRecordEvent : public ::android::Parcelable {
public:
  int32_t scHevcIndexMask;
  int64_t byteNumber;
  bool isExtended;
  int64_t pts;
  int32_t mpuSequenceNumber;
  int32_t firstMbInSlice;
  int32_t tsIndexMask;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFilterMmtpRecordEvent

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_MMTP_RECORD_EVENT_H_
