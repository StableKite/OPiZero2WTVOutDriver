/**
 * Copyright 2020, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package android.media.tv.tuner;

import android.media.tv.tuner.TunerFrontendStatusAtsc3PlpInfo;

/**
 * Tuner Frontend Status interface.
 *
 * {@hide}
 */
parcelable TunerFrontendStatus {
    boolean isDemodLocked;
    int snr;
    int ber;
    int per;
    int preBer;
    int signalQuality;
    int signalStrength;
    int symbolRate;
    long innerFec;
    int modulation;
    int inversion;
    int lnbVoltage;
    byte plpId;
    boolean isEWBS;
    byte agc;
    boolean isLnaOn;
    boolean[] isLayerError;
    int mer;
    int freqOffset;
    int hierarchy;
    boolean isRfLocked;
    TunerFrontendStatusAtsc3PlpInfo[] plpInfo;
    int[] modulations;
    int[] bers;
    long[] codeRates;
    int bandwidth;
    int interval;
    int transmissionMode;
    int uec;
    char systemId;
    int[] interleaving;
    byte[] isdbtSegment;
    int[] tsDataRate;
    int rollOff;
    boolean isMiso;
    boolean isLinear;
    boolean isShortFrames;
}
