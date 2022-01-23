#ifndef UE4SS_SDK_AudioMixer_HPP
#define UE4SS_SDK_AudioMixer_HPP

#include "AudioMixer_enums.hpp"

class USynthComponent : public USceneComponent
{
    uint8 bAutoDestroy;
    uint8 bStopWhenOwnerDestroyed;
    uint8 bAllowSpatialization;
    uint8 bOverrideAttenuation;
    uint8 bOutputToBusOnly;
    class USoundAttenuation* AttenuationSettings;
    FSoundAttenuationSettings AttenuationOverrides;
    class USoundConcurrency* ConcurrencySettings;
    TSet<USoundConcurrency*> ConcurrencySet;
    class USoundClass* SoundClass;
    class USoundEffectSourcePresetChain* SourceEffectChain;
    class USoundSubmixBase* SoundSubmix;
    TArray<FSoundSubmixSendInfo> SoundSubmixSends;
    TArray<FSoundSourceBusSendInfo> BusSends;
    FSoundModulation Modulation;
    TArray<FSoundSourceBusSendInfo> PreEffectBusSends;
    uint8 bIsUISound;
    uint8 bIsPreviewSound;
    int32 EnvelopeFollowerAttackTime;
    int32 EnvelopeFollowerReleaseTime;
    FSynthComponentOnAudioEnvelopeValue OnAudioEnvelopeValue;
    void OnSynthEnvelopeValue(const float EnvelopeValue);
    class USynthSound* Synth;
    class UAudioComponent* AudioComponent;

    void Stop();
    void Start();
    void SetVolumeMultiplier(float VolumeMultiplier);
    void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
    bool IsPlaying();
};

class UAudioGenerator : public UObject
{
};

class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{

    float TrimAudioCache(float InMegabytesToFree);
    class USoundWave* StopRecordingOutput(const class UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
    void StopAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
    void StartRecordingOutput(const class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
    void StartAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize);
    void SetBypassSourceEffectChainEntry(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
    void ResumeRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
    void ReplaceSoundEffectSubmix(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSubmixEffectPresetAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
    void RemoveSubmixEffectPreset(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSourceEffectFromPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
    void RemoveMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void PrimeSoundForPlayback(class USoundWave* SoundWave, const FPrimeSoundForPlaybackOnLoadCompletion OnLoadCompletion);
    void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
    void PauseRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
    void GetPhaseForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Phases, class USoundSubmix* SubmixToAnalyze);
    int32 GetNumberOfEntriesInSourceEffectChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
    void GetMagnitudeForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Magnitudes, class USoundSubmix* SubmixToAnalyze);
    void ClearSubmixEffects(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
    void ClearMasterSubmixEffects(const class UObject* WorldContextObject);
    int32 AddSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void AddSourceEffectToPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry);
    void AddMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};

struct FSubmixEffectDynamicProcessorFilterSettings
{
    uint8 bEnabled;
    float Cutoff;
    float GainDb;
};

struct FSubmixEffectDynamicsProcessorSettings
{
    ESubmixEffectDynamicsProcessorType DynamicsProcessorType;
    ESubmixEffectDynamicsPeakMode PeakMode;
    ESubmixEffectDynamicsChannelLinkMode LinkMode;
    float InputGainDb;
    float ThresholdDb;
    float Ratio;
    float KneeBandwidthDb;
    float LookAheadMsec;
    float AttackTimeMsec;
    float ReleaseTimeMsec;
    class USoundSubmix* ExternalSubmix;
    uint8 bChannelLinked;
    uint8 bAnalogMode;
    uint8 bKeyAudition;
    float KeyGainDb;
    float OutputGainDb;
    FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;
    FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;
};

class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectDynamicsProcessorSettings Settings;

    void SetSettings(const FSubmixEffectDynamicsProcessorSettings& Settings);
    void SetExternalSubmix(class USoundSubmix* Submix);
};

struct FSubmixEffectEQBand
{
    float Frequency;
    float Bandwidth;
    float GainDb;
    uint8 bEnabled;
};

struct FSubmixEffectSubmixEQSettings
{
    TArray<FSubmixEffectEQBand> EQBands;
};

class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectSubmixEQSettings Settings;

    void SetSettings(const FSubmixEffectSubmixEQSettings& InSettings);
};

struct FSubmixEffectReverbSettings
{
    float Density;
    float Diffusion;
    float Gain;
    float GainHF;
    float DecayTime;
    float DecayHFRatio;
    float ReflectionsGain;
    float ReflectionsDelay;
    float LateGain;
    float LateDelay;
    float AirAbsorptionGainHF;
    float WetLevel;
    float DryLevel;
};

class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectReverbSettings Settings;

    void SetSettingsWithReverbEffect(const class UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);
    void SetSettings(const FSubmixEffectReverbSettings& InSettings);
};

struct FSubmixEffectReverbFastSettings
{
    bool bBypass;
    float Density;
    float Diffusion;
    float Gain;
    float GainHF;
    float DecayTime;
    float DecayHFRatio;
    float ReflectionsGain;
    float ReflectionsDelay;
    float LateGain;
    float LateDelay;
    float AirAbsorptionGainHF;
    float WetLevel;
    float DryLevel;
};

class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectReverbFastSettings Settings;

    void SetSettingsWithReverbEffect(const class UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);
    void SetSettings(const FSubmixEffectReverbFastSettings& InSettings);
};

class USynthSound : public USoundWaveProcedural
{
    class USynthComponent* OwningSynthComponent;
};

#endif
