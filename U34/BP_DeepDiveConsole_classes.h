// BlueprintGeneratedClass BP_DeepDiveConsole.BP_DeepDiveConsole_C
// Size: 0x268 (Inherited: 0x220)
struct ABP_DeepDiveConsole_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* ScreenMesh; // 0x228(0x08)
	struct UTextRenderComponent* WorkName; // 0x230(0x08)
	struct UWidgetComponent* ScreenWidget; // 0x238(0x08)
	struct UBoxComponent* InteractionCollider; // 0x240(0x08)
	struct UInstantUsable* InstantUsable; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct TArray<struct ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed; // 0x258(0x10)

	void IsNewPlayer(struct ABP_PlayerController_SpaceRig_C* PlayerController, bool IsNewPlayer); // Function BP_DeepDiveConsole.BP_DeepDiveConsole_C.IsNewPlayer
	void ReceiveBeginPlay(); // Function BP_DeepDiveConsole.BP_DeepDiveConsole_C.ReceiveBeginPlay
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_DeepDiveConsole.BP_DeepDiveConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void ExecuteUbergraph_BP_DeepDiveConsole(int32_t EntryPoint); // Function BP_DeepDiveConsole.BP_DeepDiveConsole_C.ExecuteUbergraph_BP_DeepDiveConsole
};

