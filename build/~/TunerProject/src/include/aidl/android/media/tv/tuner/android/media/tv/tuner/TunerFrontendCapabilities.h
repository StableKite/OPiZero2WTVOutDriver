#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_CAPABILITIES_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_CAPABILITIES_H_

#include <android/media/tv/tuner/TunerFrontendAnalogCapabilities.h>
#include <android/media/tv/tuner/TunerFrontendAtsc3Capabilities.h>
#include <android/media/tv/tuner/TunerFrontendAtscCapabilities.h>
#include <android/media/tv/tuner/TunerFrontendCableCapabilities.h>
#include <android/media/tv/tuner/TunerFrontendDvbsCapabilities.h>
#include <android/media/tv/tuner/TunerFrontendDvbtCapabilities.h>
#include <android/media/tv/tuner/TunerFrontendIsdbs3Capabilities.h>
#include <android/media/tv/tuner/TunerFrontendIsdbsCapabilities.h>
#include <android/media/tv/tuner/TunerFrontendIsdbtCapabilities.h>
#include <binder/Parcel.h>
#include <binder/Status.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFrontendCapabilities : public ::android::Parcelable {
public:
  ::android::media::tv::tuner::TunerFrontendAnalogCapabilities analogCaps;
  ::android::media::tv::tuner::TunerFrontendAtscCapabilities atscCaps;
  ::android::media::tv::tuner::TunerFrontendAtsc3Capabilities atsc3Caps;
  ::android::media::tv::tuner::TunerFrontendCableCapabilities cableCaps;
  ::android::media::tv::tuner::TunerFrontendDvbsCapabilities dvbsCaps;
  ::android::media::tv::tuner::TunerFrontendDvbtCapabilities dvbtCaps;
  ::android::media::tv::tuner::TunerFrontendIsdbsCapabilities isdbsCaps;
  ::android::media::tv::tuner::TunerFrontendIsdbs3Capabilities isdbs3Caps;
  ::android::media::tv::tuner::TunerFrontendIsdbtCapabilities isdbtCaps;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFrontendCapabilities

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FRONTEND_CAPABILITIES_H_
