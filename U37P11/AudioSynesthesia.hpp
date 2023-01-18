#ifndef UE4SS_SDK_AudioSynesthesia_HPP
#define UE4SS_SDK_AudioSynesthesia_HPP

#include "AudioSynesthesia_enums.hpp"

class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{
};

class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{
};

class UConstantQNRT : public UAudioSynesthesiaNRT
{
    class UConstantQNRTSettings* Settings;

    void GetNormalizedChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>& OutConstantQ);
    void GetChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>& OutConstantQ);
};

class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{
    float StartingFrequency;
    int32 NumBands;
    float NumBandsPerOctave;
    float AnalysisPeriod;
    bool bDownmixToMono;
    EConstantQFFTSizeEnum FFTSize;
    EFFTWindowType WindowType;
    EAudioSpectrumType SpectrumType;
    float BandWidthStretch;
    EConstantQNormalizationEnum CQTNormalization;
    float NoiseFloorDb;

};

class ULoudnessNRT : public UAudioSynesthesiaNRT
{
    class ULoudnessNRTSettings* Settings;

    void GetNormalizedLoudnessAtTime(const float InSeconds, float& OutLoudness);
    void GetNormalizedChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float& OutLoudness);
    void GetLoudnessAtTime(const float InSeconds, float& OutLoudness);
    void GetChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float& OutLoudness);
};

class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{
    float AnalysisPeriod;
    float MinimumFrequency;
    float MaximumFrequency;
    ELoudnessNRTCurveTypeEnum CurveType;
    float NoiseFloorDb;

};

class UOnsetNRT : public UAudioSynesthesiaNRT
{
    class UOnsetNRTSettings* Settings;

    void GetNormalizedChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths);
    void GetChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths);
};

class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{
    bool bDownmixToMono;
    float GranularityInSeconds;
    float Sensitivity;
    float MinimumFrequency;
    float MaximumFrequency;

};

#endif
