// Class TimeSynth.TimeSynthVolumeGroup
// Size: 0x30 (Inherited: 0x28)
struct UTimeSynthVolumeGroup : UObject {
	float DefaultVolume; // 0x28(0x04)
};

// Class TimeSynth.TimeSynthClip
// Size: 0x68 (Inherited: 0x28)
struct UTimeSynthClip : UObject {
	TArray<FTimeSynthClipSound> Sounds; // 0x28(0x10)
	FVector2D VolumeScaleDb; // 0x38(0x08)
	FVector2D PitchScaleSemitones; // 0x40(0x08)
	FTimeSynthTimeDef FadeInTime; // 0x48(0x08)
	bool bApplyFadeOut; // 0x50(0x01)
	FTimeSynthTimeDef FadeOutTime; // 0x54(0x08)
	FTimeSynthTimeDef ClipDuration; // 0x5c(0x08)
	enum class ETimeSynthEventClipQuantization ClipQuantization; // 0x64(0x01)
};

// Class TimeSynth.TimeSynthComponent
// Size: 0x1100 (Inherited: 0x6d0)
struct UTimeSynthComponent : USynthComponent {
	FTimeSynthQuantizationSettings QuantizationSettings; // 0x6d0(0x14)
	char bEnableSpectralAnalysis : 1; // 0x6e4(0x01)
	TArray<float> FrequenciesToAnalyze; // 0x6e8(0x10)
	enum class ETimeSynthFFTSize FFTSize; // 0x6f8(0x01)
	FMulticastInlineDelegate OnPlaybackTime; // 0x700(0x10)
	char bIsFilterAEnabled : 1; // 0x710(0x01)
	char bIsFilterBEnabled : 1; // 0x710(0x01)
	FTimeSynthFilterSettings FilterASettings; // 0x714(0x0c)
	FTimeSynthFilterSettings FilterBSettings; // 0x720(0x0c)
	char bIsEnvelopeFollowerEnabled : 1; // 0x72c(0x01)
	FTimeSynthEnvelopeFollowerSettings EnvelopeFollowerSettings; // 0x730(0x0c)
	int32_t MaxPoolSize; // 0x73c(0x04)

	void StopSoundsOnVolumeGroupWithFadeOverride(UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization, FTimeSynthTimeDef FadeTime);
	void StopSoundsOnVolumeGroup(UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization);
	void StopClipWithFadeOverride(FTimeSynthClipHandle InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization, FTimeSynthTimeDef FadeTime);
	void StopClip(FTimeSynthClipHandle InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization);
	void SetVolumeGroup(UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec);
	void SetSeed(int32_t InSeed);
	void SetQuantizationSettings(FTimeSynthQuantizationSettings InQuantizationSettings);
	void SetFilterSettings(enum class ETimeSynthFilter Filter, FTimeSynthFilterSettings InSettings);
	void SetFilterEnabled(enum class ETimeSynthFilter Filter, bool bIsEnabled);
	void SetFFTSize(enum class ETimeSynthFFTSize InFFTSize);
	void SetEnvelopeFollowerSettings(FTimeSynthEnvelopeFollowerSettings InSettings);
	void SetEnvelopeFollowerEnabled(bool bInIsEnabled);
	void SetBPM(float BeatsPerMinute);
	void ResetSeed();
	FTimeSynthClipHandle PlayClip(UTimeSynthClip* InClip, UTimeSynthVolumeGroup* InVolumeGroup);
	bool HasActiveClips();
	TArray<FTimeSynthSpectralData> GetSpectralData();
	float GetEnvelopeFollowerValue();
	int32_t GetBPM();
	void AddQuantizationEventDelegate(enum class ETimeSynthEventQuantization QuantizationType, FDelegate OnQuantizationEvent);
};

