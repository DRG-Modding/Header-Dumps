// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8_t {
	HeadMountedDisplay,
	Controller,
	TrackingReference,
	Other,
	Invalid,
	Any,
	EXRTrackedDeviceType_MAX,
};

// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t {
	Disabled,
	SingleEyeLetterboxed,
	Undistorted,
	Distorted,
	SingleEye,
	SingleEyeCroppedToFill,
	Texture,
	TexturePlusEye,
	ESpectatorScreenMode_MAX,
};

// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t {
	Unknown,
	Worn,
	NotWorn,
	EHMDWornState_MAX,
};

// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t {
	Floor,
	Eye,
	Stage,
	EHMDTrackingOrigin_MAX,
};

// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t {
	Orientation,
	Position,
	OrientationAndPosition,
	EOrientPositionSelector_MAX,
};

// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t {
	NotTracked,
	InertialOnly,
	Tracked,
	ETrackingStatus_MAX,
};

// ScriptStruct HeadMountedDisplay.XRDeviceId
// Size: 0x0c (Inherited: 0x00)
struct FXRDeviceId {
	struct FName SystemName; // 0x00(0x08)
	int32_t DeviceID; // 0x08(0x04)
};

