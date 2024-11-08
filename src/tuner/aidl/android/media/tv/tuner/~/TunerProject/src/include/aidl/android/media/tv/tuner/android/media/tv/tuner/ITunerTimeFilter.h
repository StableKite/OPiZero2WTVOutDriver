#ifndef AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_TIME_FILTER_H_
#define AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_TIME_FILTER_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/StrongPointer.h>

namespace android {

namespace media {

namespace tv {

namespace tuner {

class ITunerTimeFilter : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(TunerTimeFilter)
  virtual ::android::binder::Status setTimeStamp(int64_t timeStamp) = 0;
  virtual ::android::binder::Status clearTimeStamp() = 0;
  virtual ::android::binder::Status getSourceTime(int64_t* _aidl_return) = 0;
  virtual ::android::binder::Status getTimeStamp(int64_t* _aidl_return) = 0;
  virtual ::android::binder::Status close() = 0;
};  // class ITunerTimeFilter

class ITunerTimeFilterDefault : public ITunerTimeFilter {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status setTimeStamp(int64_t timeStamp) override;
  ::android::binder::Status clearTimeStamp() override;
  ::android::binder::Status getSourceTime(int64_t* _aidl_return) override;
  ::android::binder::Status getTimeStamp(int64_t* _aidl_return) override;
  ::android::binder::Status close() override;

};

}  // namespace tuner

}  // namespace tv

}  // namespace media

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_MEDIA_TV_TUNER_I_TUNER_TIME_FILTER_H_
