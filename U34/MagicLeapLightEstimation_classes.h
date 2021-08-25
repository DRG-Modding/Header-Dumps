// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UMagicLeapLightingTrackingComponent : UActorComponent {
	bool UseGlobalAmbience; // 0xb0(0x01)
	bool UseColorTemp; // 0xb1(0x01)
	char UnknownData_B2[0xe]; // 0xb2(0x0e)
};

// Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapLightEstimationFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsTrackerValid(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
	bool GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
	bool GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
	void DestroyTracker(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker
	bool CreateTracker(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
};

