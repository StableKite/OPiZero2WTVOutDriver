#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_INFO_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_INFO_H_

#include <android/media/tv/tuner/TunerFrontendCapabilities.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <vector>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFrontendInfo : public ::android::Parcelable {
public:
  int32_t handle;
  int32_t type;
  int32_t minFrequency;
  int32_t maxFrequency;
  int32_t minSymbolRate;
  int32_t maxSymbolRate;
  int32_t acquireRange;
  int32_t exclusiveGroupId;
  ::std::vector<int32_t> statusCaps;
  ::android::media::tv::tuner::TunerFrontendCapabilities caps;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFrontendInfo

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_INFO_H_
