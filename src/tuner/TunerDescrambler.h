#ifndef TUNER_PROJECT_TUNERDESCRAMBLER_H
#define TUNER_PROJECT_TUNERDESCRAMBLER_H

// Оставляем включения AIDL заголовочных файлов
#include <aidl/android/media/tv/tuner/BnTunerDescrambler.h>
#include <aidl/android/media/tv/tuner/ITunerDemux.h>
#include <aidl/android/media/tv/tuner/ITunerFilter.h>
#include <aidl/android/media/tv/tuner/TunerDemuxPid.h>

// Используем стандартные структуры и типы
#include <memory>
#include <vector>
#include <stdint.h>

using Status = int; // Заменяем на стандартный тип

namespace tuner_project {

class TunerDescrambler : public ::aidl::android::media::tv::tuner::BnTunerDescrambler {

public:
    TunerDescrambler(std::shared_ptr<::aidl::android::media::tv::tuner::IDescrambler> descrambler);
    virtual ~TunerDescrambler();
    Status setDemuxSource(const std::shared_ptr<::aidl::android::media::tv::tuner::ITunerDemux>& demux) override;
    Status setKeyToken(const std::vector<uint8_t>& keyToken) override;
    Status addPid(const ::aidl::android::media::tv::tuner::TunerDemuxPid& pid,
                  const std::shared_ptr<::aidl::android::media::tv::tuner::ITunerFilter>& optionalSourceFilter) override;
    Status removePid(const ::aidl::android::media::tv::tuner::TunerDemuxPid& pid,
                     const std::shared_ptr<::aidl::android::media::tv::tuner::ITunerFilter>& optionalSourceFilter) override;
    Status close() override;

private:
    DemuxPid getHidlDemuxPid(const ::aidl::android::media::tv::tuner::TunerDemuxPid& pid);

    std::shared_ptr<::aidl::android::media::tv::tuner::IDescrambler> mDescrambler;
};

}  // namespace tuner_project

#endif // TUNER_PROJECT_TUNERDESCRAMBLER_H