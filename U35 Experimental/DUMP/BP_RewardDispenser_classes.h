// BlueprintGeneratedClass BP_RewardDispenser.BP_RewardDispenser_C
// Size: 0x2b8 (Inherited: 0x260)
struct ABP_RewardDispenser_C : AEventRewardDispenser {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBP_RewardUsableComponent_C* BP_RewardUsableComponent; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* RewardSelectorActor; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* PlayerTrigger; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* UsableCollision; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) bool RewardSelectorVisible; 
	UPROPERTY(BlueprintReadWrite) APlayerCharacter* NearbyPlayer; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnDispenserFinished; 

	UFUNCTION(BlueprintCallable) bool IsStateValid();
	UFUNCTION(BlueprintCallable) void GetRewardSelector(ABP_CoreInfuser_Rewards_Selector_C* Selector);
	UFUNCTION(BlueprintCallable) void IsPlayerLocallyControlled(bool LocallyControlled);
	UFUNCTION(BlueprintCallable) void ToggleRewardSelector(bool InVisible);
	UFUNCTION(BlueprintCallable) void OnOwnerAssigned();
	UFUNCTION(BlueprintCallable) void OnPoweredUp();
	UFUNCTION(BlueprintCallable) void BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void BndEvt__BP_RewardUsableComponent_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void Initialize();
	UFUNCTION(BlueprintCallable) void OnOpenDispenser();
	UFUNCTION(BlueprintCallable) void On Selector Finished(USchematic* SchematicReward);
	UFUNCTION(BlueprintCallable) void OnRewardSelected();
	UFUNCTION(BlueprintCallable) void Turn On Buttons();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_RewardDispenser(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnDispenserFinished__DelegateSignature();
};

