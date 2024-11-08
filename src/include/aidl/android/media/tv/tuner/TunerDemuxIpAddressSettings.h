#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DEMUX_IP_ADDRESS_SETTINGS_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DEMUX_IP_ADDRESS_SETTINGS_H_

#include <android/media/tv/tuner/TunerDemuxIpAddress.h>
#include <binder/Parcel.h>
#include <binder/Status.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerDemuxIpAddressSettings : public ::android::Parcelable {
public:
  ::android::media::tv::tuner::TunerDemuxIpAddress srcIpAddress;
  ::android::media::tv::tuner::TunerDemuxIpAddress dstIpAddress;
  char16_t srcPort;
  char16_t dstPort;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerDemuxIpAddressSettings

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DEMUX_IP_ADDRESS_SETTINGS_H_
