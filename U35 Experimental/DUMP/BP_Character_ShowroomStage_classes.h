// BlueprintGeneratedClass BP_Character_ShowroomStage.BP_Character_ShowroomStage_C
// Size: 0x2a8 (Inherited: 0x268)
struct ABP_Character_ShowroomStage_C : AShowroomStage {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	UShowroomSceneCaptureComponent* Capture_SeasonsMenu; // 0x270(0x08)
	UShowroomSceneCaptureComponent* Capture_EscapeMenu; // 0x278(0x08)
	USpotLightComponent* SpotLight2; // 0x280(0x08)
	UCameraComponent* Camera; // 0x288(0x08)
	USpotLightComponent* SpotLight; // 0x290(0x08)
	USpotLightComponent* SpotLight1; // 0x298(0x08)
	USkeletalMeshComponent* PreviewMesh; // 0x2a0(0x08)

	void UpdateActorsToHide();
	UTextureRenderTarget2D* CreateRenderTarget();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Character_ShowroomStage(int32_t EntryPoint);
};

