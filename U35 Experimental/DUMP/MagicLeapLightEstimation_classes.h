// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UMagicLeapLightingTrackingComponent : UActorComponent {
	UPROPERTY(BlueprintReadWrite) bool UseGlobalAmbience; 
	UPROPERTY(BlueprintReadWrite) bool UseColorTemp; 
};

// Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapLightEstimationFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) bool IsTrackerValid();
	UFUNCTION(BlueprintCallable) bool GetColorTemperatureState(FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState);
	UFUNCTION(BlueprintCallable) bool GetAmbientGlobalState(FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState);
	UFUNCTION(BlueprintCallable) void DestroyTracker();
	UFUNCTION(BlueprintCallable) bool CreateTracker();
};

