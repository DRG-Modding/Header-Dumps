// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8 {
	None = 0,
	Bad = 1,
	Good = 2,
	EMagicLeapEyeTrackingCalibrationStatus_MAX = 3
};

// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
enum class EMagicLeapEyeTrackingStatus : uint8 {
	NotConnected = 0,
	Disabled = 1,
	UserNotPresent = 2,
	UserPresent = 3,
	UserPresentAndWatchingWindow = 4,
	EMagicLeapEyeTrackingStatus_MAX = 5
};

// ScriptStruct MagicLeapEyeTracker.MagicLeapEyeBlinkState
// Size: 0x02 (Inherited: 0x00)
struct FMagicLeapEyeBlinkState {
	bool LeftEyeBlinked; // 0x00(0x01)
	bool RightEyeBlinked; // 0x01(0x01)
};

