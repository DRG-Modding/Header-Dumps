// BlueprintGeneratedClass BP_ChangeCharacterConsole.BP_ChangeCharacterConsole_C
// Size: 0x290 (Inherited: 0x220)
struct ABP_ChangeCharacterConsole_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* SM_Greepling_008; // 0x228(0x08)
	struct UStaticMeshComponent* SM_Greepling_007; // 0x230(0x08)
	struct UStaticMeshComponent* SM_Greepling_006; // 0x238(0x08)
	struct UStaticMeshComponent* SM_Greepling_005; // 0x240(0x08)
	struct UStaticMeshComponent* SM_Greepling_003; // 0x248(0x08)
	struct UStaticMeshComponent* SM_Greepling_004; // 0x250(0x08)
	struct UWidgetComponent* Widget; // 0x258(0x08)
	struct UTextRenderComponent* TextRender; // 0x260(0x08)
	struct UBoxComponent* Box; // 0x268(0x08)
	struct UInstantUsable* InstantUsable; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	struct TArray<struct ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed; // 0x280(0x10)

	void IsNewPlayer(struct ABP_PlayerController_SpaceRig_C* PlayerController, bool IsNewPlayer); // Function BP_ChangeCharacterConsole.BP_ChangeCharacterConsole_C.IsNewPlayer
	void ReceiveBeginPlay(); // Function BP_ChangeCharacterConsole.BP_ChangeCharacterConsole_C.ReceiveBeginPlay
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_ChangeCharacterConsole.BP_ChangeCharacterConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void OnLastWindowClosed_Event_1(); // Function BP_ChangeCharacterConsole.BP_ChangeCharacterConsole_C.OnLastWindowClosed_Event_1
	void ExecuteUbergraph_BP_ChangeCharacterConsole(int32_t EntryPoint); // Function BP_ChangeCharacterConsole.BP_ChangeCharacterConsole_C.ExecuteUbergraph_BP_ChangeCharacterConsole
};

