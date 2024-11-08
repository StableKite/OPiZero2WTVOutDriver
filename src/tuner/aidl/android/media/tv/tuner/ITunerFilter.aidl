package android.media.tv.tuner;

import android.hardware.common.fmq.MQDescriptor;
import android.hardware.common.fmq.SynchronizedReadWrite;
import android.hardware.common.NativeHandle;
import android.media.tv.tuner.TunerFilterConfiguration;
import android.media.tv.tuner.TunerFilterSharedHandleInfo;

/**
 * Tuner Filter interface handles tuner related operations.
 *
 * {@hide}
 */
interface ITunerFilter {
    /**
     * Get the filter Id.
     */
    int getId();

    /**
     * Get the 64-bit filter Id.
     */
    long getId64Bit();

    /**
     * Get the descriptor of the Filter's FMQ.
     */
    MQDescriptor getQueueDesc();  // Удалены обобщенные типы

    /**
     * Configure the filter.
     */
    void configure(in TunerFilterConfiguration config);

    /**
     * Configure the monitor event of the Filter.
     */
    void configureMonitorEvent(in int monitorEventType);

    /**
     * Configure the context id of the IP Filter.
     */
    void configureIpFilterContextId(in int cid);

    /**
     * Configure the stream type of the media Filter.
     */
    void configureAvStreamType(in int avStreamType);

    /**
     * Get the a/v shared memory handle.
     */
    TunerFilterSharedHandleInfo getAvSharedHandleInfo();

    /**
     * Release the handle reported by the HAL for AV memory.
     */
    void releaseAvHandle(in NativeHandle handle, in long avDataId);

    /**
     * Set the filter's data source.
     */
    void setDataSource(ITunerFilter filter);

    /**
     * Start the filter.
     */
    void start();

    /**
     * Stop the filter.
     */
    void stop();

    /**
     * Flush the filter.
     */
    void flush();

    /**
     * Close the filter.
     */
    void close();
}
