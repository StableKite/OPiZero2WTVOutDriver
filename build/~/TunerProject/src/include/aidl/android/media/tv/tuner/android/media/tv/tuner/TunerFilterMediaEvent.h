#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_MEDIA_EVENT_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_MEDIA_EVENT_H_

#include <android/hardware/common/NativeHandle.h>
#include <android/media/tv/tuner/TunerAudioExtraMetaData.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFilterMediaEvent : public ::android::Parcelable {
public:
  char16_t streamId;
  bool isPtsPresent;
  int64_t pts;
  int32_t dataLength;
  int32_t offset;
  ::android::hardware::common::NativeHandle avMemory;
  bool isSecureMemory;
  int64_t avDataId;
  int32_t mpuSequenceNumber;
  bool isPesPrivateData;
  bool isAudioExtraMetaData;
  ::android::media::tv::tuner::TunerAudioExtraMetaData audio;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFilterMediaEvent

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_MEDIA_EVENT_H_
