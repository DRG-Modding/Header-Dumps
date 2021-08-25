// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t {
	DoNotOverride,
	Manual,
	Tracking,
	Disable,
	MAX,
};

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// Size: 0x50 (Inherited: 0x00)
struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x00(0x01)
	char bDrawDebugLookAtTrackingPosition : 1; // 0x00(0x01)
	char UnknownData_0_2 : 6; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float LookAtTrackingInterpSpeed; // 0x04(0x04)
	char UnknownData_8[0x10]; // 0x08(0x10)
	struct TSoftObjectPtr<struct AActor> ActorToTrack; // 0x18(0x28)
	struct FVector RelativeOffset; // 0x40(0x0c)
	char bAllowRoll : 1; // 0x4c(0x01)
	char UnknownData_4C_1 : 7; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct CinematicCamera.CameraFocusSettings
// Size: 0x58 (Inherited: 0x00)
struct FCameraFocusSettings {
	enum class ECameraFocusMethod FocusMethod; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float ManualFocusDistance; // 0x04(0x04)
	struct FCameraTrackingFocusSettings TrackingFocusSettings; // 0x08(0x38)
	char bDrawDebugFocusPlane : 1; // 0x40(0x01)
	char UnknownData_40_1 : 7; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	struct FColor DebugFocusPlaneColor; // 0x44(0x04)
	char bSmoothFocusChanges : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	float FocusSmoothingInterpSpeed; // 0x4c(0x04)
	float FocusOffset; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// Size: 0x38 (Inherited: 0x00)
struct FCameraTrackingFocusSettings {
	struct TSoftObjectPtr<struct AActor> ActorToTrack; // 0x00(0x28)
	struct FVector RelativeOffset; // 0x28(0x0c)
	char bDrawDebugTrackingFocusPoint : 1; // 0x34(0x01)
	char UnknownData_34_1 : 7; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
};

// ScriptStruct CinematicCamera.NamedLensPreset
// Size: 0x28 (Inherited: 0x00)
struct FNamedLensPreset {
	struct FString Name; // 0x00(0x10)
	struct FCameraLensSettings LensSettings; // 0x10(0x18)
};

// ScriptStruct CinematicCamera.CameraLensSettings
// Size: 0x18 (Inherited: 0x00)
struct FCameraLensSettings {
	float MinFocalLength; // 0x00(0x04)
	float MaxFocalLength; // 0x04(0x04)
	float MinFStop; // 0x08(0x04)
	float MaxFStop; // 0x0c(0x04)
	float MinimumFocusDistance; // 0x10(0x04)
	int32_t DiaphragmBladeCount; // 0x14(0x04)
};

// ScriptStruct CinematicCamera.NamedFilmbackPreset
// Size: 0x20 (Inherited: 0x00)
struct FNamedFilmbackPreset {
	struct FString Name; // 0x00(0x10)
	struct FCameraFilmbackSettings FilmbackSettings; // 0x10(0x0c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// Size: 0x0c (Inherited: 0x00)
struct FCameraFilmbackSettings {
	float SensorWidth; // 0x00(0x04)
	float SensorHeight; // 0x04(0x04)
	float SensorAspectRatio; // 0x08(0x04)
};

