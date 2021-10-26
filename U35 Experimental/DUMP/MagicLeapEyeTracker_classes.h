// Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) bool GetEyeBlinkState(FMagicLeapEyeBlinkState BlinkState);
	UFUNCTION(BlueprintCallable) enum class EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();
};

