// BlueprintGeneratedClass BP_CheatConsole.BP_CheatConsole_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_CheatConsole_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UTextRenderComponent* TextRender; // 0x228(0x08)
	struct UWidgetComponent* Widget; // 0x230(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x238(0x08)
	struct UBoxComponent* Box; // 0x240(0x08)
	struct UInstantUsable* InstantUsable; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)

	void ReceiveBeginPlay(); // Function BP_CheatConsole.BP_CheatConsole_C.ReceiveBeginPlay
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_CheatConsole.BP_CheatConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void ExecuteUbergraph_BP_CheatConsole(int32_t EntryPoint); // Function BP_CheatConsole.BP_CheatConsole_C.ExecuteUbergraph_BP_CheatConsole
};

