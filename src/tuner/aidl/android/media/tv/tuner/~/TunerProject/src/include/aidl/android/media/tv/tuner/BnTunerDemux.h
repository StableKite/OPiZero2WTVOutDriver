#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BN_TUNER_DEMUX_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BN_TUNER_DEMUX_H_

#include <binder/IInterface.h>
#include <android/media/tv/tuner/ITunerDemux.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BnTunerDemux : public ::android::BnInterface<ITunerDemux> {
public:
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnTunerDemux

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BN_TUNER_DEMUX_H_
