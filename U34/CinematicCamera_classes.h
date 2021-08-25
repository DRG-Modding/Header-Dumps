// Class CinematicCamera.CameraRig_Crane
// Size: 0x250 (Inherited: 0x220)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x220(0x04)
	float CraneYaw; // 0x224(0x04)
	float CraneArmLength; // 0x228(0x04)
	bool bLockMountPitch; // 0x22c(0x01)
	bool bLockMountYaw; // 0x22d(0x01)
	char UnknownData_22E[0x2]; // 0x22e(0x02)
	struct USceneComponent* TransformComponent; // 0x230(0x08)
	struct USceneComponent* CraneYawControl; // 0x238(0x08)
	struct USceneComponent* CranePitchControl; // 0x240(0x08)
	struct USceneComponent* CraneCameraMount; // 0x248(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x240 (Inherited: 0x220)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x220(0x04)
	bool bLockOrientationToRail; // 0x224(0x01)
	char UnknownData_225[0x3]; // 0x225(0x03)
	struct USceneComponent* TransformComponent; // 0x228(0x08)
	struct USplineComponent* RailSplineComponent; // 0x230(0x08)
	struct USceneComponent* RailCameraMount; // 0x238(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
};

// Class CinematicCamera.CineCameraActor
// Size: 0x7f0 (Inherited: 0x790)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x790(0x50)
	char UnknownData_7E0[0x10]; // 0x7e0(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent
};

// Class CinematicCamera.CineCameraComponent
// Size: 0x8b0 (Inherited: 0x7b0)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x7b0(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0x7bc(0x0c)
	struct FCameraLensSettings LensSettings; // 0x7c8(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x7e0(0x58)
	float CurrentFocalLength; // 0x838(0x04)
	float CurrentAperture; // 0x83c(0x04)
	float CurrentFocusDistance; // 0x840(0x04)
	char UnknownData_844[0xc]; // 0x844(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x850(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x860(0x10)
	struct FString DefaultFilmbackPresetName; // 0x870(0x10)
	struct FString DefaultFilmbackPreset; // 0x880(0x10)
	struct FString DefaultLensPresetName; // 0x890(0x10)
	float DefaultLensFocalLength; // 0x8a0(0x04)
	float DefaultLensFStop; // 0x8a4(0x04)
	char UnknownData_8A8[0x8]; // 0x8a8(0x08)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
};

