// BlueprintGeneratedClass BP_CheatConsole.BP_CheatConsole_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_CheatConsole_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UTextRenderComponent* TextRender; // 0x228(0x08)
	UWidgetComponent* Widget; // 0x230(0x08)
	UStaticMeshComponent* StaticMesh1; // 0x238(0x08)
	UBoxComponent* Box; // 0x240(0x08)
	UInstantUsable* InstantUsable; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)

	void ReceiveBeginPlay();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void ExecuteUbergraph_BP_CheatConsole(int32_t EntryPoint);
};

