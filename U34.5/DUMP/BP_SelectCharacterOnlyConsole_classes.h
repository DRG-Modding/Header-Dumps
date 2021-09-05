// BlueprintGeneratedClass BP_SelectCharacterOnlyConsole.BP_SelectCharacterOnlyConsole_C
// Size: 0x268 (Inherited: 0x220)
struct ABP_SelectCharacterOnlyConsole_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* StaticMesh2; // 0x228(0x08)
	UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	UBoxComponent* Box; // 0x238(0x08)
	UTextRenderComponent* TextRender; // 0x240(0x08)
	UWidgetComponent* Widget; // 0x248(0x08)
	UStaticMeshComponent* StaticMesh1; // 0x250(0x08)
	UInstantUsable* InstantUsable; // 0x258(0x08)
	USceneComponent* DefaultSceneRoot; // 0x260(0x08)

	void ReceiveBeginPlay();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void ExecuteUbergraph_BP_SelectCharacterOnlyConsole(int32_t EntryPoint);
};

