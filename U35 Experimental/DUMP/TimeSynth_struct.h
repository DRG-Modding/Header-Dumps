// Enum TimeSynth.ETimeSynthEventQuantization
enum class ETimeSynthEventQuantization : uint8 {
	None = 0,
	Bars8 = 1,
	Bars4 = 2,
	Bars2 = 3,
	Bar = 4,
	HalfNote = 5,
	HalfNoteTriplet = 6,
	QuarterNote = 7,
	QuarterNoteTriplet = 8,
	EighthNote = 9,
	EighthNoteTriplet = 10,
	SixteenthNote = 11,
	SixteenthNoteTriplet = 12,
	ThirtySecondNote = 13,
	Count = 14,
	ETimeSynthEventQuantization_MAX = 15
};

// Enum TimeSynth.ETimeSynthEnvelopeFollowerPeakMode
enum class ETimeSynthEnvelopeFollowerPeakMode : uint8 {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ETimeSynthEnvelopeFollowerPeakMode_MAX = 4
};

// Enum TimeSynth.ETimeSynthFilterType
enum class ETimeSynthFilterType : uint8 {
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ETimeSynthFilterType_MAX = 5
};

// Enum TimeSynth.ETimeSynthFilter
enum class ETimeSynthFilter : uint8 {
	FilterA = 0,
	FilterB = 1,
	Count = 2,
	ETimeSynthFilter_MAX = 3
};

// Enum TimeSynth.ETimeSynthEventClipQuantization
enum class ETimeSynthEventClipQuantization : uint8 {
	Global = 0,
	None = 1,
	Bars8 = 2,
	Bars4 = 3,
	Bars2 = 4,
	Bar = 5,
	HalfNote = 6,
	HalfNoteTriplet = 7,
	QuarterNote = 8,
	QuarterNoteTriplet = 9,
	EighthNote = 10,
	EighthNoteTriplet = 11,
	SixteenthNote = 12,
	SixteenthNoteTriplet = 13,
	ThirtySecondNote = 14,
	Count = 15,
	ETimeSynthEventClipQuantization_MAX = 16
};

// Enum TimeSynth.ETimeSynthFFTSize
enum class ETimeSynthFFTSize : uint8 {
	Min_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	ETimeSynthFFTSize_MAX = 4
};

// Enum TimeSynth.ETimeSynthBeatDivision
enum class ETimeSynthBeatDivision : uint8 {
	One = 0,
	Two = 1,
	Four = 2,
	Eight = 3,
	Sixteen = 4,
	Count = 5,
	ETimeSynthBeatDivision_MAX = 6
};

// ScriptStruct TimeSynth.TimeSynthEnvelopeFollowerSettings
// Size: 0x0c (Inherited: 0x00)
struct FTimeSynthEnvelopeFollowerSettings {
	float AttackTime; // 0x00(0x04)
	float ReleaseTime; // 0x04(0x04)
	enum class ETimeSynthEnvelopeFollowerPeakMode PeakMode; // 0x08(0x01)
	bool bIsAnalogMode; // 0x09(0x01)
};

// ScriptStruct TimeSynth.TimeSynthFilterSettings
// Size: 0x0c (Inherited: 0x00)
struct FTimeSynthFilterSettings {
	enum class ETimeSynthFilterType FilterType; // 0x00(0x01)
	float CutoffFrequency; // 0x04(0x04)
	float FilterQ; // 0x08(0x04)
};

// ScriptStruct TimeSynth.TimeSynthClipSound
// Size: 0x18 (Inherited: 0x00)
struct FTimeSynthClipSound {
	USoundWave* SoundWave; // 0x00(0x08)
	float RandomWeight; // 0x08(0x04)
	FVector2D DistanceRange; // 0x0c(0x08)
};

// ScriptStruct TimeSynth.TimeSynthClipHandle
// Size: 0x0c (Inherited: 0x00)
struct FTimeSynthClipHandle {
	FName ClipName; // 0x00(0x08)
	int32_t ClipId; // 0x08(0x04)
};

// ScriptStruct TimeSynth.TimeSynthTimeDef
// Size: 0x08 (Inherited: 0x00)
struct FTimeSynthTimeDef {
	int32_t NumBars; // 0x00(0x04)
	int32_t NumBeats; // 0x04(0x04)
};

// ScriptStruct TimeSynth.TimeSynthQuantizationSettings
// Size: 0x14 (Inherited: 0x00)
struct FTimeSynthQuantizationSettings {
	float BeatsPerMinute; // 0x00(0x04)
	int32_t BeatsPerBar; // 0x04(0x04)
	enum class ETimeSynthBeatDivision BeatDivision; // 0x08(0x01)
	float EventDelaySeconds; // 0x0c(0x04)
	enum class ETimeSynthEventQuantization GlobalQuantization; // 0x10(0x01)
};

// ScriptStruct TimeSynth.TimeSynthSpectralData
// Size: 0x08 (Inherited: 0x00)
struct FTimeSynthSpectralData {
	float FrequencyHz; // 0x00(0x04)
	float Magnitude; // 0x04(0x04)
};

