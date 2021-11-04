// BlueprintGeneratedClass BP_MissionStats.BP_MissionStats_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_MissionStats_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Cube1; // 0x228(0x08)
	UBoxComponent* Box; // 0x230(0x08)
	UInstantUsable* InstantUsable; // 0x238(0x08)
	UWidgetComponent* Widget; // 0x240(0x08)
	USceneComponent* DefaultSceneRoot; // 0x248(0x08)

	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void ExecuteUbergraph_BP_MissionStats(int32_t EntryPoint);
};

