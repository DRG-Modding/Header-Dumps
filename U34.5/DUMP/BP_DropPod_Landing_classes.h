// BlueprintGeneratedClass BP_DropPod_Landing.BP_DropPod_Landing_C
// Size: 0x880 (Inherited: 0x83a)
struct ABP_DropPod_Landing_C : ABP_DropPod_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x840(0x08)
	USceneComponent* BoscoSpawningPoint; // 0x848(0x08)
	UAudioComponent* Audio_1; // 0x850(0x08)
	UParticleSystemComponent* ParticleSystem_DroppodDoorRocks; // 0x858(0x08)
	UBoxComponent* LeaveDropShipTrigger; // 0x860(0x08)
	bool SkipSequence; // 0x868(0x01)
	TArray<UAudioComponent*> AudioArray; // 0x870(0x10)

	void AttachCharacter(APlayerCharacter* PlayerCharacter);
	bool IsOwnedPlayerStart(APlayerController* Controller, UChildActorComponent* Component);
	void FindSpawnPoint(APlayerController* Controller, UChildActorComponent* Start);
	void DetachAll();
	void SpawnAndStoreAudio(USoundBase* Sound, USceneComponent* AttachToComponent, UAudioComponent* AudioComponent);
	void OnAllPlayersLeftPod();
	void OnDroppodImpact();
	void OnDrillingStarted();
	void ReceiveBeginPlay();
	void BndEvt__LeaveDropShipTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__LeaveDropShipTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void OnDeparting();
	void OnCharacterEnter(APlayerCharacter* Character);
	void OnCharacterExit(APlayerCharacter* Character);
	void OnPlayerCharacterRegistered(APlayerCharacter* PlayerCharacter);
	void StopListeningToNewPlayers();
	void OnFirstPlayerLeftPod();
	void ExecuteUbergraph_BP_DropPod_Landing(int32_t EntryPoint);
};

