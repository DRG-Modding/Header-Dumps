// Class CinematicCamera.CameraRig_Crane
// Size: 0x250 (Inherited: 0x220)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x220(0x04)
	float CraneYaw; // 0x224(0x04)
	float CraneArmLength; // 0x228(0x04)
	bool bLockMountPitch; // 0x22c(0x01)
	bool bLockMountYaw; // 0x22d(0x01)
	USceneComponent* TransformComponent; // 0x230(0x08)
	USceneComponent* CraneYawControl; // 0x238(0x08)
	USceneComponent* CranePitchControl; // 0x240(0x08)
	USceneComponent* CraneCameraMount; // 0x248(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x240 (Inherited: 0x220)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x220(0x04)
	bool bLockOrientationToRail; // 0x224(0x01)
	USceneComponent* TransformComponent; // 0x228(0x08)
	USplineComponent* RailSplineComponent; // 0x230(0x08)
	USceneComponent* RailCameraMount; // 0x238(0x08)

	USplineComponent* GetRailSplineComponent();
};

// Class CinematicCamera.CineCameraActor
// Size: 0x7f0 (Inherited: 0x790)
struct ACineCameraActor : ACameraActor {
	FCameraLookatTrackingSettings LookatTrackingSettings; // 0x790(0x50)

	UCineCameraComponent* GetCineCameraComponent();
};

// Class CinematicCamera.CineCameraComponent
// Size: 0x8b0 (Inherited: 0x7b0)
struct UCineCameraComponent : UCameraComponent {
	FCameraFilmbackSettings FilmbackSettings; // 0x7b0(0x0c)
	FCameraFilmbackSettings Filmback; // 0x7bc(0x0c)
	FCameraLensSettings LensSettings; // 0x7c8(0x18)
	FCameraFocusSettings FocusSettings; // 0x7e0(0x58)
	float CurrentFocalLength; // 0x838(0x04)
	float CurrentAperture; // 0x83c(0x04)
	float CurrentFocusDistance; // 0x840(0x04)
	TArray<FNamedFilmbackPreset> FilmbackPresets; // 0x850(0x10)
	TArray<FNamedLensPreset> LensPresets; // 0x860(0x10)
	FString DefaultFilmbackPresetName; // 0x870(0x10)
	FString DefaultFilmbackPreset; // 0x880(0x10)
	FString DefaultLensPresetName; // 0x890(0x10)
	float DefaultLensFocalLength; // 0x8a0(0x04)
	float DefaultLensFStop; // 0x8a4(0x04)

	void SetLensPresetByName(FString InPresetName);
	void SetFilmbackPresetByName(FString InPresetName);
	void SetCurrentFocalLength(float InFocalLength);
	float GetVerticalFieldOfView();
	TArray<FNamedLensPreset> GetLensPresetsCopy();
	FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	FString GetFilmbackPresetName();
	FString GetDefaultFilmbackPresetName();
};

