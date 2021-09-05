// BlueprintGeneratedClass BP_ChangeCharacterConsole.BP_ChangeCharacterConsole_C
// Size: 0x290 (Inherited: 0x220)
struct ABP_ChangeCharacterConsole_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* SM_Greepling_008; // 0x228(0x08)
	UStaticMeshComponent* SM_Greepling_007; // 0x230(0x08)
	UStaticMeshComponent* SM_Greepling_006; // 0x238(0x08)
	UStaticMeshComponent* SM_Greepling_005; // 0x240(0x08)
	UStaticMeshComponent* SM_Greepling_003; // 0x248(0x08)
	UStaticMeshComponent* SM_Greepling_004; // 0x250(0x08)
	UWidgetComponent* Widget; // 0x258(0x08)
	UTextRenderComponent* TextRender; // 0x260(0x08)
	UBoxComponent* Box; // 0x268(0x08)
	UInstantUsable* InstantUsable; // 0x270(0x08)
	USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	TArray<ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed; // 0x280(0x10)

	void IsNewPlayer(ABP_PlayerController_SpaceRig_C* PlayerController, bool IsNewPlayer);
	void ReceiveBeginPlay();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void OnLastWindowClosed_Event_1();
	void ExecuteUbergraph_BP_ChangeCharacterConsole(int32_t EntryPoint);
};

