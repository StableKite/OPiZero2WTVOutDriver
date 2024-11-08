#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_SCAN_ATSC3_PLP_INFO_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_SCAN_ATSC3_PLP_INFO_H_

#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFrontendScanAtsc3PlpInfo : public ::android::Parcelable {
public:
  int8_t plpId;
  bool llsFlag;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFrontendScanAtsc3PlpInfo

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_SCAN_ATSC3_PLP_INFO_H_
