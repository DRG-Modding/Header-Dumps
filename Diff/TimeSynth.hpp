#ifndef UE4SS_SDK_TimeSynth_HPP
#define UE4SS_SDK_TimeSynth_HPP

#include "TimeSynth_enums.hpp"

struct FTimeSynthClipHandle
{
    FName ClipName;
    int32 ClipId;

};

struct FTimeSynthClipSound
{
    class USoundWave* SoundWave;
    float RandomWeight;
    FVector2D DistanceRange;

};

struct FTimeSynthEnvelopeFollowerSettings
{
    float AttackTime;
    float ReleaseTime;
    ETimeSynthEnvelopeFollowerPeakMode PeakMode;
    bool bIsAnalogMode;

};

struct FTimeSynthFilterSettings
{
    ETimeSynthFilterType FilterType;
    float CutoffFrequency;
    float FilterQ;

};

struct FTimeSynthQuantizationSettings
{
    float BeatsPerMinute;
    int32 BeatsPerBar;
    ETimeSynthBeatDivision BeatDivision;
    float EventDelaySeconds;
    ETimeSynthEventQuantization GlobalQuantization;

};

struct FTimeSynthSpectralData
{
    float FrequencyHz;
    float Magnitude;

};

struct FTimeSynthTimeDef
{
    int32 NumBars;
    int32 NumBeats;

};

class UTimeSynthClip : public UObject
{
    TArray<FTimeSynthClipSound> Sounds;
    FVector2D VolumeScaleDb;
    FVector2D PitchScaleSemitones;
    FTimeSynthTimeDef FadeInTime;
    bool bApplyFadeOut;
    FTimeSynthTimeDef FadeOutTime;
    FTimeSynthTimeDef ClipDuration;
    ETimeSynthEventClipQuantization ClipQuantization;

};

class UTimeSynthComponent : public USynthComponent
{
    FTimeSynthQuantizationSettings QuantizationSettings;
    uint8 bEnableSpectralAnalysis;
    TArray<float> FrequenciesToAnalyze;
    ETimeSynthFFTSize FFTSize;
    FTimeSynthComponentOnPlaybackTime OnPlaybackTime;
    void OnTimeSynthPlaybackTime(float SynthPlaybackTimeSeconds);
    uint8 bIsFilterAEnabled;
    uint8 bIsFilterBEnabled;
    FTimeSynthFilterSettings FilterASettings;
    FTimeSynthFilterSettings FilterBSettings;
    uint8 bIsEnvelopeFollowerEnabled;
    FTimeSynthEnvelopeFollowerSettings EnvelopeFollowerSettings;
    int32 MaxPoolSize;

    void StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization, const FTimeSynthTimeDef& FadeTime);
    void StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization);
    void StopClipWithFadeOverride(FTimeSynthClipHandle InClipHandle, ETimeSynthEventClipQuantization EventQuantization, const FTimeSynthTimeDef& FadeTime);
    void StopClip(FTimeSynthClipHandle InClipHandle, ETimeSynthEventClipQuantization EventQuantization);
    void SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec);
    void SetSeed(int32 InSeed);
    void SetQuantizationSettings(const FTimeSynthQuantizationSettings& InQuantizationSettings);
    void SetFilterSettings(ETimeSynthFilter Filter, const FTimeSynthFilterSettings& InSettings);
    void SetFilterEnabled(ETimeSynthFilter Filter, bool bIsEnabled);
    void SetFFTSize(ETimeSynthFFTSize InFFTSize);
    void SetEnvelopeFollowerSettings(const FTimeSynthEnvelopeFollowerSettings& InSettings);
    void SetEnvelopeFollowerEnabled(bool bInIsEnabled);
    void SetBPM(const float BeatsPerMinute);
    void ResetSeed();
    FTimeSynthClipHandle PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup);
    bool HasActiveClips();
    TArray<FTimeSynthSpectralData> GetSpectralData();
    int32 GetMaxActiveClipLimit();
    float GetEnvelopeFollowerValue();
    int32 GetBPM();
    void AddQuantizationEventDelegate(ETimeSynthEventQuantization QuantizationType, const FAddQuantizationEventDelegateOnQuantizationEvent& OnQuantizationEvent);
};

class UTimeSynthVolumeGroup : public UObject
{
    float DefaultVolume;

};

#endif
