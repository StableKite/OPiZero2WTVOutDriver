#ifndef ANDROID_MEDIA_TUNERDESCRAMBLER_H
#define ANDROID_MEDIA_TUNERDESCRAMBLER_H

#include <aidl/android/media/tv/tuner/BnTunerDescrambler.h>
#include <aidl/android/media/tv/tuner/ITunerDemux.h>
#include <aidl/android/media/tv/tuner/ITunerFilter.h>
#include <aidl/android/media/tv/tuner/TunerDemuxPid.h>
#include "DemuxPid.h"
#include <android/hardware/tv/tuner/1.0/ITuner.h>

using Status = ::ndk::ScopedAStatus;
using ::aidl::android::media::tv::tuner::BnTunerDescrambler;
using ::aidl::android::media::tv::tuner::ITunerDemux;
using ::aidl::android::media::tv::tuner::ITunerFilter;
using ::aidl::android::media::tv::tuner::TunerDemuxPid;
using ::android::hardware::tv::tuner::V1_0::DemuxPid;
using ::android::hardware::tv::tuner::V1_0::IDescrambler;

namespace android {

class TunerDescrambler : public BnTunerDescrambler {

public:
    TunerDescrambler(sp<IDescrambler> descrambler);
    virtual ~TunerDescrambler();
    Status setDemuxSource(const std::shared_ptr<ITunerDemux>& demux) override;
    Status setKeyToken(const std::vector<uint8_t>& keyToken) override;
    Status addPid(const TunerDemuxPid& pid,
                  const std::shared_ptr<ITunerFilter>& optionalSourceFilter) override;
    Status removePid(const TunerDemuxPid& pid,
                     const std::shared_ptr<ITunerFilter>& optionalSourceFilter) override;
    Status close() override;

private:
    DemuxPid getHidlDemuxPid(const TunerDemuxPid& pid);

    sp<IDescrambler> mDescrambler;
};

} // namespace android

#endif // ANDROID_MEDIA_TUNERDESCRAMBLER_H
