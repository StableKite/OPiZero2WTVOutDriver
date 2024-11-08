#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BN_TUNER_FILTER_CALLBACK_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BN_TUNER_FILTER_CALLBACK_H_

#include <binder/IInterface.h>
#include <android/media/tv/tuner/ITunerFilterCallback.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BnTunerFilterCallback : public ::android::BnInterface<ITunerFilterCallback> {
public:
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnTunerFilterCallback

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BN_TUNER_FILTER_CALLBACK_H_
