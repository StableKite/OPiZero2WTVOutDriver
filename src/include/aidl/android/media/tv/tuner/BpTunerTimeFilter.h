#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_TIME_FILTER_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_TIME_FILTER_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/media/tv/tuner/ITunerTimeFilter.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class BpTunerTimeFilter : public ::android::BpInterface<ITunerTimeFilter> {
public:
  explicit BpTunerTimeFilter(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpTunerTimeFilter() = default;
  ::android::binder::Status setTimeStamp(int64_t timeStamp) override;
  ::android::binder::Status clearTimeStamp() override;
  ::android::binder::Status getSourceTime(int64_t* _aidl_return) override;
  ::android::binder::Status getTimeStamp(int64_t* _aidl_return) override;
  ::android::binder::Status close() override;
};  // class BpTunerTimeFilter

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_BP_TUNER_TIME_FILTER_H_
