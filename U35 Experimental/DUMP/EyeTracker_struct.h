// Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8 {
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3
};

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// Size: 0x40 (Inherited: 0x00)
struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x00(0x0c)
	FVector LeftEyeDirection; // 0x0c(0x0c)
	FVector RightEyeOrigin; // 0x18(0x0c)
	FVector RightEyeDirection; // 0x24(0x0c)
	FVector FixationPoint; // 0x30(0x0c)
	float ConfidenceValue; // 0x3c(0x04)
};

// ScriptStruct EyeTracker.EyeTrackerGazeData
// Size: 0x28 (Inherited: 0x00)
struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x00(0x0c)
	FVector GazeDirection; // 0x0c(0x0c)
	FVector FixationPoint; // 0x18(0x0c)
	float ConfidenceValue; // 0x24(0x04)
};

