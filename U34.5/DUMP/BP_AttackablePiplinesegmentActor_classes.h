// BlueprintGeneratedClass BP_AttackablePiplinesegmentActor.BP_AttackablePiplinesegmentActor_C
// Size: 0x278 (Inherited: 0x250)
struct ABP_AttackablePiplinesegmentActor_C : ATargetDummyPawn {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UCustomObjectAttackerPositioning* CustomObjectAttackerPositioning; // 0x258(0x08)
	UObjectAttackerPositioning* ObjectAttackerPositioning; // 0x260(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x268(0x08)
	USceneComponent* DefaultSceneRoot; // 0x270(0x08)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AttackablePiplinesegmentActor(int32_t EntryPoint);
};

