// Enum Synthesis.ESynth1PatchDestination
enum class ESynth1PatchDestination : uint8 {
	Osc1Gain = 0,
	Osc1Frequency = 1,
	Osc1Pulsewidth = 2,
	Osc2Gain = 3,
	Osc2Frequency = 4,
	Osc2Pulsewidth = 5,
	FilterFrequency = 6,
	FilterQ = 7,
	Gain = 8,
	Pan = 9,
	LFO1Frequency = 10,
	LFO1Gain = 11,
	LFO2Frequency = 12,
	LFO2Gain = 13,
	Count = 14,
	ESynth1PatchDestination_MAX = 15
};

// Enum Synthesis.ESynth1PatchSource
enum class ESynth1PatchSource : uint8 {
	LFO1 = 0,
	LFO2 = 1,
	Envelope = 2,
	BiasEnvelope = 3,
	Count = 4,
	ESynth1PatchSource_MAX = 5
};

// Enum Synthesis.ESynthStereoDelayMode
enum class ESynthStereoDelayMode : uint8 {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	ESynthStereoDelayMode_MAX = 4
};

// Enum Synthesis.ESynthFilterAlgorithm
enum class ESynthFilterAlgorithm : uint8 {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESynthFilterAlgorithm_MAX = 4
};

// Enum Synthesis.ESynthFilterType
enum class ESynthFilterType : uint8 {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESynthFilterType_MAX = 5
};

// Enum Synthesis.ESynthModEnvBiasPatch
enum class ESynthModEnvBiasPatch : uint8 {
	PatchToNone = 0,
	PatchToOscFreq = 1,
	PatchToFilterFreq = 2,
	PatchToFilterQ = 3,
	PatchToLFO1Gain = 4,
	PatchToLFO2Gain = 5,
	PatchToLFO1Freq = 6,
	PatchToLFO2Freq = 7,
	Count = 8,
	ESynthModEnvBiasPatch_MAX = 9
};

// Enum Synthesis.ESynthModEnvPatch
enum class ESynthModEnvPatch : uint8 {
	PatchToNone = 0,
	PatchToOscFreq = 1,
	PatchToFilterFreq = 2,
	PatchToFilterQ = 3,
	PatchToLFO1Gain = 4,
	PatchToLFO2Gain = 5,
	PatchToLFO1Freq = 6,
	PatchToLFO2Freq = 7,
	Count = 8,
	ESynthModEnvPatch_MAX = 9
};

// Enum Synthesis.ESynthLFOPatchType
enum class ESynthLFOPatchType : uint8 {
	PatchToNone = 0,
	PatchToGain = 1,
	PatchToOscFreq = 2,
	PatchToFilterFreq = 3,
	PatchToFilterQ = 4,
	PatchToOscPulseWidth = 5,
	PatchToOscPan = 6,
	PatchLFO1ToLFO2Frequency = 7,
	PatchLFO1ToLFO2Gain = 8,
	Count = 9,
	ESynthLFOPatchType_MAX = 10
};

// Enum Synthesis.ESynthLFOMode
enum class ESynthLFOMode : uint8 {
	Sync = 0,
	OneShot = 1,
	Free = 2,
	Count = 3,
	ESynthLFOMode_MAX = 4
};

// Enum Synthesis.ESynthLFOType
enum class ESynthLFOType : uint8 {
	Sine = 0,
	UpSaw = 1,
	DownSaw = 2,
	Square = 3,
	Triangle = 4,
	Exponential = 5,
	RandomSampleHold = 6,
	Count = 7,
	ESynthLFOType_MAX = 8
};

// Enum Synthesis.ESynth1OscType
enum class ESynth1OscType : uint8 {
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Noise = 4,
	Count = 5,
	ESynth1OscType_MAX = 6
};

// Enum Synthesis.ESourceEffectDynamicsPeakMode
enum class ESourceEffectDynamicsPeakMode : uint8 {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4
};

// Enum Synthesis.ESourceEffectDynamicsProcessorType
enum class ESourceEffectDynamicsProcessorType : uint8 {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESourceEffectDynamicsProcessorType_MAX = 5
};

// Enum Synthesis.EEnvelopeFollowerPeakMode
enum class EEnvelopeFollowerPeakMode : uint8 {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	EEnvelopeFollowerPeakMode_MAX = 4
};

// Enum Synthesis.ESourceEffectFilterType
enum class ESourceEffectFilterType : uint8 {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESourceEffectFilterType_MAX = 5
};

// Enum Synthesis.ESourceEffectFilterCircuit
enum class ESourceEffectFilterCircuit : uint8 {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESourceEffectFilterCircuit_MAX = 4
};

// Enum Synthesis.EStereoChannelMode
enum class EStereoChannelMode : uint8 {
	MidSide = 0,
	LeftRight = 1,
	count = 2,
	EStereoChannelMode_MAX = 3
};

// Enum Synthesis.EPhaserLFOType
enum class EPhaserLFOType : uint8 {
	Sine = 0,
	UpSaw = 1,
	DownSaw = 2,
	Square = 3,
	Triangle = 4,
	Exponential = 5,
	RandomSampleHold = 6,
	Count = 7,
	EPhaserLFOType_MAX = 8
};

// Enum Synthesis.ERingModulatorTypeSourceEffect
enum class ERingModulatorTypeSourceEffect : uint8 {
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Count = 4,
	ERingModulatorTypeSourceEffect_MAX = 5
};

// Enum Synthesis.EStereoDelaySourceEffect
enum class EStereoDelaySourceEffect : uint8 {
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	EStereoDelaySourceEffect_MAX = 4
};

// Enum Synthesis.ESubmixEffectConvolutionReverbBlockSize
enum class ESubmixEffectConvolutionReverbBlockSize : uint8 {
	BlockSize256 = 0,
	BlockSize512 = 1,
	BlockSize1024 = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3
};

// Enum Synthesis.ESubmixFilterAlgorithm
enum class ESubmixFilterAlgorithm : uint8 {
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESubmixFilterAlgorithm_MAX = 4
};

// Enum Synthesis.ESubmixFilterType
enum class ESubmixFilterType : uint8 {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESubmixFilterType_MAX = 5
};

// Enum Synthesis.ETapLineMode
enum class ETapLineMode : uint8 {
	SendToChannel = 0,
	Panning = 1,
	Disabled = 2,
	ETapLineMode_MAX = 3
};

// Enum Synthesis.EGranularSynthSeekType
enum class EGranularSynthSeekType : uint8 {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	Count = 2,
	EGranularSynthSeekType_MAX = 3
};

// Enum Synthesis.EGranularSynthEnvelopeType
enum class EGranularSynthEnvelopeType : uint8 {
	Rectangular = 0,
	Triangle = 1,
	DownwardTriangle = 2,
	UpwardTriangle = 3,
	ExponentialDecay = 4,
	ExponentialIncrease = 5,
	Gaussian = 6,
	Hanning = 7,
	Lanczos = 8,
	Cosine = 9,
	CosineSquared = 10,
	Welch = 11,
	Blackman = 12,
	BlackmanHarris = 13,
	Count = 14,
	EGranularSynthEnvelopeType_MAX = 15
};

// Enum Synthesis.CurveInterpolationType
enum class CurveInterpolationType : uint8 {
	AUTOINTERP = 0,
	LINEAR = 1,
	CONSTANT = 2,
	CurveInterpolationType_MAX = 3
};

// Enum Synthesis.ESamplePlayerSeekType
enum class ESamplePlayerSeekType : uint8 {
	FromBeginning = 0,
	FromCurrentPosition = 1,
	FromEnd = 2,
	Count = 3,
	ESamplePlayerSeekType_MAX = 4
};

// Enum Synthesis.ESynthKnobSize
enum class ESynthKnobSize : uint8 {
	Medium = 0,
	Large = 1,
	Count = 2,
	ESynthKnobSize_MAX = 3
};

// Enum Synthesis.ESynthSlateColorStyle
enum class ESynthSlateColorStyle : uint8 {
	Light = 0,
	Dark = 1,
	Count = 2,
	ESynthSlateColorStyle_MAX = 3
};

// Enum Synthesis.ESynthSlateSizeType
enum class ESynthSlateSizeType : uint8 {
	Small = 0,
	Medium = 1,
	Large = 2,
	Count = 3,
	ESynthSlateSizeType_MAX = 4
};

// ScriptStruct Synthesis.ModularSynthPresetBankEntry
// Size: 0xf0 (Inherited: 0x00)
struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x00(0x10)
	FModularSynthPreset Preset; // 0x10(0xe0)
};

// ScriptStruct Synthesis.ModularSynthPreset
// Size: 0xe0 (Inherited: 0x08)
struct FModularSynthPreset : FTableRowBase {
	char bEnablePolyphony : 1; // 0x08(0x01)
	enum class ESynth1OscType Osc1Type; // 0x0c(0x01)
	float Osc1Gain; // 0x10(0x04)
	float Osc1Octave; // 0x14(0x04)
	float Osc1Semitones; // 0x18(0x04)
	float Osc1Cents; // 0x1c(0x04)
	float Osc1PulseWidth; // 0x20(0x04)
	enum class ESynth1OscType Osc2Type; // 0x24(0x01)
	float Osc2Gain; // 0x28(0x04)
	float Osc2Octave; // 0x2c(0x04)
	float Osc2Semitones; // 0x30(0x04)
	float Osc2Cents; // 0x34(0x04)
	float Osc2PulseWidth; // 0x38(0x04)
	float Portamento; // 0x3c(0x04)
	char bEnableUnison : 1; // 0x40(0x01)
	char bEnableOscillatorSync : 1; // 0x40(0x01)
	float Spread; // 0x44(0x04)
	float Pan; // 0x48(0x04)
	float LFO1Frequency; // 0x4c(0x04)
	float LFO1Gain; // 0x50(0x04)
	enum class ESynthLFOType LFO1Type; // 0x54(0x01)
	enum class ESynthLFOMode LFO1Mode; // 0x55(0x01)
	enum class ESynthLFOPatchType LFO1PatchType; // 0x56(0x01)
	float LFO2Frequency; // 0x58(0x04)
	float LFO2Gain; // 0x5c(0x04)
	enum class ESynthLFOType LFO2Type; // 0x60(0x01)
	enum class ESynthLFOMode LFO2Mode; // 0x61(0x01)
	enum class ESynthLFOPatchType LFO2PatchType; // 0x62(0x01)
	float GainDb; // 0x64(0x04)
	float AttackTime; // 0x68(0x04)
	float DecayTime; // 0x6c(0x04)
	float SustainGain; // 0x70(0x04)
	float ReleaseTime; // 0x74(0x04)
	enum class ESynthModEnvPatch ModEnvPatchType; // 0x78(0x01)
	enum class ESynthModEnvBiasPatch ModEnvBiasPatchType; // 0x79(0x01)
	char bInvertModulationEnvelope : 1; // 0x7c(0x01)
	char bInvertModulationEnvelopeBias : 1; // 0x7c(0x01)
	float ModulationEnvelopeDepth; // 0x80(0x04)
	float ModulationEnvelopeAttackTime; // 0x84(0x04)
	float ModulationEnvelopeDecayTime; // 0x88(0x04)
	float ModulationEnvelopeSustainGain; // 0x8c(0x04)
	float ModulationEnvelopeReleaseTime; // 0x90(0x04)
	char bLegato : 1; // 0x94(0x01)
	char bRetrigger : 1; // 0x94(0x01)
	float FilterFrequency; // 0x98(0x04)
	float FilterQ; // 0x9c(0x04)
	enum class ESynthFilterType FilterType; // 0xa0(0x01)
	enum class ESynthFilterAlgorithm FilterAlgorithm; // 0xa1(0x01)
	char bStereoDelayEnabled : 1; // 0xa4(0x01)
	enum class ESynthStereoDelayMode StereoDelayMode; // 0xa8(0x01)
	float StereoDelayTime; // 0xac(0x04)
	float StereoDelayFeedback; // 0xb0(0x04)
	float StereoDelayWetlevel; // 0xb4(0x04)
	float StereoDelayRatio; // 0xb8(0x04)
	char bChorusEnabled : 1; // 0xbc(0x01)
	float ChorusDepth; // 0xc0(0x04)
	float ChorusFeedback; // 0xc4(0x04)
	float ChorusFrequency; // 0xc8(0x04)
	TArray<FEpicSynth1Patch> Patches; // 0xd0(0x10)
};

// ScriptStruct Synthesis.EpicSynth1Patch
// Size: 0x18 (Inherited: 0x00)
struct FEpicSynth1Patch {
	enum class ESynth1PatchSource PatchSource; // 0x00(0x01)
	TArray<FSynth1PatchCable> PatchCables; // 0x08(0x10)
};

// ScriptStruct Synthesis.Synth1PatchCable
// Size: 0x08 (Inherited: 0x00)
struct FSynth1PatchCable {
	float Depth; // 0x00(0x04)
	enum class ESynth1PatchDestination Destination; // 0x04(0x01)
};

// ScriptStruct Synthesis.PatchId
// Size: 0x04 (Inherited: 0x00)
struct FPatchId {
	int32_t ID; // 0x00(0x04)
};

// ScriptStruct Synthesis.SourceEffectBitCrusherSettings
// Size: 0x08 (Inherited: 0x00)
struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x00(0x04)
	float CrushedBits; // 0x04(0x04)
};

// ScriptStruct Synthesis.SourceEffectChorusSettings
// Size: 0x18 (Inherited: 0x00)
struct FSourceEffectChorusSettings {
	float Depth; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	float Feedback; // 0x08(0x04)
	float WetLevel; // 0x0c(0x04)
	float DryLevel; // 0x10(0x04)
	float Spread; // 0x14(0x04)
};

// ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
// Size: 0x28 (Inherited: 0x00)
struct FSourceEffectDynamicsProcessorSettings {
	enum class ESourceEffectDynamicsProcessorType DynamicsProcessorType; // 0x00(0x01)
	enum class ESourceEffectDynamicsPeakMode PeakMode; // 0x01(0x01)
	float LookAheadMsec; // 0x04(0x04)
	float AttackTimeMsec; // 0x08(0x04)
	float ReleaseTimeMsec; // 0x0c(0x04)
	float ThresholdDb; // 0x10(0x04)
	float Ratio; // 0x14(0x04)
	float KneeBandwidthDb; // 0x18(0x04)
	float InputGainDb; // 0x1c(0x04)
	float OutputGainDb; // 0x20(0x04)
	char bStereoLinked : 1; // 0x24(0x01)
	char bAnalogMode : 1; // 0x24(0x01)
};

// ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
// Size: 0x0c (Inherited: 0x00)
struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x00(0x04)
	float ReleaseTime; // 0x04(0x04)
	enum class EEnvelopeFollowerPeakMode PeakMode; // 0x08(0x01)
	bool bIsAnalogMode; // 0x09(0x01)
};

// ScriptStruct Synthesis.SourceEffectEQSettings
// Size: 0x10 (Inherited: 0x00)
struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x00(0x10)
};

// ScriptStruct Synthesis.SourceEffectEQBand
// Size: 0x10 (Inherited: 0x00)
struct FSourceEffectEQBand {
	float Frequency; // 0x00(0x04)
	float Bandwidth; // 0x04(0x04)
	float GainDb; // 0x08(0x04)
	char bEnabled : 1; // 0x0c(0x01)
};

// ScriptStruct Synthesis.SourceEffectFilterSettings
// Size: 0x0c (Inherited: 0x00)
struct FSourceEffectFilterSettings {
	enum class ESourceEffectFilterCircuit FilterCircuit; // 0x00(0x01)
	enum class ESourceEffectFilterType FilterType; // 0x01(0x01)
	float CutoffFrequency; // 0x04(0x04)
	float FilterQ; // 0x08(0x04)
};

// ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
// Size: 0x0c (Inherited: 0x00)
struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x00(0x04)
	float ThresholdDb; // 0x04(0x04)
	float OutputGainDb; // 0x08(0x04)
};

// ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
// Size: 0x0c (Inherited: 0x00)
struct FSourceEffectMidSideSpreaderSettings {
	enum class EStereoChannelMode InputMode; // 0x00(0x01)
	float SpreadAmount; // 0x04(0x04)
	enum class EStereoChannelMode OutputMode; // 0x08(0x01)
	bool bEqualPower; // 0x09(0x01)
};

// ScriptStruct Synthesis.SourceEffectPannerSettings
// Size: 0x08 (Inherited: 0x00)
struct FSourceEffectPannerSettings {
	float Spread; // 0x00(0x04)
	float Pan; // 0x04(0x04)
};

// ScriptStruct Synthesis.SourceEffectPhaserSettings
// Size: 0x10 (Inherited: 0x00)
struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	float Feedback; // 0x08(0x04)
	enum class EPhaserLFOType LFOType; // 0x0c(0x01)
	bool UseQuadraturePhase; // 0x0d(0x01)
};

// ScriptStruct Synthesis.SourceEffectRingModulationSettings
// Size: 0x14 (Inherited: 0x00)
struct FSourceEffectRingModulationSettings {
	enum class ERingModulatorTypeSourceEffect ModulatorType; // 0x00(0x01)
	float Frequency; // 0x04(0x04)
	float Depth; // 0x08(0x04)
	float DryLevel; // 0x0c(0x04)
	float WetLevel; // 0x10(0x04)
};

// ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
// Size: 0x18 (Inherited: 0x00)
struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x00(0x04)
	float DelayAmount; // 0x04(0x04)
	float DryAmount; // 0x08(0x04)
	float WetAmount; // 0x0c(0x04)
	float Feedback; // 0x10(0x04)
	char bDelayBasedOnDistance : 1; // 0x14(0x01)
};

// ScriptStruct Synthesis.SourceEffectStereoDelaySettings
// Size: 0x14 (Inherited: 0x00)
struct FSourceEffectStereoDelaySettings {
	enum class EStereoDelaySourceEffect DelayMode; // 0x00(0x01)
	float DelayTimeMsec; // 0x04(0x04)
	float Feedback; // 0x08(0x04)
	float DelayRatio; // 0x0c(0x04)
	float WetLevel; // 0x10(0x04)
};

// ScriptStruct Synthesis.SourceEffectWaveShaperSettings
// Size: 0x08 (Inherited: 0x00)
struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x00(0x04)
	float OutputGainDb; // 0x04(0x04)
};

// ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
// Size: 0x20 (Inherited: 0x00)
struct FSubmixEffectConvolutionReverbSettings {
	float NormalizationVolumeDb; // 0x00(0x04)
	float SurroundRearChannelBleedDb; // 0x04(0x04)
	bool bInvertRearChannelBleedPhase; // 0x08(0x01)
	bool bSurroundRearChannelFlip; // 0x09(0x01)
	float SurroundRearChannelBleedAmount; // 0x0c(0x04)
	UAudioImpulseResponse* ImpulseResponse; // 0x10(0x08)
	bool AllowHArdwareAcceleration; // 0x18(0x01)
};

// ScriptStruct Synthesis.SubmixEffectDelaySettings
// Size: 0x0c (Inherited: 0x00)
struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x00(0x04)
	float InterpolationTime; // 0x04(0x04)
	float DelayLength; // 0x08(0x04)
};

// ScriptStruct Synthesis.SubmixEffectFilterSettings
// Size: 0x0c (Inherited: 0x00)
struct FSubmixEffectFilterSettings {
	enum class ESubmixFilterType FilterType; // 0x00(0x01)
	enum class ESubmixFilterAlgorithm FilterAlgorithm; // 0x01(0x01)
	float FilterFrequency; // 0x04(0x04)
	float FilterQ; // 0x08(0x04)
};

// ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
// Size: 0x10 (Inherited: 0x00)
struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x00(0x04)
	float DecayTime; // 0x04(0x04)
	float RoomDampening; // 0x08(0x04)
	int32_t Complexity; // 0x0c(0x04)
};

// ScriptStruct Synthesis.SubmixEffectTapDelaySettings
// Size: 0x18 (Inherited: 0x00)
struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x00(0x04)
	float InterpolationTime; // 0x04(0x04)
	TArray<FTapDelayInfo> Taps; // 0x08(0x10)
};

// ScriptStruct Synthesis.TapDelayInfo
// Size: 0x18 (Inherited: 0x00)
struct FTapDelayInfo {
	enum class ETapLineMode TapLineMode; // 0x00(0x01)
	float DelayLength; // 0x04(0x04)
	float Gain; // 0x08(0x04)
	int32_t OutputChannel; // 0x0c(0x04)
	float PanInDegrees; // 0x10(0x04)
	int32_t TapId; // 0x14(0x04)
};

// ScriptStruct Synthesis.Synth2DSliderStyle
// Size: 0x2b8 (Inherited: 0x08)
struct FSynth2DSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalThumbImage; // 0x08(0x88)
	FSlateBrush DisabledThumbImage; // 0x90(0x88)
	FSlateBrush NormalBarImage; // 0x118(0x88)
	FSlateBrush DisabledBarImage; // 0x1a0(0x88)
	FSlateBrush BackgroundImage; // 0x228(0x88)
	float BarThickness; // 0x2b0(0x04)
};

// ScriptStruct Synthesis.SynthKnobStyle
// Size: 0x238 (Inherited: 0x08)
struct FSynthKnobStyle : FSlateWidgetStyle {
	FSlateBrush LargeKnob; // 0x08(0x88)
	FSlateBrush LargeKnobOverlay; // 0x90(0x88)
	FSlateBrush MediumKnob; // 0x118(0x88)
	FSlateBrush MediumKnobOverlay; // 0x1a0(0x88)
	float MinValueAngle; // 0x228(0x04)
	float MaxValueAngle; // 0x22c(0x04)
	enum class ESynthKnobSize KnobSize; // 0x230(0x01)
};

// ScriptStruct Synthesis.SynthSlateStyle
// Size: 0x10 (Inherited: 0x08)
struct FSynthSlateStyle : FSlateWidgetStyle {
	enum class ESynthSlateSizeType SizeType; // 0x08(0x01)
	enum class ESynthSlateColorStyle ColorStyle; // 0x09(0x01)
};

