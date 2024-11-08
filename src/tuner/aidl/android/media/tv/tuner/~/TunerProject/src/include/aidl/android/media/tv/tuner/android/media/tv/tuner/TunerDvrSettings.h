#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DVR_SETTINGS_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DVR_SETTINGS_H_

#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerDvrSettings : public ::android::Parcelable {
public:
  int32_t statusMask;
  int32_t lowThreshold;
  int32_t highThreshold;
  int32_t dataFormat;
  int32_t packetSize;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerDvrSettings

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DVR_SETTINGS_H_
