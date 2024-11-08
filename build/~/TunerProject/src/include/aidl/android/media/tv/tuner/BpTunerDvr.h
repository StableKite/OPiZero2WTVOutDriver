#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_DVR_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_DVR_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/media/tv/tuner/ITunerDvr.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BpTunerDvr : public ::android::BpInterface<ITunerDvr> {
public:
  explicit BpTunerDvr(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpTunerDvr() = default;
  ::android::binder::Status getQueueDesc(::android::hardware::common::fmq::MQDescriptor* _aidl_return) override;
  ::android::binder::Status configure(const ::android::media::tv::tuner::TunerDvrSettings& settings) override;
  ::android::binder::Status attachFilter(const ::android::sp<::android::media::tv::tuner::ITunerFilter>& filter) override;
  ::android::binder::Status detachFilter(const ::android::sp<::android::media::tv::tuner::ITunerFilter>& filter) override;
  ::android::binder::Status start() override;
  ::android::binder::Status stop() override;
  ::android::binder::Status flush() override;
  ::android::binder::Status close() override;
};  // class BpTunerDvr

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_DVR_H_
