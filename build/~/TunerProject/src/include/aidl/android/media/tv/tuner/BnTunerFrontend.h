#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BN_TUNER_FRONTEND_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BN_TUNER_FRONTEND_H_

#include <binder/IInterface.h>
#include <android/media/tv/tuner/ITunerFrontend.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BnTunerFrontend : public ::android::BnInterface<ITunerFrontend> {
public:
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnTunerFrontend

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BN_TUNER_FRONTEND_H_
