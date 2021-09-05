// BlueprintGeneratedClass BP_FSDCameraManager.BP_FSDCameraManager_C
// Size: 0x278c (Inherited: 0x2740)
struct ABP_FSDCameraManager_C : AFSDPlayerCameraManager {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2740(0x08)
	UStaticMeshComponent* PhysicalSphere; // 0x2748(0x08)
	bool SessionStarted; // 0x2750(0x01)
	float MaxDistance; // 0x2754(0x04)
	FMulticastInlineDelegate HideHUDForPhotography; // 0x2758(0x10)
	FMulticastInlineDelegate ShowHUDForPhotography; // 0x2768(0x10)
	bool UserVisibility; // 0x2778(0x01)
	enum class ECharacterCameraMode PreviousCameraMode; // 0x2779(0x01)
	bool PauseGame; // 0x277a(0x01)
	float SphereReturnVelocity; // 0x277c(0x04)
	float MaxDistanceTolerance; // 0x2780(0x04)
	bool KeyDebug; // 0x2784(0x01)
	float MaxSpeed; // 0x2788(0x04)

	void ChangeMaxDistance(float MaxDistance);
	void ChangeSpeed(float MaxSpeed);
	float SmoothReturnVelocity(FVector New Camera Location);
	void SphereDirectionToPlayer(FVector Direction);
	void SetToThirdPersonCamera(FVector New Camera Position);
	void ReturnCameraMode(APlayerCharacter* Target, enum class ECharacterCameraMode NewCameraMode);
	void PhotographyCameraModify(FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector ResultCameraLocation);
	void ReceiveDestroyed();
	void OnPhotographySessionEnd();
	void OnPhotographySessionStart();
	void TogglePhotographyMode(bool Active);
	void Return Camera();
	void ReceiveTick(float DeltaSeconds);
	void LoaderStart(ULevelSequence* LoaderLevelSequence);
	void ReceiveBeginPlay();
	void LoaderStop();
	void ExecuteUbergraph_BP_FSDCameraManager(int32_t EntryPoint);
	void ShowHUDForPhotography__DelegateSignature();
	void HideHUDForPhotography__DelegateSignature();
};

