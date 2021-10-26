// BlueprintGeneratedClass ENE_PF_SpiderBase.ENE_PF_SpiderBase_C
// Size: 0x450 (Inherited: 0x3e0)
struct AENE_PF_SpiderBase_C : ASpiderEnemy {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPawnAlertComponent* PawnAlert; 
	UPROPERTY(BlueprintReadWrite) UPathfinderReactiveTerrainTrackerComponent* PathfinderReactiveTerrainTracker; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) UPawnSensingComponent* PawnSensing; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* Death Particles; 
	UPROPERTY(BlueprintReadWrite) USoundCue* Death Sound; 
	UPROPERTY(BlueprintReadWrite) float DeathDuration; 
	UPROPERTY(BlueprintReadWrite) float AlertOthersRadius; 
	UPROPERTY(BlueprintReadWrite) float MeshScale; 
	UPROPERTY(BlueprintReadWrite) UAnimMontage* SpawnMontage; 
	UPROPERTY(BlueprintReadWrite) float DecalSize; 
	UPROPERTY(BlueprintReadWrite) USoundCue* FleeSound; 
	UPROPERTY(BlueprintReadWrite) USoundBase* AlertedScream; 

	UFUNCTION(BlueprintCallable) void EndSpecialAttack();
	UFUNCTION(BlueprintCallable) void BeginSpecialAttack(int32_t SpecialAttackIndex, UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable) void ChangeVisibility(bool bNewVisibility);
	UFUNCTION(BlueprintCallable) void ActivateSpider(AActor* Target);
	UFUNCTION(BlueprintCallable) void InitBlackboard();
	UFUNCTION(BlueprintCallable) void PlayDeathEffects();
	UFUNCTION(BlueprintCallable) void OnNotifyEnd_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
	UFUNCTION(BlueprintCallable) void OnNotifyBegin_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
	UFUNCTION(BlueprintCallable) void OnInterrupted_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
	UFUNCTION(BlueprintCallable) void OnBlendOut_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
	UFUNCTION(BlueprintCallable) void OnCompleted_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnDeathBase();
	UFUNCTION(BlueprintCallable) void Spawn();
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void OnStartedFleeing();
	UFUNCTION(BlueprintCallable) void PlayFleeSound();
	UFUNCTION(BlueprintCallable) void All_PlayAlertScream();
	UFUNCTION(BlueprintCallable) void Receive_Alerted();
	UFUNCTION(BlueprintCallable) void CancelSpecialAttack();
	UFUNCTION(BlueprintCallable) void StopMontagesOnDeath();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_PF_SpiderBase(int32_t EntryPoint);
};

