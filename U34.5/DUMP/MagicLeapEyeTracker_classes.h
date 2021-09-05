// Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	bool GetEyeBlinkState(FMagicLeapEyeBlinkState BlinkState);
	enum class EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();
};

