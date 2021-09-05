// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UMagicLeapLightingTrackingComponent : UActorComponent {
	bool UseGlobalAmbience; // 0xb0(0x01)
	bool UseColorTemp; // 0xb1(0x01)
};

// Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapLightEstimationFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsTrackerValid();
	bool GetColorTemperatureState(FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState);
	bool GetAmbientGlobalState(FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState);
	void DestroyTracker();
	bool CreateTracker();
};

