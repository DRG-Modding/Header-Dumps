// Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8_t {
	Max,
	High,
	Medium,
	Low,
	Min,
	MatchDevice,
};

// ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
// Size: 0x10 (Inherited: 0x00)
struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float DurationThreshold; // 0x04(0x04)
	int32_t MaxNumRandomBranches; // 0x08(0x04)
	int32_t SoundCueQualityIndex; // 0x0c(0x04)
};

