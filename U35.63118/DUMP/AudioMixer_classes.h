// Class AudioMixer.SynthComponent
// Size: 0x6d0 (Inherited: 0x1f0)
struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; // 0x1f0(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x1f0(0x01)
	char bAllowSpatialization : 1; // 0x1f0(0x01)
	char bOverrideAttenuation : 1; // 0x1f0(0x01)
	char bOutputToBusOnly : 1; // 0x1f4(0x01)
	USoundAttenuation* AttenuationSettings; // 0x1f8(0x08)
	FSoundAttenuationSettings AttenuationOverrides; // 0x200(0x3a0)
	USoundConcurrency* ConcurrencySettings; // 0x5a0(0x08)
	TSet<USoundConcurrency*> ConcurrencySet; // 0x5a8(0x50)
	USoundClass* SoundClass; // 0x5f8(0x08)
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x600(0x08)
	USoundSubmixBase* SoundSubmix; // 0x608(0x08)
	TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x610(0x10)
	TArray<FSoundSourceBusSendInfo> BusSends; // 0x620(0x10)
	FSoundModulation Modulation; // 0x630(0x10)
	TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x640(0x10)
	char bIsUISound : 1; // 0x650(0x01)
	char bIsPreviewSound : 1; // 0x650(0x01)
	int32_t EnvelopeFollowerAttackTime; // 0x654(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x658(0x04)
	FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x660(0x10)
	USynthSound* Synth; // 0x690(0x08)
	UAudioComponent* AudioComponent; // 0x698(0x08)

	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel);
	bool IsPlaying();
};

// Class AudioMixer.AudioGenerator
// Size: 0xa8 (Inherited: 0x28)
struct UAudioGenerator : UObject {
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary {

	float TrimAudioCache(float InMegabytesToFree);
	USoundWave* StopRecordingOutput(UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, FString Name, FString Path, USoundSubmix* SubmixToRecord, USoundWave* ExistingSoundWaveToOverwrite);
	void StopAnalyzingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToStopAnalyzing);
	void StartRecordingOutput(UObject* WorldContextObject, float ExpectedDuration, USoundSubmix* SubmixToRecord);
	void StartAnalyzingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize);
	void SetBypassSourceEffectChainEntry(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed);
	void ResumeRecordingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToPause);
	void ReplaceSoundEffectSubmix(UObject* WorldContextObject, USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSubmixEffectPresetAtIndex(UObject* WorldContextObject, USoundSubmix* SoundSubmix, int32_t SubmixChainIndex);
	void RemoveSubmixEffectPreset(UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSourceEffectFromPresetChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex);
	void RemoveMasterSubmixEffect(UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset);
	void PrimeSoundForPlayback(USoundWave* SoundWave, FDelegate OnLoadCompletion);
	void PrimeSoundCueForPlayback(USoundCue* SoundCue);
	void PauseRecordingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToPause);
	void GetPhaseForFrequencies(UObject* WorldContextObject, TArray<float> Frequencies, TArray<float> Phases, USoundSubmix* SubmixToAnalyze);
	int32_t GetNumberOfEntriesInSourceEffectChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain);
	void GetMagnitudeForFrequencies(UObject* WorldContextObject, TArray<float> Frequencies, TArray<float> Magnitudes, USoundSubmix* SubmixToAnalyze);
	void ClearSubmixEffects(UObject* WorldContextObject, USoundSubmix* SoundSubmix);
	void ClearMasterSubmixEffects(UObject* WorldContextObject);
	int32_t AddSubmixEffect(UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);
	void AddSourceEffectToPresetChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry);
	void AddMasterSubmixEffect(UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset);
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0x108 (Inherited: 0x40)
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	FSubmixEffectDynamicsProcessorSettings Settings; // 0xb8(0x50)

	void SetSettings(FSubmixEffectDynamicsProcessorSettings Settings);
	void SetExternalSubmix(USoundSubmix* Submix);
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0x88 (Inherited: 0x40)
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	FSubmixEffectSubmixEQSettings Settings; // 0x78(0x10)

	void SetSettings(FSubmixEffectSubmixEQSettings InSettings);
};

// Class AudioMixer.SubmixEffectReverbPreset
// Size: 0xd0 (Inherited: 0x40)
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectReverbSettings Settings; // 0x9c(0x34)

	void SetSettingsWithReverbEffect(UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(FSubmixEffectReverbSettings InSettings);
};

// Class AudioMixer.SubmixEffectReverbFastPreset
// Size: 0xd8 (Inherited: 0x40)
struct USubmixEffectReverbFastPreset : USoundEffectSubmixPreset {
	FSubmixEffectReverbFastSettings Settings; // 0xa0(0x38)

	void SetSettingsWithReverbEffect(UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(FSubmixEffectReverbFastSettings InSettings);
};

// Class AudioMixer.SynthSound
// Size: 0x380 (Inherited: 0x360)
struct USynthSound : USoundWaveProcedural {
	USynthComponent* OwningSynthComponent; // 0x360(0x08)
};

