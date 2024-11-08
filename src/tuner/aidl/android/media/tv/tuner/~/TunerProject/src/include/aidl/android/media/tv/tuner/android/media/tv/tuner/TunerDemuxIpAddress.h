#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DEMUX_IP_ADDRESS_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DEMUX_IP_ADDRESS_H_

#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <vector>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerDemuxIpAddress : public ::android::Parcelable {
public:
  bool isIpV6;
  ::std::vector<uint8_t> addr;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerDemuxIpAddress

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DEMUX_IP_ADDRESS_H_
