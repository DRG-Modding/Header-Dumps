#ifndef UE4SS_SDK_AudioMixer_HPP
#define UE4SS_SDK_AudioMixer_HPP

#include "AudioMixer_enums.hpp"

class USynthComponent : USceneComponent
{
    uint8 bAutoDestroy;
    uint8 bStopWhenOwnerDestroyed;
    uint8 bAllowSpatialization;
    uint8 bOverrideAttenuation;
    uint8 bOutputToBusOnly;
    USoundAttenuation* AttenuationSettings;
    FSoundAttenuationSettings AttenuationOverrides;
    USoundConcurrency* ConcurrencySettings;
    TSet<USoundConcurrency*> ConcurrencySet;
    USoundClass* SoundClass;
    USoundEffectSourcePresetChain* SourceEffectChain;
    USoundSubmixBase* SoundSubmix;
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
    USynthSound* Synth;
    UAudioComponent* AudioComponent;

    void Stop();
    void Start();
    void SetVolumeMultiplier(float VolumeMultiplier);
    void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel);
    bool IsPlaying();
}

class UAudioGenerator : UObject
{
}

class UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary
{

    float TrimAudioCache(float InMegabytesToFree);
    USoundWave* StopRecordingOutput(const UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, USoundSubmix* SubmixToRecord, USoundWave* ExistingSoundWaveToOverwrite);
    void StopAnalyzingOutput(const UObject* WorldContextObject, USoundSubmix* SubmixToStopAnalyzing);
    void StartRecordingOutput(const UObject* WorldContextObject, float ExpectedDuration, USoundSubmix* SubmixToRecord);
    void StartAnalyzingOutput(const UObject* WorldContextObject, USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize);
    void SetBypassSourceEffectChainEntry(const UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
    void ResumeRecordingOutput(const UObject* WorldContextObject, USoundSubmix* SubmixToPause);
    void ReplaceSoundEffectSubmix(const UObject* WorldContextObject, USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, USoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSubmixEffectPresetAtIndex(const UObject* WorldContextObject, USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
    void RemoveSubmixEffectPreset(const UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSourceEffectFromPresetChain(const UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
    void RemoveMasterSubmixEffect(const UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset);
    void PrimeSoundForPlayback(USoundWave* SoundWave, const OnSoundLoadComplete__DelegateSignature OnLoadCompletion);
    void PrimeSoundCueForPlayback(USoundCue* SoundCue);
    void PauseRecordingOutput(const UObject* WorldContextObject, USoundSubmix* SubmixToPause);
    void GetPhaseForFrequencies(const UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Phases, USoundSubmix* SubmixToAnalyze);
    int32 GetNumberOfEntriesInSourceEffectChain(const UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain);
    void GetMagnitudeForFrequencies(const UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Magnitudes, USoundSubmix* SubmixToAnalyze);
    void ClearSubmixEffects(const UObject* WorldContextObject, USoundSubmix* SoundSubmix);
    void ClearMasterSubmixEffects(const UObject* WorldContextObject);
    int32 AddSubmixEffect(const UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);
    void AddSourceEffectToPresetChain(const UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry);
    void AddMasterSubmixEffect(const UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset);
}

class USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset
{
    FSubmixEffectDynamicsProcessorSettings Settings;

    void SetSettings(const FSubmixEffectDynamicsProcessorSettings& Settings);
    void SetExternalSubmix(USoundSubmix* Submix);
}

class USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset
{
    FSubmixEffectSubmixEQSettings Settings;

    void SetSettings(const FSubmixEffectSubmixEQSettings& InSettings);
}

class USubmixEffectReverbPreset : USoundEffectSubmixPreset
{
    FSubmixEffectReverbSettings Settings;

    void SetSettingsWithReverbEffect(const UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);
    void SetSettings(const FSubmixEffectReverbSettings& InSettings);
}

class USubmixEffectReverbFastPreset : USoundEffectSubmixPreset
{
    FSubmixEffectReverbFastSettings Settings;

    void SetSettingsWithReverbEffect(const UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);
    void SetSettings(const FSubmixEffectReverbFastSettings& InSettings);
}

class USynthSound : USoundWaveProcedural
{
    USynthComponent* OwningSynthComponent;
}

struct USubmixEffectDynamicsProcessorSettings
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
    USoundSubmix* ExternalSubmix;
    uint8 bChannelLinked;
    uint8 bAnalogMode;
    uint8 bKeyAudition;
    float KeyGainDb;
    float OutputGainDb;
    FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;
    FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;
}

struct USubmixEffectDynamicProcessorFilterSettings
{
    uint8 bEnabled;
    float Cutoff;
    float GainDb;
}

struct USubmixEffectSubmixEQSettings
{
    TArray<FSubmixEffectEQBand> EQBands;
}

struct USubmixEffectEQBand
{
    float Frequency;
    float Bandwidth;
    float GainDb;
    uint8 bEnabled;
}

struct USubmixEffectReverbSettings
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
}

struct USubmixEffectReverbFastSettings
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
}

#endif
