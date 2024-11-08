#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_AUDIO_EXTRA_META_DATA_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_AUDIO_EXTRA_META_DATA_H_

#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerAudioExtraMetaData : public ::android::Parcelable {
public:
  int8_t adFade;
  int8_t adPan;
  int8_t versionTextTag;
  int8_t adGainCenter;
  int8_t adGainFront;
  int8_t adGainSurround;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerAudioExtraMetaData

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_AUDIO_EXTRA_META_DATA_H_
