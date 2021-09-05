// BlueprintGeneratedClass BP_CraftingConsole.BP_CraftingConsole_C
// Size: 0x2d0 (Inherited: 0x220)
struct ABP_CraftingConsole_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USpotLightComponent* SpotLight2; // 0x228(0x08)
	UPointLightComponent* PointLight4; // 0x230(0x08)
	UPointLightComponent* PointLight3; // 0x238(0x08)
	UPointLightComponent* PointLight2; // 0x240(0x08)
	UPointLightComponent* PointLight1; // 0x248(0x08)
	USpotLightComponent* SpotLight1; // 0x250(0x08)
	UStaticMeshComponent* LightCone2; // 0x258(0x08)
	USpotLightComponent* SpotLight; // 0x260(0x08)
	UStaticMeshComponent* LightCone1; // 0x268(0x08)
	UWidgetComponent* Widget; // 0x270(0x08)
	UWidgetComponent* Widget2; // 0x278(0x08)
	UWidgetComponent* Widget1; // 0x280(0x08)
	UStaticMeshComponent* StaticMesh; // 0x288(0x08)
	UTextRenderComponent* TextRender; // 0x290(0x08)
	UBoxComponent* Box; // 0x298(0x08)
	UInstantUsable* InstantUsable; // 0x2a0(0x08)
	USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	float Timeline_0_NewTrack_0_26FA2F8A445C2278C5D1B8901F1A6686; // 0x2b0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_26FA2F8A445C2278C5D1B8901F1A6686; // 0x2b4(0x01)
	UTimelineComponent* Timeline_1; // 0x2b8(0x08)
	TArray<ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed; // 0x2c0(0x10)

	void IsNewPlayer(ABP_PlayerController_SpaceRig_C* PlayerController, bool IsNewPlayer);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void ExecuteUbergraph_BP_CraftingConsole(int32_t EntryPoint);
};

