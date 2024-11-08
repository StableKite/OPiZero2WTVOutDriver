#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_TEMI_EVENT_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_TEMI_EVENT_H_

#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <vector>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFilterTemiEvent : public ::android::Parcelable {
public:
  int64_t pts;
  int8_t descrTag;
  ::std::vector<uint8_t> descrData;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFilterTemiEvent

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_TEMI_EVENT_H_
