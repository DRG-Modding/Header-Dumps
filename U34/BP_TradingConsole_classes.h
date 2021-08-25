// BlueprintGeneratedClass BP_TradingConsole.BP_TradingConsole_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_TradingConsole_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* Box1; // 0x228(0x08)
	struct UWidgetComponent* Widget_Second; // 0x230(0x08)
	struct UTextRenderComponent* TextRender; // 0x238(0x08)
	struct UWidgetComponent* Widget_Main; // 0x240(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x248(0x08)
	struct UBoxComponent* Box; // 0x250(0x08)
	struct UInstantUsable* InstantUsable; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct TArray<struct ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed; // 0x268(0x10)

	void IsNewPlayer(struct ABP_PlayerController_SpaceRig_C* PlayerController, bool IsNewPlayer); // Function BP_TradingConsole.BP_TradingConsole_C.IsNewPlayer
	void ReceiveBeginPlay(); // Function BP_TradingConsole.BP_TradingConsole_C.ReceiveBeginPlay
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_TradingConsole.BP_TradingConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void ExecuteUbergraph_BP_TradingConsole(int32_t EntryPoint); // Function BP_TradingConsole.BP_TradingConsole_C.ExecuteUbergraph_BP_TradingConsole
};

