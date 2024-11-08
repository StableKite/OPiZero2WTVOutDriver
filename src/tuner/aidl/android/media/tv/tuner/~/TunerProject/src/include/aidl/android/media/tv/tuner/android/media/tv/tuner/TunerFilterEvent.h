#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_EVENT_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_EVENT_H_

#include <android/media/tv/tuner/TunerFilterDownloadEvent.h>
#include <android/media/tv/tuner/TunerFilterIpPayloadEvent.h>
#include <android/media/tv/tuner/TunerFilterMediaEvent.h>
#include <android/media/tv/tuner/TunerFilterMmtpRecordEvent.h>
#include <android/media/tv/tuner/TunerFilterMonitorEvent.h>
#include <android/media/tv/tuner/TunerFilterPesEvent.h>
#include <android/media/tv/tuner/TunerFilterSectionEvent.h>
#include <android/media/tv/tuner/TunerFilterTemiEvent.h>
#include <android/media/tv/tuner/TunerFilterTsRecordEvent.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class TunerFilterEvent : public ::android::Parcelable {
public:
  ::android::media::tv::tuner::TunerFilterMediaEvent media;
  ::android::media::tv::tuner::TunerFilterSectionEvent section;
  ::android::media::tv::tuner::TunerFilterPesEvent pes;
  ::android::media::tv::tuner::TunerFilterTsRecordEvent tsRecord;
  ::android::media::tv::tuner::TunerFilterMmtpRecordEvent mmtpRecord;
  ::android::media::tv::tuner::TunerFilterDownloadEvent download;
  ::android::media::tv::tuner::TunerFilterIpPayloadEvent ipPayload;
  ::android::media::tv::tuner::TunerFilterTemiEvent temi;
  ::android::media::tv::tuner::TunerFilterMonitorEvent monitor;
  int32_t startId;
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) override final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const override final;
};  // class TunerFilterEvent

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_TUNER_FILTER_EVENT_H_
