#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_STATUS_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_STATUS_H_

#include <android/media/tv/tuner/TunerFrontendStatusAtsc3PlpInfo.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <vector>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFrontendStatus : public ::android::Parcelable {
public:
  bool isDemodLocked;
  int32_t snr;
  int32_t ber;
  int32_t per;
  int32_t preBer;
  int32_t signalQuality;
  int32_t signalStrength;
  int32_t symbolRate;
  int64_t innerFec;
  int32_t modulation;
  int32_t inversion;
  int32_t lnbVoltage;
  int8_t plpId;
  bool isEWBS;
  int8_t agc;
  bool isLnaOn;
  ::std::vector<bool> isLayerError;
  int32_t mer;
  int32_t freqOffset;
  int32_t hierarchy;
  bool isRfLocked;
  ::std::vector<::android::media::tv::tuner::TunerFrontendStatusAtsc3PlpInfo> plpInfo;
  ::std::vector<int32_t> modulations;
  ::std::vector<int32_t> bers;
  ::std::vector<int64_t> codeRates;
  int32_t bandwidth;
  int32_t interval;
  int32_t transmissionMode;
  int32_t uec;
  char16_t systemId;
  ::std::vector<int32_t> interleaving;
  ::std::vector<uint8_t> isdbtSegment;
  ::std::vector<int32_t> tsDataRate;
  int32_t rollOff;
  bool isMiso;
  bool isLinear;
  bool isShortFrames;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFrontendStatus

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_STATUS_H_
