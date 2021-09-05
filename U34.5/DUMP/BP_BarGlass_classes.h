// BlueprintGeneratedClass BP_BarGlass.BP_BarGlass_C
// Size: 0x254 (Inherited: 0x228)
struct ABP_BarGlass_C : ADrinkableActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	UInstantUsable* InstantUsable; // 0x230(0x08)
	UBoxComponent* Box; // 0x238(0x08)
	USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	FVector StartLocation; // 0x248(0x0c)

	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void OnRep_DrinkableData();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BarGlass(int32_t EntryPoint);
};

