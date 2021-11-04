// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8 {
	DoNotOverride = 0,
	Manual = 1,
	Tracking = 2,
	Disable = 3,
	MAX = 4
};

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// Size: 0x50 (Inherited: 0x00)
struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x00(0x01)
	char bDrawDebugLookAtTrackingPosition : 1; // 0x00(0x01)
	float LookAtTrackingInterpSpeed; // 0x04(0x04)
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18(0x28)
	FVector RelativeOffset; // 0x40(0x0c)
	char bAllowRoll : 1; // 0x4c(0x01)
};

// ScriptStruct CinematicCamera.CameraFocusSettings
// Size: 0x58 (Inherited: 0x00)
struct FCameraFocusSettings {
	enum class ECameraFocusMethod FocusMethod; // 0x00(0x01)
	float ManualFocusDistance; // 0x04(0x04)
	FCameraTrackingFocusSettings TrackingFocusSettings; // 0x08(0x38)
	char bDrawDebugFocusPlane : 1; // 0x40(0x01)
	FColor DebugFocusPlaneColor; // 0x44(0x04)
	char bSmoothFocusChanges : 1; // 0x48(0x01)
	float FocusSmoothingInterpSpeed; // 0x4c(0x04)
	float FocusOffset; // 0x50(0x04)
};

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// Size: 0x38 (Inherited: 0x00)
struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x00(0x28)
	FVector RelativeOffset; // 0x28(0x0c)
	char bDrawDebugTrackingFocusPoint : 1; // 0x34(0x01)
};

// ScriptStruct CinematicCamera.NamedLensPreset
// Size: 0x28 (Inherited: 0x00)
struct FNamedLensPreset {
	FString Name; // 0x00(0x10)
	FCameraLensSettings LensSettings; // 0x10(0x18)
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
	FString Name; // 0x00(0x10)
	FCameraFilmbackSettings FilmbackSettings; // 0x10(0x0c)
};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// Size: 0x0c (Inherited: 0x00)
struct FCameraFilmbackSettings {
	float SensorWidth; // 0x00(0x04)
	float SensorHeight; // 0x04(0x04)
	float SensorAspectRatio; // 0x08(0x04)
};

