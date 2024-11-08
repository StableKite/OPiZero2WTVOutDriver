#ifndef ANDROID_MEDIA_TUNERFTIMEFILTER_H
#define ANDROID_MEDIA_TUNERFTIMEFILTER_H

#include <memory> // std::shared_ptr
#include <vector> // std::vector
#include <stdint.h> // int64_t

using Status = int; // Заменим на int, если нет аналогичного типа для статуса

// Определение отсутствующих типов
class ITimeFilter;

namespace mynamespace {

class TunerTimeFilter {

public:
    TunerTimeFilter(std::shared_ptr<ITimeFilter> timeFilter);
    virtual ~TunerTimeFilter();
    Status setTimeStamp(int64_t timeStamp);
    Status clearTimeStamp();
    Status getSourceTime(int64_t* _aidl_return);
    Status getTimeStamp(int64_t* _aidl_return);
    Status close();

private:
    std::shared_ptr<ITimeFilter> mTimeFilter;
};

} // namespace mynamespace

#endif // ANDROID_MEDIA_TUNERFTIMEFILTER_H
