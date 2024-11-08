#include "TunerDescrambler.h"
#include "aidl/android/media/tv/tuner/TunerDemuxPid.h"

#define LOG_TAG "TunerDescrambler"

#include "TunerFilter.h"

DemuxPid TunerDescrambler::getHidlDemuxPid(const TunerDemuxPid& pid) {
    DemuxPid hidlPid;
    if (pid.tPid != 0) {  // Проверяем, установлен ли tPid
        hidlPid.tPid(static_cast<uint16_t>(pid.tPid));
    } else if (pid.mmtpPid != 0) {  // Проверяем, установлен ли mmtpPid
        hidlPid.mmtpPid(static_cast<uint16_t>(pid.mmtpPid));
    }
    return hidlPid;
}
