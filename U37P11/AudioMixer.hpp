#ifndef UE4SS_SDK_AudioMixer_HPP
#define UE4SS_SDK_AudioMixer_HPP

#include "AudioMixer_enums.hpp"

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
    ESubmixEffectDynamicsKeySource KeySource;
    class UAudioBus* ExternalAudioBus;
    class USoundSubmix* ExternalSubmix;
    uint8 bChannelLinked;
    uint8 bAnalogMode;
    uint8 bBypass;
    uint8 bKeyAudition;
    float KeyGainDb;
    float OutputGainDb;
    FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;
    FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;

};

struct FSubmixEffectEQBand
{
    float Frequency;
    float Bandwidth;
    float GainDb;
    uint8 bEnabled;

};

struct FSubmixEffectReverbSettings
{
    bool bBypassEarlyReflections;
    float ReflectionsDelay;
    float GainHF;
    float ReflectionsGain;
    bool bBypassLateReflections;
    float LateDelay;
    float DecayTime;
    float Density;
    float Diffusion;
    float AirAbsorptionGainHF;
    float DecayHFRatio;
    float LateGain;
    float Gain;
    float WetLevel;
    float DryLevel;
    bool bBypass;

};

struct FSubmixEffectSubmixEQSettings
{
    TArray<FSubmixEffectEQBand> EQBands;

};

class UAudioGenerator : public UObject
{
};

class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{

    float TrimAudioCache(float InMegabytesToFree);
    class USoundWave* StopRecordingOutput(const class UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
    void StopAudioBus(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
    void StopAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
    void StartRecordingOutput(const class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
    void StartAudioBus(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
    void StartAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
    void SetSubmixEffectChainOverride(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec);
    void SetBypassSourceEffectChainEntry(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
    void ResumeRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
    void ReplaceSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void ReplaceSoundEffectSubmix(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSubmixEffectPresetAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
    void RemoveSubmixEffectPreset(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSubmixEffectAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
    void RemoveSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSourceEffectFromPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
    void RemoveMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void PrimeSoundForPlayback(class USoundWave* SoundWave, const FPrimeSoundForPlaybackOnLoadCompletion OnLoadCompletion);
    void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
    void PauseRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
    TArray<FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32 InNumBands, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
    TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32 InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32 InStartingOctave, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
    TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32 InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
    bool IsAudioBusActive(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
    void GetPhaseForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Phases, class USoundSubmix* SubmixToAnalyze);
    int32 GetNumberOfEntriesInSourceEffectChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
    void GetMagnitudeForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Magnitudes, class USoundSubmix* SubmixToAnalyze);
    void ClearSubmixEffects(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
    void ClearSubmixEffectChainOverride(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec);
    void ClearMasterSubmixEffects(const class UObject* WorldContextObject);
    int32 AddSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void AddSourceEffectToPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry);
    void AddMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};

class UQuartzClockHandle : public UObject
{
    class UQuartzSubsystem* QuartzSubsystem;
    class UWorld* WorldPtr;

    void UnsubscribeFromTimeDivision(const class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle*& ClockHandle);
    void UnsubscribeFromAllTimeDivisions(const class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);
    void SubscribeToQuantizationEvent(const class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const FSubscribeToQuantizationEventOnQuantizationEvent& OnQuantizationEvent, class UQuartzClockHandle*& ClockHandle);
    void SubscribeToAllQuantizationEvents(const class UObject* WorldContextObject, const FSubscribeToAllQuantizationEventsOnQuantizationEvent& OnQuantizationEvent, class UQuartzClockHandle*& ClockHandle);
    void StopClock(const class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle*& ClockHandle);
    void StartOtherClock(const class UObject* WorldContextObject, FName OtherClockName, FQuartzQuantizationBoundary InQuantizationBoundary, const FStartOtherClockInDelegate& InDelegate);
    void StartClock(const class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);
    void SetTicksPerSecond(const class UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FSetTicksPerSecondDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float TicksPerSecond);
    void SetThirtySecondNotesPerMinute(const class UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FSetThirtySecondNotesPerMinuteDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute);
    void SetSecondsPerTick(const class UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FSetSecondsPerTickDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float SecondsPerTick);
    void SetMillisecondsPerTick(const class UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FSetMillisecondsPerTickDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float MillisecondsPerTick);
    void SetBeatsPerMinute(const class UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FSetBeatsPerMinuteDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float BeatsPerMinute);
    void ResumeClock(const class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);
    void ResetTransportQuantized(const class UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, const FResetTransportQuantizedInDelegate& InDelegate, class UQuartzClockHandle*& ClockHandle);
    void ResetTransport(const class UObject* WorldContextObject, const FResetTransportInDelegate& InDelegate);
    void PauseClock(const class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);
    bool IsClockRunning(const class UObject* WorldContextObject);
    float GetTicksPerSecond(const class UObject* WorldContextObject);
    float GetThirtySecondNotesPerMinute(const class UObject* WorldContextObject);
    float GetSecondsPerTick(const class UObject* WorldContextObject);
    float GetMillisecondsPerTick(const class UObject* WorldContextObject);
    float GetEstimatedRunTime(const class UObject* WorldContextObject);
    float GetDurationOfQuantizationTypeInSeconds(const class UObject* WorldContextObject, const EQuartzCommandQuantization& QuantizationType, float Multiplier);
    FQuartzTransportTimeStamp GetCurrentTimestamp(const class UObject* WorldContextObject);
    float GetBeatsPerMinute(const class UObject* WorldContextObject);
};

class UQuartzSubsystem : public UTickableWorldSubsystem
{

    bool IsQuartzEnabled();
    bool IsClockRunning(const class UObject* WorldContextObject, FName ClockName);
    float GetRoundTripMinLatency(const class UObject* WorldContextObject);
    float GetRoundTripMaxLatency(const class UObject* WorldContextObject);
    float GetRoundTripAverageLatency(const class UObject* WorldContextObject);
    class UQuartzClockHandle* GetHandleForClock(const class UObject* WorldContextObject, FName ClockName);
    float GetGameThreadToAudioRenderThreadMinLatency(const class UObject* WorldContextObject);
    float GetGameThreadToAudioRenderThreadMaxLatency(const class UObject* WorldContextObject);
    float GetGameThreadToAudioRenderThreadAverageLatency(const class UObject* WorldContextObject);
    float GetEstimatedClockRunTime(const class UObject* WorldContextObject, const FName& InClockName);
    float GetDurationOfQuantizationTypeInSeconds(const class UObject* WorldContextObject, FName ClockName, const EQuartzCommandQuantization& QuantizationType, float Multiplier);
    FQuartzTransportTimeStamp GetCurrentClockTimestamp(const class UObject* WorldContextObject, const FName& InClockName);
    float GetAudioRenderThreadToGameThreadMinLatency();
    float GetAudioRenderThreadToGameThreadMaxLatency();
    float GetAudioRenderThreadToGameThreadAverageLatency();
    bool DoesClockExist(const class UObject* WorldContextObject, FName ClockName);
    void DeleteClockByName(const class UObject* WorldContextObject, FName ClockName);
    void DeleteClockByHandle(const class UObject* WorldContextObject, class UQuartzClockHandle*& InClockHandle);
    class UQuartzClockHandle* CreateNewClock(const class UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);
};

class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectDynamicsProcessorSettings Settings;

    void SetSettings(const FSubmixEffectDynamicsProcessorSettings& Settings);
    void SetExternalSubmix(class USoundSubmix* Submix);
    void SetAudioBus(class UAudioBus* AudioBus);
    void ResetKey();
};

class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectReverbSettings Settings;

    void SetSettingsWithReverbEffect(const class UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);
    void SetSettings(const FSubmixEffectReverbSettings& InSettings);
};

class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectSubmixEQSettings Settings;

    void SetSettings(const FSubmixEffectSubmixEQSettings& InSettings);
};

class USynthComponent : public USceneComponent
{
    uint8 bAutoDestroy;
    uint8 bStopWhenOwnerDestroyed;
    uint8 bAllowSpatialization;
    uint8 bOverrideAttenuation;
    uint8 bEnableBusSends;
    uint8 bEnableBaseSubmix;
    uint8 bEnableSubmixSends;
    class USoundAttenuation* AttenuationSettings;
    FSoundAttenuationSettings AttenuationOverrides;
    class USoundConcurrency* ConcurrencySettings;
    TSet<USoundConcurrency*> ConcurrencySet;
    class USoundClass* SoundClass;
    class USoundEffectSourcePresetChain* SourceEffectChain;
    class USoundSubmixBase* SoundSubmix;
    TArray<FSoundSubmixSendInfo> SoundSubmixSends;
    TArray<FSoundSourceBusSendInfo> BusSends;
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
    void SetOutputToBusOnly(bool bInOutputToBusOnly);
    void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
    void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
    bool IsPlaying();
};

class USynthSound : public USoundWaveProcedural
{
    class USynthComponent* OwningSynthComponent;

};

#endif
