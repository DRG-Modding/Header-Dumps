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
	UPROPERTY(BlueprintReadWrite) float ColorTemperatureKelvin; 
	UPROPERTY(BlueprintReadWrite) FLinearColor AmbientColor; 
	UPROPERTY(BlueprintReadWrite) FTimespan Timestamp; 
};

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
// Size: 0x18 (Inherited: 0x00)
struct FMagicLeapLightEstimationAmbientGlobalState {
	UPROPERTY(BlueprintReadWrite) TArray<float> AmbientIntensityNits; 
	UPROPERTY(BlueprintReadWrite) FTimespan Timestamp; 
};

