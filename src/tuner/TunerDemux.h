#ifndef MYNAMESPACE_TUNERDEMUX_H
#define MYNAMESPACE_TUNERDEMUX_H

#include <memory>
#include <vector>

using Status = int;

namespace mynamespace {

class ITunerFilterCallback {};
class IDvr {};


class ITunerFilter {
public:
    std::shared_ptr<ITunerFilter> getHalFilter() { return nullptr; }
};

class ITunerDvrCallback {};
class ITunerTimeFilter {};
class ITunerDvr {};
class ITunerFrontend {
public:
    void getFrontendId(int* frontendId) {}
};

class IDemux {
public:
    int setFrontendDataSource(int frontendId) { return 0; }
    int getAvSyncHwId(std::shared_ptr<ITunerFilter> halFilter, int& avSyncHwId) { return 0; }
    int getAvSyncTime(int avSyncHwId, int64_t& time) { return 0; }
    int openDvr(int dvrType, int bufferSize, std::shared_ptr<ITunerDvrCallback> callback, std::shared_ptr<IDvr>& dvr) { return 0; }
    int connectCiCam(int ciCamId) { return 0; }
    int disconnectCiCam() { return 0; }
};

class TunerDemux {
public:
    TunerDemux(std::shared_ptr<IDemux> demux, int demuxId);
    virtual ~TunerDemux();
    Status setFrontendDataSource(const std::shared_ptr<ITunerFrontend>& frontend);
    Status openFilter(
        int mainType, int subtype, int bufferSize, const std::shared_ptr<ITunerFilterCallback>& cb,
        std::shared_ptr<ITunerFilter>* _aidl_return);
    Status openTimeFilter(std::shared_ptr<ITunerTimeFilter>* _aidl_return);
    Status getAvSyncHwId(const std::shared_ptr<ITunerFilter>& tunerFilter, int* _aidl_return);
    Status getAvSyncTime(int avSyncHwId, int64_t* _aidl_return);
    Status openDvr(
        int dvbType, int bufferSize, const std::shared_ptr<ITunerDvrCallback>& cb,
        std::shared_ptr<ITunerDvr>* _aidl_return);
    Status connectCiCam(int ciCamId);
    Status disconnectCiCam();
    Status close();

    int getId() { return mDemuxId; }

private:
    std::shared_ptr<IDemux> mDemux;
    int mDemuxId;
};

} // namespace mynamespace

#endif // MYNAMESPACE_TUNERDEMUX_H
