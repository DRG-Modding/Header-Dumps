// Enum MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
enum class EMagicLeapLightEstimationCamera : uint8 {
	Left = 0,
	Right = 1,
	FarLeft = 2,
	FarRight = 3,
	EMagicLeapLightEstimationCamera_MAX = 4
};

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
// Size: 0x20 (Inherited: 0x00)
struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x00(0x04)
	FLinearColor AmbientColor; // 0x04(0x10)
	FTimespan Timestamp; // 0x18(0x08)
};

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
// Size: 0x18 (Inherited: 0x00)
struct FMagicLeapLightEstimationAmbientGlobalState {
	TArray<float> AmbientIntensityNits; // 0x00(0x10)
	FTimespan Timestamp; // 0x10(0x08)
};

