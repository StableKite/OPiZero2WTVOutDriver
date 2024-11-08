#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_FILTER_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_FILTER_H_

#include <android/hardware/common/NativeHandle.h>
#include <android/hardware/common/fmq/MQDescriptor.h>
#include <android/media/tv/tuner/ITunerFilter.h>
#include <android/media/tv/tuner/TunerFilterConfiguration.h>
#include <android/media/tv/tuner/TunerFilterSharedHandleInfo.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/StrongPointer.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class ITunerFilter : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(TunerFilter)
  virtual ::android::binder::Status getId(int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status getId64Bit(int64_t* _aidl_return) = 0;
  virtual ::android::binder::Status getQueueDesc(::android::hardware::common::fmq::MQDescriptor* _aidl_return) = 0;
  virtual ::android::binder::Status configure(const ::android::media::tv::tuner::TunerFilterConfiguration& config) = 0;
  virtual ::android::binder::Status configureMonitorEvent(int32_t monitorEventType) = 0;
  virtual ::android::binder::Status configureIpFilterContextId(int32_t cid) = 0;
  virtual ::android::binder::Status configureAvStreamType(int32_t avStreamType) = 0;
  virtual ::android::binder::Status getAvSharedHandleInfo(::android::media::tv::tuner::TunerFilterSharedHandleInfo* _aidl_return) = 0;
  virtual ::android::binder::Status releaseAvHandle(const ::android::hardware::common::NativeHandle& handle, int64_t avDataId) = 0;
  virtual ::android::binder::Status setDataSource(const ::android::sp<::android::media::tv::tuner::ITunerFilter>& filter) = 0;
  virtual ::android::binder::Status start() = 0;
  virtual ::android::binder::Status stop() = 0;
  virtual ::android::binder::Status flush() = 0;
  virtual ::android::binder::Status close() = 0;
};  // class ITunerFilter

class ITunerFilterDefault : public ITunerFilter {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status getId(int32_t* _aidl_return) override;
  ::android::binder::Status getId64Bit(int64_t* _aidl_return) override;
  ::android::binder::Status getQueueDesc(::android::hardware::common::fmq::MQDescriptor* _aidl_return) override;
  ::android::binder::Status configure(const ::android::media::tv::tuner::TunerFilterConfiguration& config) override;
  ::android::binder::Status configureMonitorEvent(int32_t monitorEventType) override;
  ::android::binder::Status configureIpFilterContextId(int32_t cid) override;
  ::android::binder::Status configureAvStreamType(int32_t avStreamType) override;
  ::android::binder::Status getAvSharedHandleInfo(::android::media::tv::tuner::TunerFilterSharedHandleInfo* _aidl_return) override;
  ::android::binder::Status releaseAvHandle(const ::android::hardware::common::NativeHandle& handle, int64_t avDataId) override;
  ::android::binder::Status setDataSource(const ::android::sp<::android::media::tv::tuner::ITunerFilter>& filter) override;
  ::android::binder::Status start() override;
  ::android::binder::Status stop() override;
  ::android::binder::Status flush() override;
  ::android::binder::Status close() override;

};

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_FILTER_H_
