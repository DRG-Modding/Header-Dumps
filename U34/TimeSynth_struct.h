// Enum TimeSynth.ETimeSynthEventQuantization
enum class ETimeSynthEventQuantization : uint8_t {
	None,
	Bars8,
	Bars4,
	Bars2,
	Bar,
	HalfNote,
	HalfNoteTriplet,
	QuarterNote,
	QuarterNoteTriplet,
	EighthNote,
	EighthNoteTriplet,
	SixteenthNote,
	SixteenthNoteTriplet,
	ThirtySecondNote,
	Count,
	ETimeSynthEventQuantization_MAX,
};

// Enum TimeSynth.ETimeSynthEnvelopeFollowerPeakMode
enum class ETimeSynthEnvelopeFollowerPeakMode : uint8_t {
	MeanSquared,
	RootMeanSquared,
	Peak,
	Count,
	ETimeSynthEnvelopeFollowerPeakMode_MAX,
};

// Enum TimeSynth.ETimeSynthFilterType
enum class ETimeSynthFilterType : uint8_t {
	LowPass,
	HighPass,
	BandPass,
	BandStop,
	Count,
	ETimeSynthFilterType_MAX,
};

// Enum TimeSynth.ETimeSynthFilter
enum class ETimeSynthFilter : uint8_t {
	FilterA,
	FilterB,
	Count,
	ETimeSynthFilter_MAX,
};

// Enum TimeSynth.ETimeSynthEventClipQuantization
enum class ETimeSynthEventClipQuantization : uint8_t {
	Global,
	None,
	Bars8,
	Bars4,
	Bars2,
	Bar,
	HalfNote,
	HalfNoteTriplet,
	QuarterNote,
	QuarterNoteTriplet,
	EighthNote,
	EighthNoteTriplet,
	SixteenthNote,
	SixteenthNoteTriplet,
	ThirtySecondNote,
	Count,
	ETimeSynthEventClipQuantization_MAX,
};

// Enum TimeSynth.ETimeSynthFFTSize
enum class ETimeSynthFFTSize : uint8_t {
	Min_65,
	Small_257,
	Medium_513,
	Large_1025,
	ETimeSynthFFTSize_MAX,
};

// Enum TimeSynth.ETimeSynthBeatDivision
enum class ETimeSynthBeatDivision : uint8_t {
	One,
	Two,
	Four,
	Eight,
	Sixteen,
	Count,
	ETimeSynthBeatDivision_MAX,
};

// ScriptStruct TimeSynth.TimeSynthEnvelopeFollowerSettings
// Size: 0x0c (Inherited: 0x00)
struct FTimeSynthEnvelopeFollowerSettings {
	float AttackTime; // 0x00(0x04)
	float ReleaseTime; // 0x04(0x04)
	enum class ETimeSynthEnvelopeFollowerPeakMode PeakMode; // 0x08(0x01)
	bool bIsAnalogMode; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct TimeSynth.TimeSynthFilterSettings
// Size: 0x0c (Inherited: 0x00)
struct FTimeSynthFilterSettings {
	enum class ETimeSynthFilterType FilterType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float CutoffFrequency; // 0x04(0x04)
	float FilterQ; // 0x08(0x04)
};

// ScriptStruct TimeSynth.TimeSynthClipSound
// Size: 0x18 (Inherited: 0x00)
struct FTimeSynthClipSound {
	struct USoundWave* SoundWave; // 0x00(0x08)
	float RandomWeight; // 0x08(0x04)
	struct FVector2D DistanceRange; // 0x0c(0x08)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TimeSynth.TimeSynthClipHandle
// Size: 0x0c (Inherited: 0x00)
struct FTimeSynthClipHandle {
	struct FName ClipName; // 0x00(0x08)
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
	char UnknownData_9[0x3]; // 0x09(0x03)
	float EventDelaySeconds; // 0x0c(0x04)
	enum class ETimeSynthEventQuantization GlobalQuantization; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TimeSynth.TimeSynthSpectralData
// Size: 0x08 (Inherited: 0x00)
struct FTimeSynthSpectralData {
	float FrequencyHz; // 0x00(0x04)
	float Magnitude; // 0x04(0x04)
};

