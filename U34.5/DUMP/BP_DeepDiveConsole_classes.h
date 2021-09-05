// BlueprintGeneratedClass BP_DeepDiveConsole.BP_DeepDiveConsole_C
// Size: 0x268 (Inherited: 0x220)
struct ABP_DeepDiveConsole_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* ScreenMesh; // 0x228(0x08)
	UTextRenderComponent* WorkName; // 0x230(0x08)
	UWidgetComponent* ScreenWidget; // 0x238(0x08)
	UBoxComponent* InteractionCollider; // 0x240(0x08)
	UInstantUsable* InstantUsable; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	TArray<ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed; // 0x258(0x10)

	void IsNewPlayer(ABP_PlayerController_SpaceRig_C* PlayerController, bool IsNewPlayer);
	void ReceiveBeginPlay();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void ExecuteUbergraph_BP_DeepDiveConsole(int32_t EntryPoint);
};

