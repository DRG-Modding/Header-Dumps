// BlueprintGeneratedClass BP_RewardDispenser.BP_RewardDispenser_C
// Size: 0x2b8 (Inherited: 0x260)
struct ABP_RewardDispenser_C : AEventRewardDispenser {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	UBP_RewardUsableComponent_C* BP_RewardUsableComponent; // 0x268(0x08)
	UChildActorComponent* RewardSelectorActor; // 0x270(0x08)
	UBoxComponent* PlayerTrigger; // 0x278(0x08)
	USphereComponent* UsableCollision; // 0x280(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x288(0x08)
	USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	bool RewardSelectorVisible; // 0x298(0x01)
	APlayerCharacter* NearbyPlayer; // 0x2a0(0x08)
	FMulticastInlineDelegate OnDispenserFinished; // 0x2a8(0x10)

	bool IsStateValid();
	void GetRewardSelector(ABP_CoreInfuser_Rewards_Selector_C* Selector);
	void IsPlayerLocallyControlled(bool LocallyControlled);
	void ToggleRewardSelector(bool InVisible);
	void OnOwnerAssigned();
	void OnPoweredUp();
	void BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void BndEvt__BP_RewardUsableComponent_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void Initialize();
	void OnOpenDispenser();
	void On Selector Finished(USchematic* SchematicReward);
	void OnRewardSelected();
	void Turn On Buttons();
	void ExecuteUbergraph_BP_RewardDispenser(int32_t EntryPoint);
	void OnDispenserFinished__DelegateSignature();
};

