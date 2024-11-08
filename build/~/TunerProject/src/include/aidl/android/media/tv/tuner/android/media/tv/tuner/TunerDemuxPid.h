#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DEMUX_PID_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DEMUX_PID_H_

#include <binder/Parcel.h>
#include <binder/Status.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerDemuxPid : public ::android::Parcelable {
public:
  char16_t tPid;
  char16_t mmtpPid;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerDemuxPid

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DEMUX_PID_H_
