#ifndef ANDROID_HARDWARE_TV_TUNER_V1_1_TYPES_H_
#define ANDROID_HARDWARE_TV_TUNER_V1_1_TYPES_H_

#include <android/hardware/tv/tuner/1.0/types.h>

namespace android {
namespace hardware {
namespace tv {
namespace tuner {
namespace V1_1 {

using ::android::hardware::tv::tuner::V1_0::Constant;
using ::android::hardware::tv::tuner::V1_0::DemuxFilterMmtpRecordEvent;
using ::android::hardware::tv::tuner::V1_0::DemuxFilterTsRecordEvent;
using ::android::hardware::tv::tuner::V1_0::DemuxScIndex;
using ::android::hardware::tv::tuner::V1_0::DemuxTsIndex;
using ::android::hardware::tv::tuner::V1_0::FrontendIsdbs3Rolloff;
using ::android::hardware::tv::tuner::V1_0::FrontendAtsc3Bandwidth;
using ::android::hardware::tv::tuner::V1_0::FrontendAtsc3Modulation;
using ::android::hardware::tv::tuner::V1_0::FrontendAtsc3TimeInterleaveMode;
using ::android::hardware::tv::tuner::V1_0::FrontendIsdbsRolloff;
using ::android::hardware::tv::tuner::V1_0::FrontendAtscModulation;
using ::android::hardware::tv::tuner::V1_0::FrontendDvbcAnnex;
using ::android::hardware::tv::tuner::V1_0::FrontendDvbcModulation;
using ::android::hardware::tv::tuner::V1_0::FrontendDvbcSpectralInversion;
using ::android::hardware::tv::tuner::V1_0::FrontendDvbsModulation;
using ::android::hardware::tv::tuner::V1_0::FrontendDvbsRolloff;
using ::android::hardware::tv::tuner::V1_0::FrontendDvbtBandwidth;
using ::android::hardware::tv::tuner::V1_0::FrontendDvbtConstellation;
using ::android::hardware::tv::tuner::V1_0::FrontendDvbtTransmissionMode;
using ::android::hardware::tv::tuner::V1_0::FrontendDvbtGuardInterval;
using ::android::hardware::tv::tuner::V1_0::FrontendInnerFec;
using ::android::hardware::tv::tuner::V1_0::FrontendIsdbs3Modulation;
using ::android::hardware::tv::tuner::V1_0::FrontendIsdbsModulation;
using ::android::hardware::tv::tuner::V1_0::FrontendIsdbtBandwidth;
using ::android::hardware::tv::tuner::V1_0::FrontendIsdbtGuardInterval;
using ::android::hardware::tv::tuner::V1_0::FrontendIsdbtMode;
using ::android::hardware::tv::tuner::V1_0::FrontendIsdbtModulation;
using ::android::hardware::tv::tuner::V1_0::FrontendScanMessageType;
using ::android::hardware::tv::tuner::V1_0::FrontendStatusType;
using ::android::hardware::tv::tuner::V1_0::FrontendType;
using ::android::hidl::safe_union::Monostate;

enum class Constant : uint32_t {
    INVALID_MMTP_RECORD_EVENT_MPT_SEQUENCE_NUM = 0xFFFFFFFF,
    INVALID_FIRST_MACROBLOCK_IN_SLICE = 0xFFFFFFFF,
    INVALID_FRONTEND_SETTING_FREQUENCY = 0xFFFFFFFF,
    INVALID_IP_FILTER_CONTEXT_ID = 0xFFFFFFFF,
    INVALID_LTS_ID = 0xFFFFFFFF,
    INVALID_FRONTEND_ID = 0xFFFFFFFF,
    INVALID_LNB_ID = 0xFFFFFFFF,
    INVALID_KEYTOKEN = 0x00,
};

enum class Constant64Bit : uint64_t {
    INVALID_FILTER_ID_64BIT = 0xFFFFFFFFFFFFFFFF,
    INVALID_AV_SYNC_ID_64BIT = 0xFFFFFFFFFFFFFFFF,
    INVALID_PRESENTATION_TIME_STAMP = 0xFFFFFFFFFFFFFFFF,
};

struct DemuxFilterTsRecordEventExt {
    uint64_t pts;
    uint32_t firstMbInSlice;
};

struct DemuxFilterMmtpRecordEventExt {
    uint64_t pts;
    uint32_t mpuSequenceNumber;
    uint32_t firstMbInSlice;
    bitfield<DemuxTsIndex> tsIndexMask;
};

struct DemuxFilterEventExt {
    struct Event {
        Monostate noinit;
        DemuxFilterTsRecordEventExt tsRecord;
        DemuxFilterMmtpRecordEventExt mmtpRecord;
        DemuxFilterMonitorEvent monitorEvent;
        uint32_t startId;
    };

    std::vector<Event> events;
};

enum class ScramblingStatus : uint32_t {
    UNKNOWN = 1 << 0,
    NOT_SCRAMBLED = 1 << 1,
    SCRAMBLED = 1 << 2,
};

enum class DemuxFilterMonitorEventType : uint32_t {
    SCRAMBLING_STATUS = 1 << 0,
    IP_CID_CHANGE = 1 << 1,
};

struct DemuxFilterMonitorEvent {
    ScramblingStatus scramblingStatus;
    uint32_t cid;
};

using FrontendSpectralInversion = FrontendDvbcSpectralInversion;

enum class FrontendDvbsScanType : uint32_t {
    UNDEFINED = 0,
    DIRECT,
    DISEQC,
    UNICABLE,
    JESS,
};

enum class FrontendAnalogAftFlag : uint32_t {
    UNDEFINED,
    AFT_TRUE,
    AFT_FALSE,
};

enum class FrontendCableTimeInterleaveMode : uint32_t {
    UNDEFINED = 0,
    AUTO = 1 << 0,
    INTERLEAVING_128_1_0 = 1 << 1,
    INTERLEAVING_128_1_1 = 1 << 2,
    INTERLEAVING_64_2 = 1 << 3,
    INTERLEAVING_32_4 = 1 << 4,
    INTERLEAVING_16_8 = 1 << 5,
    INTERLEAVING_8_16 = 1 << 6,
    INTERLEAVING_128_2 = 1 << 7,
    INTERLEAVING_128_3 = 1 << 8,
    INTERLEAVING_128_4 = 1 << 9,
};

enum class FrontendDvbtTransmissionMode : uint32_t {
    MODE_8K_E = 1 << 7,
    MODE_16K_E = 1 << 8,
    MODE_32K_E = 1 << 9,
};

enum class FrontendDvbtConstellation : uint32_t {
    CONSTELLATION_QPSK_R = 1 << 5,
    CONSTELLATION_16QAM_R = 1 << 6,
    CONSTELLATION_64QAM_R = 1 << 7,
    CONSTELLATION_256QAM_R = 1 << 8,
};

struct FrontendDvbsSettingsExt1_1 {
    FrontendDvbsScanType scanType;
    bool isDiseqcRxMessage;
};

struct FrontendDvbtSettingsExt1_1 {
    FrontendDvbtConstellation constellation;
    FrontendDvbtTransmissionMode transmissionMode;
};

struct FrontendAnalogSettingsExt1_1 {
    FrontendAnalogAftFlag aftFlag;
};

struct FrontendDvbcSettingsExt1_1 {
    FrontendCableTimeInterleaveMode interleaveMode;
    FrontendDvbcBandwidth bandwidth;
};

struct FrontendSettingsExt1_1 {
    uint32_t endFrequency;
    FrontendSpectralInversion inversion;

    union SettingsExt {
        Monostate noinit;
        FrontendAnalogSettingsExt1_1 analog;
        FrontendDvbcSettingsExt1_1 dvbc;
        FrontendDvbsSettingsExt1_1 dvbs;
        FrontendDvbtSettingsExt1_1 dvbt;
        FrontendDtmbSettings dtmb;
    } settingExt;
};

enum class FrontendType : uint32_t {
    DTMB = FrontendType::DTMB,
};

enum class FrontendDvbcBandwidth : uint32_t {
    UNDEFINED = 0,
    BANDWIDTH_5MHZ = 1 << 0,
    BANDWIDTH_6MHZ = 1 << 1,
    BANDWIDTH_7MHZ = 1 << 2,
    BANDWIDTH_8MHZ = 1 << 3,
};

enum class FrontendDtmbBandwidth : uint32_t {
    UNDEFINED = 0,
    AUTO = 1 << 0,
    BANDWIDTH_8MHZ = 1 << 1,
    BANDWIDTH_6MHZ = 1 << 2,
};

enum class FrontendDtmbTimeInterleaveMode : uint32_t {
    UNDEFINED = 0,
    AUTO = 1 << 0,
    TIMER_INT_240 = 1 << 1,
    TIMER_INT_720 = 1 << 2,
};

enum class FrontendDtmbModulation : uint32_t {
    UNDEFINED = 0,
    AUTO = 1 << 0,
    CONSTELLATION_4QAM = 1 << 1,
    CONSTELLATION_4QAM_NR = 1 << 2,
    CONSTELLATION_16QAM = 1 << 3,
    CONSTELLATION_32QAM = 1 << 4,
    CONSTELLATION_64QAM = 1 << 5,
};

enum class FrontendDtmbCodeRate : uint32_t {
    UNDEFINED = 0,
    AUTO = 1 << 0,
    CODERATE_2_5 = 1 << 1,
    CODERATE_3_5 = 1 << 2,
    CODERATE_4_5 = 1 << 3,
};

enum class FrontendDtmbGuardInterval : uint32_t {
    UNDEFINED = 0,
    AUTO = 1 << 0,
    PN_420_VARIOUS = 1 << 1,
    PN_595_CONST = 1 << 2,
    PN_945_VARIOUS = 1 << 3,
    PN_420_CONST = 1 << 4,
    PN_945_CONST = 1 << 5,
    PN_RESERVED = 1 << 6,
};

enum class FrontendDtmbTransmissionMode : uint32_t {
    UNDEFINED = 0,
    AUTO = 1 << 0,
    C1 = 1 << 1,
    C3780 = 1 << 2,
};

struct FrontendDtmbSettings {
    uint32_t frequency;
    FrontendDtmbTransmissionMode transmissionMode;
    FrontendDtmbBandwidth bandwidth;
    FrontendDtmbModulation modulation;
    FrontendDtmbCodeRate codeRate;
    FrontendDtmbGuardInterval guardInterval;
    FrontendDtmbTimeInterleaveMode interleaveMode;
};

struct FrontendDtmbCapabilities {
    bitfield<FrontendDtmbTransmissionMode> transmissionModeCap;
    bitfield<FrontendDtmbBandwidth> bandwidthCap;
    bitfield<FrontendDtmbModulation> modulationCap;
    bitfield<FrontendDtmbCodeRate> codeRateCap;
    bitfield<FrontendDtmbGuardInterval> guardIntervalCap;
    bitfield<FrontendDtmbTimeInterleaveMode> interleaveModeCap;
};

union FrontendModulation {
    FrontendDvbcModulation dvbc;
    FrontendDvbsModulation dvbs;
    FrontendDvbtConstellation dvbt;
    FrontendIsdbsModulation isdbs;
    FrontendIsdbs3Modulation isdbs3;
    FrontendIsdbtModulation isdbt;
    FrontendAtscModulation atsc;
    FrontendAtsc3Modulation atsc3;
    FrontendDtmbModulation dtmb;
};

union FrontendInterleaveMode {
    FrontendAtsc3TimeInterleaveMode atsc3;
    FrontendCableTimeInterleaveMode dvbc;
    FrontendDtmbTimeInterleaveMode dtmb;
};

enum class FrontendInnerFec : uint64_t {
    FEC_2_15 = 1 << 36,
    FEC_3_15 = 1 << 37,
    FEC_5_15 = 1 << 38,
    FEC_6_15 = 1 << 39,
    FEC_9_15 = 1 << 40,
    FEC_10_15 = 1 << 41,
    FEC_12_15 = 1 << 42,
    FEC_13_15 = 1 << 43,
    FEC_18_30 = 1 << 44,
    FEC_20_30 = 1 << 45,
    FEC_90_180 = 1 << 46,
    FEC_96_180 = 1 << 47,
    FEC_104_180 = 1 << 48,
    FEC_128_180 = 1 << 49,
    FEC_132_180 = 1 << 50,
    FEC_135_180 = 1 << 51,
    FEC_140_180 = 1 << 52,
};

union FrontendBandwidth {
    FrontendAtsc3Bandwidth atsc3;
    FrontendDvbcBandwidth dvbc;
    FrontendDvbtBandwidth dvbt;
    FrontendIsdbtBandwidth isdbt;
    FrontendDtmbBandwidth dtmb;
};

union FrontendGuardInterval {
    FrontendDvbtGuardInterval dvbt;
    FrontendIsdbtGuardInterval isdbt;
    FrontendDtmbGuardInterval dtmb;
};

union FrontendTransmissionMode {
    FrontendDvbtTransmissionMode dvbt;
    FrontendIsdbtMode isdbt;
    FrontendDtmbTransmissionMode dtmb;
};

union FrontendRollOff {
    FrontendDvbsRolloff dvbs;
    FrontendIsdbsRolloff isdbs;
    FrontendIsdbs3Rolloff isdbs3;
};

enum class FrontendStatusTypeExt1_1 : uint32_t {
    MODULATIONS = ::android::hardware::tv::tuner::V1_0::FrontendStatusType::ATSC3_PLP_INFO + 1,
    BERS,
    CODERATES,
    BANDWIDTH,
    GUARD_INTERVAL,
    TRANSMISSION_MODE,
    UEC,
    T2_SYSTEM_ID,
    INTERLEAVINGS,
    ISDBT_SEGMENTS,
    TS_DATA_RATES,
    ROLL_OFF,
    IS_MISO,
    IS_LINEAR,
    IS_SHORT_FRAMES,
};

union FrontendStatusExt1_1 {
    vec<FrontendModulation> modulations;
    vec<uint32_t> bers;
    vec<FrontendInnerFec> codeRates;
    FrontendBandwidth bandwidth;
    FrontendGuardInterval interval;
    FrontendTransmissionMode transmissionMode;
    uint32_t uec;
    uint16_t systemId;
    vec<FrontendInterleaveMode> interleaving;
    vec<uint8_t> isdbtSegment;
    vec<uint32_t> tsDataRate;
    FrontendRollOff rollOff;
    bool isMiso;
    bool isLinear;
    bool isShortFrames;
};

enum class FrontendScanMessageTypeExt1_1 : uint32_t {
    MODULATION = ::android::hardware::tv::tuner::V1_0::FrontendScanMessageType::ATSC3_PLP_INFO + 1,
    DVBC_ANNEX,
    HIGH_PRIORITY,
};

union FrontendScanMessageExt1_1 {
    FrontendModulation modulation;
    ::android::hardware::tv::tuner::V1_0::FrontendDvbcAnnex annex;
    bool isHighPriority;
};

enum class VideoStreamType : uint32_t {
    UNDEFINED,
    RESERVED,
    MPEG1,
    MPEG2,
    MPEG4P2,
    AVC,
    HEVC,
    VC1,
    VP8,
    VP9,
    AV1,
    AVS,
    AVS2,
};

enum class AudioStreamType : uint32_t {
    UNDEFINED,
    PCM,
    MP3,
    MPEG1,
    MPEG2,
    MPEGH,
    AAC,
    AC3,
    EAC3,
    AC4,
    DTS,
    DTS_HD,
    WMA,
    OPUS,
    VORBIS,
    DRA,
};

union AvStreamType {
    VideoStreamType video;
    AudioStreamType audio;
};

enum class DemuxScIndex : uint32_t {
    I_SLICE = ::android::hardware::tv::tuner::V1_0::DemuxScIndex::I_SLICE,
    P_SLICE = ::android::hardware::tv::tuner::V1_0::DemuxScIndex::P_SLICE,
    B_SLICE = ::android::hardware::tv::tuner::V1_0::DemuxScIndex::B_SLICE,
    SI_SLICE = ::android::hardware::tv::tuner::V1_0::DemuxScIndex::SI_SLICE,
    SP_SLICE = ::android::hardware::tv::tuner::V1_0::DemuxScIndex::SP_SLICE,
};

enum class DemuxTsIndex : uint32_t {
    MPT_INDEX_MPT = ::android::hardware::tv::tuner::V1_0::DemuxTsIndex::MPT_INDEX_MPT,
    MPT_INDEX_VIDEO = ::android::hardware::tv::tuner::V1_0::DemuxTsIndex::MPT_INDEX_VIDEO,
    MPT_INDEX_AUDIO = ::android::hardware::tv::tuner::V1_0::DemuxTsIndex::MPT_INDEX_AUDIO,
    MPT_INDEX_TIMESTAMP_TARGET_VIDEO = ::android::hardware::tv::tuner::V1_0::DemuxTsIndex::MPT_INDEX_TIMESTAMP_TARGET_VIDEO,
    MPT_INDEX_TIMESTAMP_TARGET_AUDIO = ::android::hardware::tv::tuner::V1_0::DemuxTsIndex::MPT_INDEX_TIMESTAMP_TARGET_AUDIO,
};

}  // namespace V1_1
}  // namespace tuner
}  // namespace tv
}  // namespace hardware
}  // namespace android

#endif  // ANDROID_HARDWARE_TV_TUNER_V1_1_TYPES_H_
