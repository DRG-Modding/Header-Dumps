// BlueprintGeneratedClass BP_FSDCameraManager.BP_FSDCameraManager_C
// Size: 0x278c (Inherited: 0x2740)
struct ABP_FSDCameraManager_C : AFSDPlayerCameraManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2740(0x08)
	struct UStaticMeshComponent* PhysicalSphere; // 0x2748(0x08)
	bool SessionStarted; // 0x2750(0x01)
	char UnknownData_2751[0x3]; // 0x2751(0x03)
	float MaxDistance; // 0x2754(0x04)
	struct FMulticastInlineDelegate HideHUDForPhotography; // 0x2758(0x10)
	struct FMulticastInlineDelegate ShowHUDForPhotography; // 0x2768(0x10)
	bool UserVisibility; // 0x2778(0x01)
	enum class ECharacterCameraMode PreviousCameraMode; // 0x2779(0x01)
	bool PauseGame; // 0x277a(0x01)
	char UnknownData_277B[0x1]; // 0x277b(0x01)
	float SphereReturnVelocity; // 0x277c(0x04)
	float MaxDistanceTolerance; // 0x2780(0x04)
	bool KeyDebug; // 0x2784(0x01)
	char UnknownData_2785[0x3]; // 0x2785(0x03)
	float MaxSpeed; // 0x2788(0x04)

	void ChangeMaxDistance(float MaxDistance); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeMaxDistance
	void ChangeSpeed(float MaxSpeed); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeSpeed
	float SmoothReturnVelocity(struct FVector New Camera Location); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.SmoothReturnVelocity
	void SphereDirectionToPlayer(struct FVector Direction); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.SphereDirectionToPlayer
	void SetToThirdPersonCamera(struct FVector New Camera Position); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.SetToThirdPersonCamera
	void ReturnCameraMode(struct APlayerCharacter* Target, enum class ECharacterCameraMode NewCameraMode); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReturnCameraMode
	void PhotographyCameraModify(struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector ResultCameraLocation); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.PhotographyCameraModify
	void ReceiveDestroyed(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveDestroyed
	void OnPhotographySessionEnd(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionEnd
	void OnPhotographySessionStart(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionStart
	void TogglePhotographyMode(bool Active); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.TogglePhotographyMode
	void Return Camera(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.Return Camera
	void ReceiveTick(float DeltaSeconds); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveTick
	void LoaderStart(struct ULevelSequence* LoaderLevelSequence); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStart
	void ReceiveBeginPlay(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveBeginPlay
	void LoaderStop(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStop
	void ExecuteUbergraph_BP_FSDCameraManager(int32_t EntryPoint); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ExecuteUbergraph_BP_FSDCameraManager
	void ShowHUDForPhotography__DelegateSignature(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.ShowHUDForPhotography__DelegateSignature
	void HideHUDForPhotography__DelegateSignature(); // Function BP_FSDCameraManager.BP_FSDCameraManager_C.HideHUDForPhotography__DelegateSignature
};

