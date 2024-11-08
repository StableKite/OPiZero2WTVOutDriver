#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_FILTER_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_FILTER_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/media/tv/tuner/ITunerFilter.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BpTunerFilter : public ::android::BpInterface<ITunerFilter> {
public:
  explicit BpTunerFilter(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpTunerFilter() = default;
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
};  // class BpTunerFilter

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_FILTER_H_
