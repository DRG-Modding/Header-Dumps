// Class Synthesis.ModularSynthPresetBank
// Size: 0x38 (Inherited: 0x28)
struct UModularSynthPresetBank : UObject {
	TArray<FModularSynthPresetBankEntry> Presets; // 0x28(0x10)
};

// Class Synthesis.ModularSynthLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModularSynthLibrary : UBlueprintFunctionLibrary {

	void AddModularSynthPresetToBankAsset(UModularSynthPresetBank* InBank, FModularSynthPreset Preset, FString PresetName);
};

// Class Synthesis.ModularSynthComponent
// Size: 0xd70 (Inherited: 0x6d0)
struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x6d0(0x04)

	void SetSynthPreset(FModularSynthPreset SynthPreset);
	void SetSustainGain(float SustainGain);
	void SetStereoDelayWetlevel(float DelayWetlevel);
	void SetStereoDelayTime(float DelayTimeMsec);
	void SetStereoDelayRatio(float DelayRatio);
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode);
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
	void SetStereoDelayFeedback(float DelayFeedback);
	void SetSpread(float Spread);
	void SetReleaseTime(float ReleaseTimeMsec);
	void SetPortamento(float Portamento);
	void SetPitchBend(float PitchBend);
	void SetPan(float Pan);
	void SetOscType(int32_t OscIndex, enum class ESynth1OscType OscType);
	void SetOscSync(bool bIsSynced);
	void SetOscSemitones(int32_t OscIndex, float Semitones);
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);
	void SetOscOctave(int32_t OscIndex, float Octave);
	void SetOscGainMod(int32_t OscIndex, float OscGainMod);
	void SetOscGain(int32_t OscIndex, float OscGain);
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);
	void SetOscCents(int32_t OscIndex, float Cents);
	void SetModEnvSustainGain(float SustainGain);
	void SetModEnvReleaseTime(float Release);
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType);
	void SetModEnvInvert(bool bInvert);
	void SetModEnvDepth(float Depth);
	void SetModEnvDecayTime(float DecayTimeMsec);
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType);
	void SetModEnvBiasInvert(bool bInvert);
	void SetModEnvAttackTime(float AttackTimeMsec);
	void SetLFOType(int32_t LFOIndex, enum class ESynthLFOType LFOType);
	void SetLFOPatch(int32_t LFOIndex, enum class ESynthLFOPatchType LFOPatchType);
	void SetLFOMode(int32_t LFOIndex, enum class ESynthLFOMode LFOMode);
	void SetLFOGainMod(int32_t LFOIndex, float GainMod);
	void SetLFOGain(int32_t LFOIndex, float Gain);
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);
	void SetGainDb(float GainDb);
	void SetFilterType(enum class ESynthFilterType FilterType);
	void SetFilterQMod(float FilterQ);
	void SetFilterQ(float FilterQ);
	void SetFilterFrequencyMod(float FilterFrequencyHz);
	void SetFilterFrequency(float FilterFrequencyHz);
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm);
	void SetEnableUnison(bool EnableUnison);
	void SetEnableRetrigger(bool RetriggerEnabled);
	void SetEnablePolyphony(bool bEnablePolyphony);
	bool SetEnablePatch(FPatchId PatchId, bool bIsEnabled);
	void SetEnableLegato(bool LegatoEnabled);
	void SetDecayTime(float DecayTimeMsec);
	void SetChorusFrequency(float Frequency);
	void SetChorusFeedback(float Feedback);
	void SetChorusEnabled(bool EnableChorus);
	void SetChorusDepth(float Depth);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int32_t Velocity, float Duration);
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);
	FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, TArray<FSynth1PatchCable> PatchCables, bool bEnableByDefault);
};

// Class Synthesis.SourceEffectBitCrusherPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	FSourceEffectBitCrusherSettings Settings; // 0x70(0x08)

	void SetSettings(FSourceEffectBitCrusherSettings InSettings);
};

// Class Synthesis.SourceEffectChorusPreset
// Size: 0x98 (Inherited: 0x40)
struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	FSourceEffectChorusSettings Settings; // 0x80(0x18)

	void SetSettings(FSourceEffectChorusSettings InSettings);
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size: 0xb8 (Inherited: 0x40)
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	FSourceEffectDynamicsProcessorSettings Settings; // 0x90(0x28)

	void SetSettings(FSourceEffectDynamicsProcessorSettings InSettings);
};

// Class Synthesis.EnvelopeFollowerListener
// Size: 0xd0 (Inherited: 0xb0)
struct UEnvelopeFollowerListener : UActorComponent {
	FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xb0(0x10)
};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	FSourceEffectEnvelopeFollowerSettings Settings; // 0x74(0x0c)

	void UnregisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);
	void SetSettings(FSourceEffectEnvelopeFollowerSettings InSettings);
	void RegisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);
};

// Class Synthesis.SourceEffectEQPreset
// Size: 0x88 (Inherited: 0x40)
struct USourceEffectEQPreset : USoundEffectSourcePreset {
	FSourceEffectEQSettings Settings; // 0x78(0x10)

	void SetSettings(FSourceEffectEQSettings InSettings);
};

// Class Synthesis.SourceEffectFilterPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	FSourceEffectFilterSettings Settings; // 0x74(0x0c)

	void SetSettings(FSourceEffectFilterSettings InSettings);
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	FSourceEffectFoldbackDistortionSettings Settings; // 0x74(0x0c)

	void SetSettings(FSourceEffectFoldbackDistortionSettings InSettings);
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	FSourceEffectMidSideSpreaderSettings Settings; // 0x74(0x0c)

	void SetSettings(FSourceEffectMidSideSpreaderSettings InSettings);
};

// Class Synthesis.SourceEffectPannerPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	FSourceEffectPannerSettings Settings; // 0x70(0x08)

	void SetSettings(FSourceEffectPannerSettings InSettings);
};

// Class Synthesis.SourceEffectPhaserPreset
// Size: 0x88 (Inherited: 0x40)
struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	FSourceEffectPhaserSettings Settings; // 0x78(0x10)

	void SetSettings(FSourceEffectPhaserSettings InSettings);
};

// Class Synthesis.SourceEffectRingModulationPreset
// Size: 0x90 (Inherited: 0x40)
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	FSourceEffectRingModulationSettings Settings; // 0x7c(0x14)

	void SetSettings(FSourceEffectRingModulationSettings InSettings);
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// Size: 0x98 (Inherited: 0x40)
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	FSourceEffectSimpleDelaySettings Settings; // 0x80(0x18)

	void SetSettings(FSourceEffectSimpleDelaySettings InSettings);
};

// Class Synthesis.SourceEffectStereoDelayPreset
// Size: 0x90 (Inherited: 0x40)
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	FSourceEffectStereoDelaySettings Settings; // 0x7c(0x14)

	void SetSettings(FSourceEffectStereoDelaySettings InSettings);
};

// Class Synthesis.SourceEffectWaveShaperPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	FSourceEffectWaveShaperSettings Settings; // 0x70(0x08)

	void SetSettings(FSourceEffectWaveShaperSettings InSettings);
};

// Class Synthesis.AudioImpulseResponse
// Size: 0x58 (Inherited: 0x28)
struct UAudioImpulseResponse : UObject {
	TArray<float> ImpulseResponse; // 0x28(0x10)
	int32_t NumChannels; // 0x38(0x04)
	int32_t SampleRate; // 0x3c(0x04)
	float NormalizationVolumeDb; // 0x40(0x04)
	TArray<float> IRData; // 0x48(0x10)
};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0xb8 (Inherited: 0x40)
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectConvolutionReverbSettings Settings; // 0x40(0x20)
	UAudioImpulseResponse* ImpulseResponse; // 0x60(0x08)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x68(0x01)
	bool bEnableHardwareAcceleration; // 0x69(0x01)

	void SetSettings(FSubmixEffectConvolutionReverbSettings InSettings);
	void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse);
};

// Class Synthesis.SubmixEffectDelayPreset
// Size: 0x90 (Inherited: 0x40)
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectDelaySettings Settings; // 0x74(0x0c)
	FSubmixEffectDelaySettings DynamicSettings; // 0x80(0x0c)

	void SetSettings(FSubmixEffectDelaySettings InSettings);
	void SetInterpolationTime(float Time);
	void SetDelay(float Length);
	float GetMaxDelayInMilliseconds();
};

// Class Synthesis.SubmixEffectFilterPreset
// Size: 0x80 (Inherited: 0x40)
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	FSubmixEffectFilterSettings Settings; // 0x74(0x0c)

	void SetSettings(FSubmixEffectFilterSettings InSettings);
	void SetFilterType(enum class ESubmixFilterType InType);
	void SetFilterQMod(float InQ);
	void SetFilterQ(float InQ);
	void SetFilterCutoffFrequencyMod(float InFrequency);
	void SetFilterCutoffFrequency(float InFrequency);
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm);
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// Size: 0x88 (Inherited: 0x40)
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectFlexiverbSettings Settings; // 0x78(0x10)

	void SetSettings(FSubmixEffectFlexiverbSettings InSettings);
};

// Class Synthesis.SubmixEffectTapDelayPreset
// Size: 0xb0 (Inherited: 0x40)
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectTapDelaySettings Settings; // 0x80(0x18)

	void SetTap(int32_t TapId, FTapDelayInfo TapInfo);
	void SetSettings(FSubmixEffectTapDelaySettings InSettings);
	void SetInterpolationTime(float Time);
	void RemoveTap(int32_t TapId);
	void GetTapIds(TArray<int32_t> TapIds);
	void GetTap(int32_t TapId, FTapDelayInfo TapInfo);
	float GetMaxDelayInMilliseconds();
	void AddTap(int32_t TapId);
};

// Class Synthesis.Synth2DSlider
// Size: 0x478 (Inherited: 0x108)
struct USynth2DSlider : UWidget {
	float ValueX; // 0x108(0x04)
	float ValueY; // 0x10c(0x04)
	FDelegate ValueXDelegate; // 0x110(0x10)
	FDelegate ValueYDelegate; // 0x120(0x10)
	FSynth2DSliderStyle WidgetStyle; // 0x130(0x2b8)
	FLinearColor SliderHandleColor; // 0x3e8(0x10)
	bool IndentHandle; // 0x3f8(0x01)
	bool Locked; // 0x3f9(0x01)
	float StepSize; // 0x3fc(0x04)
	bool IsFocusable; // 0x400(0x01)
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x408(0x10)
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x418(0x10)
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x428(0x10)
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x438(0x10)
	FMulticastInlineDelegate OnValueChangedX; // 0x448(0x10)
	FMulticastInlineDelegate OnValueChangedY; // 0x458(0x10)

	void SetValue(FVector2D InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(FLinearColor InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	FVector2D GetValue();
};

// Class Synthesis.GranularSynth
// Size: 0xa90 (Inherited: 0x6d0)
struct UGranularSynth : USynthComponent {
	USoundWave* GranulatedSoundWave; // 0x6d0(0x08)

	void SetSustainGain(float SustainGain);
	void SetSoundWave(USoundWave* InSoundWave);
	void SetScrubMode(bool bScrubMode);
	void SetReleaseTimeMsec(float ReleaseTimeMsec);
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType);
	void SetPlaybackSpeed(float InPlayheadRate);
	void SetGrainVolume(float BaseVolume, FVector2D VolumeRange);
	void SetGrainsPerSecond(float InGrainsPerSecond);
	void SetGrainProbability(float InGrainProbability);
	void SetGrainPitch(float BasePitch, FVector2D PitchRange);
	void SetGrainPan(float BasePan, FVector2D PanRange);
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType);
	void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange);
	void SetDecayTime(float DecayTimeMsec);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int32_t Velocity, float Duration);
	void NoteOff(float Note, bool bKill);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlayheadTime();
};

// Class Synthesis.MonoWaveTableSynthPreset
// Size: 0x170 (Inherited: 0x28)
struct UMonoWaveTableSynthPreset : UObject {
	FString PresetName; // 0x28(0x10)
	char bLockKeyframesToGridBool : 1; // 0x38(0x01)
	int32_t LockKeyframesToGrid; // 0x3c(0x04)
	int32_t WaveTableResolution; // 0x40(0x04)
	TArray<FRuntimeFloatCurve> WaveTable; // 0x48(0x10)
	char bNormalizeWaveTables : 1; // 0x58(0x01)
};

// Class Synthesis.SynthComponentMonoWaveTable
// Size: 0xe10 (Inherited: 0x6d0)
struct USynthComponentMonoWaveTable : USynthComponent {
	FMulticastInlineDelegate OnTableAltered; // 0x6d0(0x10)
	FMulticastInlineDelegate OnNumTablesChanged; // 0x6e0(0x10)
	UMonoWaveTableSynthPreset* CurrentPreset; // 0x6f0(0x08)

	void SetWaveTablePosition(float InPosition);
	void SetSustainPedalState(bool InSustainPedalState);
	void SetPosLfoType(enum class ESynthLFOType InLfoType);
	void SetPosLfoFrequency(float InLfoFrequency);
	void SetPosLfoDepth(float InLfoDepth);
	void SetPositionEnvelopeSustainGain(float InSustainGain);
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetPositionEnvelopeInvert(bool bInInvert);
	void SetPositionEnvelopeDepth(float InDepth);
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);
	void SetPositionEnvelopeBiasDepth(float InDepth);
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);
	void SetLowPassFilterResonance(float InNewQ);
	void SetLowPassFilterFrequency(float InNewFrequency);
	void SetFrequencyWithMidiNote(float InMidiNote);
	void SetFrequencyPitchBend(float FrequencyOffsetCents);
	void SetFrequency(float FrequencyHz);
	void SetFilterEnvelopeSustainGain(float InSustainGain);
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);
	void SetFilterEnvelopeInvert(bool bInInvert);
	void SetFilterEnvelopeDepth(float InDepth);
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);
	void SetFilterEnvelopeBiasDepth(float InDepth);
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent);
	bool SetCurveInterpolationType(enum class CurveInterpolationType InterpolationType, int32_t TableIndex);
	void SetAmpEnvelopeSustainGain(float InSustainGain);
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetAmpEnvelopeInvert(bool bInInvert);
	void SetAmpEnvelopeDepth(float InDepth);
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);
	void SetAmpEnvelopeBiasDepth(float InDepth);
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);
	void RefreshWaveTable(int32_t Index);
	void RefreshAllWaveTables();
	void NoteOn(float InMidiNote, float InVelocity);
	void NoteOff(float InMidiNote);
	int32_t GetNumTableEntries();
	int32_t GetMaxTableIndex();
	TArray<float> GetKeyFrameValuesForTable(float TableIndex);
	float GetCurveTangent(int32_t TableIndex);
};

// Class Synthesis.SynthSamplePlayer
// Size: 0x800 (Inherited: 0x6d0)
struct USynthSamplePlayer : USynthComponent {
	USoundWave* SoundWave; // 0x6d0(0x08)
	FMulticastInlineDelegate OnSampleLoaded; // 0x6d8(0x10)
	FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x6e8(0x10)

	void SetSoundWave(USoundWave* InSoundWave);
	void SetScrubTimeWidth(float InScrubTimeWidthSec);
	void SetScrubMode(bool bScrubMode);
	void SetPitch(float InPitch, float TimeSec);
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlaybackProgressTime();
	float GetCurrentPlaybackProgressPercent();
};

// Class Synthesis.SynthKnob
// Size: 0x400 (Inherited: 0x108)
struct USynthKnob : UWidget {
	float Value; // 0x108(0x04)
	float StepSize; // 0x10c(0x04)
	float MouseSpeed; // 0x110(0x04)
	float MouseFineTuneSpeed; // 0x114(0x04)
	char ShowTooltipInfo : 1; // 0x118(0x01)
	FText ParameterName; // 0x120(0x18)
	FText ParameterUnits; // 0x138(0x18)
	FDelegate ValueDelegate; // 0x150(0x10)
	FSynthKnobStyle WidgetStyle; // 0x160(0x238)
	bool Locked; // 0x398(0x01)
	bool IsFocusable; // 0x399(0x01)
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x3a0(0x10)
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x3b0(0x10)
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x3c0(0x10)
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x3d0(0x10)
	FMulticastInlineDelegate OnValueChanged; // 0x3e0(0x10)

	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetLocked(bool InValue);
	float GetValue();
};

