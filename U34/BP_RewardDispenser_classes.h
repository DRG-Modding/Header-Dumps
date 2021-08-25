// BlueprintGeneratedClass BP_RewardDispenser.BP_RewardDispenser_C
// Size: 0x2b8 (Inherited: 0x260)
struct ABP_RewardDispenser_C : AEventRewardDispenser {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBP_RewardUsableComponent_C* BP_RewardUsableComponent; // 0x268(0x08)
	struct UChildActorComponent* RewardSelectorActor; // 0x270(0x08)
	struct UBoxComponent* PlayerTrigger; // 0x278(0x08)
	struct USphereComponent* UsableCollision; // 0x280(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	bool RewardSelectorVisible; // 0x298(0x01)
	char UnknownData_299[0x7]; // 0x299(0x07)
	struct APlayerCharacter* NearbyPlayer; // 0x2a0(0x08)
	struct FMulticastInlineDelegate OnDispenserFinished; // 0x2a8(0x10)

	bool IsStateValid(); // Function BP_RewardDispenser.BP_RewardDispenser_C.IsStateValid
	void GetRewardSelector(struct ABP_CoreInfuser_Rewards_Selector_C* Selector); // Function BP_RewardDispenser.BP_RewardDispenser_C.GetRewardSelector
	void IsPlayerLocallyControlled(bool LocallyControlled); // Function BP_RewardDispenser.BP_RewardDispenser_C.IsPlayerLocallyControlled
	void ToggleRewardSelector(bool InVisible); // Function BP_RewardDispenser.BP_RewardDispenser_C.ToggleRewardSelector
	void OnOwnerAssigned(); // Function BP_RewardDispenser.BP_RewardDispenser_C.OnOwnerAssigned
	void OnPoweredUp(); // Function BP_RewardDispenser.BP_RewardDispenser_C.OnPoweredUp
	void BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_RewardDispenser.BP_RewardDispenser_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_RewardDispenser.BP_RewardDispenser_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__BP_RewardUsableComponent_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_RewardDispenser.BP_RewardDispenser_C.BndEvt__BP_RewardUsableComponent_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void Initialize(); // Function BP_RewardDispenser.BP_RewardDispenser_C.Initialize
	void OnOpenDispenser(); // Function BP_RewardDispenser.BP_RewardDispenser_C.OnOpenDispenser
	void On Selector Finished(struct USchematic* SchematicReward); // Function BP_RewardDispenser.BP_RewardDispenser_C.On Selector Finished
	void OnRewardSelected(); // Function BP_RewardDispenser.BP_RewardDispenser_C.OnRewardSelected
	void Turn On Buttons(); // Function BP_RewardDispenser.BP_RewardDispenser_C.Turn On Buttons
	void ExecuteUbergraph_BP_RewardDispenser(int32_t EntryPoint); // Function BP_RewardDispenser.BP_RewardDispenser_C.ExecuteUbergraph_BP_RewardDispenser
	void OnDispenserFinished__DelegateSignature(); // Function BP_RewardDispenser.BP_RewardDispenser_C.OnDispenserFinished__DelegateSignature
};

