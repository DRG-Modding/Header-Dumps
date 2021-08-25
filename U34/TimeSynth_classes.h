// Class TimeSynth.TimeSynthVolumeGroup
// Size: 0x30 (Inherited: 0x28)
struct UTimeSynthVolumeGroup : UObject {
	float DefaultVolume; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class TimeSynth.TimeSynthClip
// Size: 0x68 (Inherited: 0x28)
struct UTimeSynthClip : UObject {
	struct TArray<struct FTimeSynthClipSound> Sounds; // 0x28(0x10)
	struct FVector2D VolumeScaleDb; // 0x38(0x08)
	struct FVector2D PitchScaleSemitones; // 0x40(0x08)
	struct FTimeSynthTimeDef FadeInTime; // 0x48(0x08)
	bool bApplyFadeOut; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	struct FTimeSynthTimeDef FadeOutTime; // 0x54(0x08)
	struct FTimeSynthTimeDef ClipDuration; // 0x5c(0x08)
	enum class ETimeSynthEventClipQuantization ClipQuantization; // 0x64(0x01)
	char UnknownData_65[0x3]; // 0x65(0x03)
};

// Class TimeSynth.TimeSynthComponent
// Size: 0x1100 (Inherited: 0x6d0)
struct UTimeSynthComponent : USynthComponent {
	struct FTimeSynthQuantizationSettings QuantizationSettings; // 0x6d0(0x14)
	char bEnableSpectralAnalysis : 1; // 0x6e4(0x01)
	char UnknownData_6E4_1 : 7; // 0x6e4(0x01)
	char UnknownData_6E5[0x3]; // 0x6e5(0x03)
	struct TArray<float> FrequenciesToAnalyze; // 0x6e8(0x10)
	enum class ETimeSynthFFTSize FFTSize; // 0x6f8(0x01)
	char UnknownData_6F9[0x7]; // 0x6f9(0x07)
	struct FMulticastInlineDelegate OnPlaybackTime; // 0x700(0x10)
	char bIsFilterAEnabled : 1; // 0x710(0x01)
	char bIsFilterBEnabled : 1; // 0x710(0x01)
	char UnknownData_710_2 : 6; // 0x710(0x01)
	char UnknownData_711[0x3]; // 0x711(0x03)
	struct FTimeSynthFilterSettings FilterASettings; // 0x714(0x0c)
	struct FTimeSynthFilterSettings FilterBSettings; // 0x720(0x0c)
	char bIsEnvelopeFollowerEnabled : 1; // 0x72c(0x01)
	char UnknownData_72C_1 : 7; // 0x72c(0x01)
	char UnknownData_72D[0x3]; // 0x72d(0x03)
	struct FTimeSynthEnvelopeFollowerSettings EnvelopeFollowerSettings; // 0x730(0x0c)
	int32_t MaxPoolSize; // 0x73c(0x04)
	char UnknownData_740[0x9c0]; // 0x740(0x9c0)

	void StopSoundsOnVolumeGroupWithFadeOverride(struct UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef FadeTime); // Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride
	void StopSoundsOnVolumeGroup(struct UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization); // Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup
	void StopClipWithFadeOverride(struct FTimeSynthClipHandle InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef FadeTime); // Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride
	void StopClip(struct FTimeSynthClipHandle InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization); // Function TimeSynth.TimeSynthComponent.StopClip
	void SetVolumeGroup(struct UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec); // Function TimeSynth.TimeSynthComponent.SetVolumeGroup
	void SetSeed(int32_t InSeed); // Function TimeSynth.TimeSynthComponent.SetSeed
	void SetQuantizationSettings(struct FTimeSynthQuantizationSettings InQuantizationSettings); // Function TimeSynth.TimeSynthComponent.SetQuantizationSettings
	void SetFilterSettings(enum class ETimeSynthFilter Filter, struct FTimeSynthFilterSettings InSettings); // Function TimeSynth.TimeSynthComponent.SetFilterSettings
	void SetFilterEnabled(enum class ETimeSynthFilter Filter, bool bIsEnabled); // Function TimeSynth.TimeSynthComponent.SetFilterEnabled
	void SetFFTSize(enum class ETimeSynthFFTSize InFFTSize); // Function TimeSynth.TimeSynthComponent.SetFFTSize
	void SetEnvelopeFollowerSettings(struct FTimeSynthEnvelopeFollowerSettings InSettings); // Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings
	void SetEnvelopeFollowerEnabled(bool bInIsEnabled); // Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled
	void SetBPM(float BeatsPerMinute); // Function TimeSynth.TimeSynthComponent.SetBPM
	void ResetSeed(); // Function TimeSynth.TimeSynthComponent.ResetSeed
	struct FTimeSynthClipHandle PlayClip(struct UTimeSynthClip* InClip, struct UTimeSynthVolumeGroup* InVolumeGroup); // Function TimeSynth.TimeSynthComponent.PlayClip
	bool HasActiveClips(); // Function TimeSynth.TimeSynthComponent.HasActiveClips
	struct TArray<struct FTimeSynthSpectralData> GetSpectralData(); // Function TimeSynth.TimeSynthComponent.GetSpectralData
	float GetEnvelopeFollowerValue(); // Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue
	int32_t GetBPM(); // Function TimeSynth.TimeSynthComponent.GetBPM
	void AddQuantizationEventDelegate(enum class ETimeSynthEventQuantization QuantizationType, struct FDelegate OnQuantizationEvent); // Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate
};

