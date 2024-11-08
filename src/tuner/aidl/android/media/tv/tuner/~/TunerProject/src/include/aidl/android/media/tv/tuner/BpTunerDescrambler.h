#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_DESCRAMBLER_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_DESCRAMBLER_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/media/tv/tuner/ITunerDescrambler.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BpTunerDescrambler : public ::android::BpInterface<ITunerDescrambler> {
public:
  explicit BpTunerDescrambler(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpTunerDescrambler() = default;
  ::android::binder::Status setDemuxSource(const ::android::sp<::android::media::tv::tuner::ITunerDemux>& tunerDemux) override;
  ::android::binder::Status setKeyToken(const ::std::vector<uint8_t>& keyToken) override;
  ::android::binder::Status addPid(const ::android::media::tv::tuner::TunerDemuxPid& pid, const ::android::sp<::android::media::tv::tuner::ITunerFilter>& optionalSourceFilter) override;
  ::android::binder::Status removePid(const ::android::media::tv::tuner::TunerDemuxPid& pid, const ::android::sp<::android::media::tv::tuner::ITunerFilter>& optionalSourceFilter) override;
  ::android::binder::Status close() override;
};  // class BpTunerDescrambler

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_DESCRAMBLER_H_
