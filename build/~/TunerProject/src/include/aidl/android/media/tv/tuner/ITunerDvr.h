#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_DVR_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_DVR_H_

#include <android/hardware/common/fmq/MQDescriptor.h>
#include <android/media/tv/tuner/ITunerFilter.h>
#include <android/media/tv/tuner/TunerDvrSettings.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <utils/StrongPointer.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class ITunerDvr : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(TunerDvr)
  virtual ::android::binder::Status getQueueDesc(::android::hardware::common::fmq::MQDescriptor* _aidl_return) = 0;
  virtual ::android::binder::Status configure(const ::android::media::tv::tuner::TunerDvrSettings& settings) = 0;
  virtual ::android::binder::Status attachFilter(const ::android::sp<::android::media::tv::tuner::ITunerFilter>& filter) = 0;
  virtual ::android::binder::Status detachFilter(const ::android::sp<::android::media::tv::tuner::ITunerFilter>& filter) = 0;
  virtual ::android::binder::Status start() = 0;
  virtual ::android::binder::Status stop() = 0;
  virtual ::android::binder::Status flush() = 0;
  virtual ::android::binder::Status close() = 0;
};  // class ITunerDvr

class ITunerDvrDefault : public ITunerDvr {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status getQueueDesc(::android::hardware::common::fmq::MQDescriptor* _aidl_return) override;
  ::android::binder::Status configure(const ::android::media::tv::tuner::TunerDvrSettings& settings) override;
  ::android::binder::Status attachFilter(const ::android::sp<::android::media::tv::tuner::ITunerFilter>& filter) override;
  ::android::binder::Status detachFilter(const ::android::sp<::android::media::tv::tuner::ITunerFilter>& filter) override;
  ::android::binder::Status start() override;
  ::android::binder::Status stop() override;
  ::android::binder::Status flush() override;
  ::android::binder::Status close() override;

};

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_DVR_H_
