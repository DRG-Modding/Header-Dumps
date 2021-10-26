// BlueprintGeneratedClass BP_DropPod_Landing.BP_DropPod_Landing_C
// Size: 0x880 (Inherited: 0x83a)
struct ABP_DropPod_Landing_C : ABP_DropPod_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* BoscoSpawningPoint; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio_1; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem_DroppodDoorRocks; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* LeaveDropShipTrigger; 
	UPROPERTY(BlueprintReadWrite) bool SkipSequence; 
	UPROPERTY(BlueprintReadWrite) TArray<UAudioComponent*> AudioArray; 

	UFUNCTION(BlueprintCallable) void AttachCharacter(APlayerCharacter* PlayerCharacter);
	UFUNCTION(BlueprintCallable) bool IsOwnedPlayerStart(APlayerController* Controller, UChildActorComponent* Component);
	UFUNCTION(BlueprintCallable) void FindSpawnPoint(APlayerController* Controller, UChildActorComponent* Start);
	UFUNCTION(BlueprintCallable) void DetachAll();
	UFUNCTION(BlueprintCallable) void SpawnAndStoreAudio(USoundBase* Sound, USceneComponent* AttachToComponent, UAudioComponent* AudioComponent);
	UFUNCTION(BlueprintCallable) void OnAllPlayersLeftPod();
	UFUNCTION(BlueprintCallable) void OnDroppodImpact();
	UFUNCTION(BlueprintCallable) void OnDrillingStarted();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__LeaveDropShipTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__LeaveDropShipTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void OnDeparting();
	UFUNCTION(BlueprintCallable) void OnCharacterEnter(APlayerCharacter* Character);
	UFUNCTION(BlueprintCallable) void OnCharacterExit(APlayerCharacter* Character);
	UFUNCTION(BlueprintCallable) void OnPlayerCharacterRegistered(APlayerCharacter* PlayerCharacter);
	UFUNCTION(BlueprintCallable) void StopListeningToNewPlayers();
	UFUNCTION(BlueprintCallable) void OnFirstPlayerLeftPod();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_DropPod_Landing(int32_t EntryPoint);
};

