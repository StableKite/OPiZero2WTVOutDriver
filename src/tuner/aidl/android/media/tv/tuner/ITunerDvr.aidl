package android.media.tv.tuner;

import android.hardware.common.fmq.MQDescriptor;
import android.hardware.common.fmq.SynchronizedReadWrite;
import android.media.tv.tuner.ITunerFilter;
import android.media.tv.tuner.TunerDvrSettings;

/**
 * Tuner Dvr interface handles tuner related operations.
 *
 * {@hide}
 */
interface ITunerDvr {
    /**
     * Get the descriptor of the DVR's FMQ.
     */
    MQDescriptor getQueueDesc();  // Удалены обобщенные типы

    /**
     * Configure the DVR.
     */
    void configure(in TunerDvrSettings settings);

    /**
     * Attach one filter to DVR interface for recording.
     */
    void attachFilter(in ITunerFilter filter);

    /**
     * Detach one filter from the DVR's recording.
     */
    void detachFilter(in ITunerFilter filter);

    /**
     * Start DVR.
     */
    void start();

    /**
     * Stop DVR.
     */
    void stop();

    /**
     * Flush DVR data.
     */
    void flush();

    /**
     * Close the DVR instance to release resource for DVR.
     */
    void close();
}
