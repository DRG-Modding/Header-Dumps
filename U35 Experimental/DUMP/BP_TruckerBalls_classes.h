// BlueprintGeneratedClass BP_TruckerBalls.BP_TruckerBalls_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_TruckerBalls_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USkeletalMeshComponent* SK_Dice; // 0x228(0x08)
	UInstantUsable* InstantUsable; // 0x230(0x08)
	UCapsuleComponent* Capsule; // 0x238(0x08)
	USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void ReceiveBeginPlay();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void CustomEvent_1();
	void ExecuteUbergraph_BP_TruckerBalls(int32_t EntryPoint);
};

