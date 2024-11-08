#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_DESCRAMBLER_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_DESCRAMBLER_H_

#include <android/media/tv/tuner/ITunerDemux.h>
#include <android/media/tv/tuner/ITunerFilter.h>
#include <android/media/tv/tuner/TunerDemuxPid.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/StrongPointer.h>
#include <vector>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class ITunerDescrambler : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(TunerDescrambler)
  virtual ::android::binder::Status setDemuxSource(const ::android::sp<::android::media::tv::tuner::ITunerDemux>& tunerDemux) = 0;
  virtual ::android::binder::Status setKeyToken(const ::std::vector<uint8_t>& keyToken) = 0;
  virtual ::android::binder::Status addPid(const ::android::media::tv::tuner::TunerDemuxPid& pid, const ::android::sp<::android::media::tv::tuner::ITunerFilter>& optionalSourceFilter) = 0;
  virtual ::android::binder::Status removePid(const ::android::media::tv::tuner::TunerDemuxPid& pid, const ::android::sp<::android::media::tv::tuner::ITunerFilter>& optionalSourceFilter) = 0;
  virtual ::android::binder::Status close() = 0;
};  // class ITunerDescrambler

class ITunerDescramblerDefault : public ITunerDescrambler {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status setDemuxSource(const ::android::sp<::android::media::tv::tuner::ITunerDemux>& tunerDemux) override;
  ::android::binder::Status setKeyToken(const ::std::vector<uint8_t>& keyToken) override;
  ::android::binder::Status addPid(const ::android::media::tv::tuner::TunerDemuxPid& pid, const ::android::sp<::android::media::tv::tuner::ITunerFilter>& optionalSourceFilter) override;
  ::android::binder::Status removePid(const ::android::media::tv::tuner::TunerDemuxPid& pid, const ::android::sp<::android::media::tv::tuner::ITunerFilter>& optionalSourceFilter) override;
  ::android::binder::Status close() override;

};

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_DESCRAMBLER_H_
