#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_SCAN_MESSAGE_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_SCAN_MESSAGE_H_

#include <android/media/tv/tuner/TunerFrontendScanAtsc3PlpInfo.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <vector>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFrontendScanMessage : public ::android::Parcelable {
public:
  bool isLocked;
  bool isEnd;
  int8_t progressPercent;
  ::std::vector<int32_t> frequencies;
  ::std::vector<int32_t> symbolRates;
  int32_t hierarchy;
  int32_t analogType;
  ::std::vector<uint8_t> plpIds;
  ::std::vector<uint8_t> groupIds;
  ::std::vector<char16_t> inputStreamIds;
  int32_t std;
  ::std::vector<::android::media::tv::tuner::TunerFrontendScanAtsc3PlpInfo> atsc3PlpInfos;
  int32_t modulation;
  int32_t annex;
  bool isHighPriority;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFrontendScanMessage

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_SCAN_MESSAGE_H_
