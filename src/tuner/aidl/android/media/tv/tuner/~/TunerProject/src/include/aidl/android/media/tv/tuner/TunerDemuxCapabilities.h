#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DEMUX_CAPABILITIES_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DEMUX_CAPABILITIES_H_

#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <vector>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerDemuxCapabilities : public ::android::Parcelable {
public:
  int32_t numDemux;
  int32_t numRecord;
  int32_t numPlayback;
  int32_t numTsFilter;
  int32_t numSectionFilter;
  int32_t numAudioFilter;
  int32_t numVideoFilter;
  int32_t numPesFilter;
  int32_t numPcrFilter;
  int32_t numBytesInSectionFilter;
  int32_t filterCaps;
  ::std::vector<int32_t> linkCaps;
  bool bTimeFilter;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerDemuxCapabilities

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_DEMUX_CAPABILITIES_H_
