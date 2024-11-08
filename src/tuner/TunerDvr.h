#ifndef MYNAMESPACE_TUNERDVR_H
#define MYNAMESPACE_TUNERDVR_H

#include <memory> // std::shared_ptr
#include <vector> // std::vector
#include <functional> // std::function, std::bind
#include <string> // std::string

using Status = int; // Заменим на int, если нет аналогичного типа для статуса

class IDvr;
class ITunerFilter;
class ITunerDvrCallback;
enum class RecordStatus;
enum class PlaybackStatus;

namespace mynamespace {

class TunerDvrSettings {
public:
    enum Mode {
        RECORD,
        PLAYBACK
    };

    TunerDvrSettings();
    ~TunerDvrSettings();

    void setMode(Mode mode);
    Mode getMode() const;

    void setBufferSize(int bufferSize);
    int getBufferSize() const;

    void setFilePath(const std::string& filePath);
    std::string getFilePath() const;

private:
    Mode mMode;
    int mBufferSize;
    std::string mFilePath;
};

class TunerDvr {

public:
    TunerDvr(std::shared_ptr<IDvr> dvr, int type);
    ~TunerDvr();

    Status getQueueDesc(void* _aidl_return);

    Status configure(const TunerDvrSettings& settings);

    Status attachFilter(const std::shared_ptr<ITunerFilter>& filter);

    Status detachFilter(const std::shared_ptr<ITunerFilter>& filter);

    Status start();

    Status stop();

    Status flush();

    Status close();

    struct DvrCallback {
        DvrCallback(const std::shared_ptr<ITunerDvrCallback> tunerDvrCallback)
                : mTunerDvrCallback(tunerDvrCallback) {}

        void onRecordStatus(const RecordStatus status);
        void onPlaybackStatus(const PlaybackStatus status);

        private:
            std::shared_ptr<ITunerDvrCallback> mTunerDvrCallback;
    };

private:
    void getDvrSettingsFromTunerDvrSettings(const TunerDvrSettings& settings);

    std::shared_ptr<IDvr> mDvr;
    int mType;
};

} // namespace mynamespace

#endif // MYNAMESPACE_TUNERDVR_H
