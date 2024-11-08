#ifndef ANDROID_HARDWARE_TV_TUNER_V1_0_DEMUXFILTEREVENT_H_
#define ANDROID_HARDWARE_TV_TUNER_V1_0_DEMUXFILTEREVENT_H_

namespace android {
namespace hardware {
namespace tv {
namespace tuner {
namespace V1_0 {

struct DemuxFilterEvent {
    enum class EventType : uint32_t {
        FILTER_STATUS,
        FILTER_DATA,
    };

    EventType type;
    union {
        struct {
            uint32_t filterId;
            bool isCompleted;
        } filterStatus;
        struct {
            uint32_t filterId;
            std::vector<uint8_t> data;
        } filterData;
    };
};

}  // namespace V1_0
}  // namespace tuner
}  // namespace tv
}  // namespace hardware
}  // namespace android

#endif  // ANDROID_HARDWARE_TV_TUNER_V1_0_DEMUXFILTEREVENT_H_
