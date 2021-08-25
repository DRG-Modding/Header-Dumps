// BlueprintGeneratedClass BP_TruckerBalls.BP_TruckerBalls_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_TruckerBalls_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* SK_Dice; // 0x228(0x08)
	struct UInstantUsable* InstantUsable; // 0x230(0x08)
	struct UCapsuleComponent* Capsule; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void ReceiveBeginPlay(); // Function BP_TruckerBalls.BP_TruckerBalls_C.ReceiveBeginPlay
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_TruckerBalls.BP_TruckerBalls_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void CustomEvent_1(); // Function BP_TruckerBalls.BP_TruckerBalls_C.CustomEvent_1
	void ExecuteUbergraph_BP_TruckerBalls(int32_t EntryPoint); // Function BP_TruckerBalls.BP_TruckerBalls_C.ExecuteUbergraph_BP_TruckerBalls
};

