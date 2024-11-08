#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_SECTION_BITS_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_SECTION_BITS_H_

#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <vector>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFilterSectionBits : public ::android::Parcelable {
public:
  ::std::vector<uint8_t> filter;
  ::std::vector<uint8_t> mask;
  ::std::vector<uint8_t> mode;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFilterSectionBits

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_SECTION_BITS_H_
