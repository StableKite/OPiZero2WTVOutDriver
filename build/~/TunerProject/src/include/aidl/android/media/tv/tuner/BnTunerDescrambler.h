#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BN_TUNER_DESCRAMBLER_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BN_TUNER_DESCRAMBLER_H_

#include <binder/IInterface.h>
#include <android/media/tv/tuner/ITunerDescrambler.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BnTunerDescrambler : public ::android::BnInterface<ITunerDescrambler> {
public:
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnTunerDescrambler

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BN_TUNER_DESCRAMBLER_H_
