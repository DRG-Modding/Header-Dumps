// BlueprintGeneratedClass BP_CraftingConsole.BP_CraftingConsole_C
// Size: 0x2d0 (Inherited: 0x220)
struct ABP_CraftingConsole_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USpotLightComponent* SpotLight2; // 0x228(0x08)
	struct UPointLightComponent* PointLight4; // 0x230(0x08)
	struct UPointLightComponent* PointLight3; // 0x238(0x08)
	struct UPointLightComponent* PointLight2; // 0x240(0x08)
	struct UPointLightComponent* PointLight1; // 0x248(0x08)
	struct USpotLightComponent* SpotLight1; // 0x250(0x08)
	struct UStaticMeshComponent* LightCone2; // 0x258(0x08)
	struct USpotLightComponent* SpotLight; // 0x260(0x08)
	struct UStaticMeshComponent* LightCone1; // 0x268(0x08)
	struct UWidgetComponent* Widget; // 0x270(0x08)
	struct UWidgetComponent* Widget2; // 0x278(0x08)
	struct UWidgetComponent* Widget1; // 0x280(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x288(0x08)
	struct UTextRenderComponent* TextRender; // 0x290(0x08)
	struct UBoxComponent* Box; // 0x298(0x08)
	struct UInstantUsable* InstantUsable; // 0x2a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	float Timeline_0_NewTrack_0_26FA2F8A445C2278C5D1B8901F1A6686; // 0x2b0(0x04)
	char Timeline_0__Direction_26FA2F8A445C2278C5D1B8901F1A6686; // 0x2b4(0x01)
	char UnknownData_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2b8(0x08)
	struct TArray<struct ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed; // 0x2c0(0x10)

	void IsNewPlayer(struct ABP_PlayerController_SpaceRig_C* PlayerController, bool IsNewPlayer); // Function BP_CraftingConsole.BP_CraftingConsole_C.IsNewPlayer
	void Timeline_0__FinishedFunc(); // Function BP_CraftingConsole.BP_CraftingConsole_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_CraftingConsole.BP_CraftingConsole_C.Timeline_0__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_CraftingConsole.BP_CraftingConsole_C.ReceiveBeginPlay
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_CraftingConsole.BP_CraftingConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void ExecuteUbergraph_BP_CraftingConsole(int32_t EntryPoint); // Function BP_CraftingConsole.BP_CraftingConsole_C.ExecuteUbergraph_BP_CraftingConsole
};

