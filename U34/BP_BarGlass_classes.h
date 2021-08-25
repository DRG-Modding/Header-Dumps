// BlueprintGeneratedClass BP_BarGlass.BP_BarGlass_C
// Size: 0x254 (Inherited: 0x228)
struct ABP_BarGlass_C : ADrinkableActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UInstantUsable* InstantUsable; // 0x230(0x08)
	struct UBoxComponent* Box; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct FVector StartLocation; // 0x248(0x0c)

	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_BarGlass.BP_BarGlass_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void OnRep_DrinkableData(); // Function BP_BarGlass.BP_BarGlass_C.OnRep_DrinkableData
	void ReceiveBeginPlay(); // Function BP_BarGlass.BP_BarGlass_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_BarGlass(int32_t EntryPoint); // Function BP_BarGlass.BP_BarGlass_C.ExecuteUbergraph_BP_BarGlass
};

