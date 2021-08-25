// BlueprintGeneratedClass BP_DropPod_Landing.BP_DropPod_Landing_C
// Size: 0x880 (Inherited: 0x83a)
struct ABP_DropPod_Landing_C : ABP_DropPod_Base_C {
	char UnknownData_83A[0x6]; // 0x83a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x840(0x08)
	struct USceneComponent* BoscoSpawningPoint; // 0x848(0x08)
	struct UAudioComponent* Audio_1; // 0x850(0x08)
	struct UParticleSystemComponent* ParticleSystem_DroppodDoorRocks; // 0x858(0x08)
	struct UBoxComponent* LeaveDropShipTrigger; // 0x860(0x08)
	bool SkipSequence; // 0x868(0x01)
	char UnknownData_869[0x7]; // 0x869(0x07)
	struct TArray<struct UAudioComponent*> AudioArray; // 0x870(0x10)

	void AttachCharacter(struct APlayerCharacter* PlayerCharacter); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.AttachCharacter
	bool IsOwnedPlayerStart(struct APlayerController* Controller, struct UChildActorComponent* Component); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.IsOwnedPlayerStart
	void FindSpawnPoint(struct APlayerController* Controller, struct UChildActorComponent* Start); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.FindSpawnPoint
	void DetachAll(); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.DetachAll
	void SpawnAndStoreAudio(struct USoundBase* Sound, struct USceneComponent* AttachToComponent, struct UAudioComponent* AudioComponent); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.SpawnAndStoreAudio
	void OnAllPlayersLeftPod(); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.OnAllPlayersLeftPod
	void OnDroppodImpact(); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.OnDroppodImpact
	void OnDrillingStarted(); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.OnDrillingStarted
	void ReceiveBeginPlay(); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.ReceiveBeginPlay
	void BndEvt__LeaveDropShipTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.BndEvt__LeaveDropShipTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__LeaveDropShipTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.BndEvt__LeaveDropShipTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void OnDeparting(); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.OnDeparting
	void OnCharacterEnter(struct APlayerCharacter* Character); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.OnCharacterEnter
	void OnCharacterExit(struct APlayerCharacter* Character); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.OnCharacterExit
	void OnPlayerCharacterRegistered(struct APlayerCharacter* PlayerCharacter); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.OnPlayerCharacterRegistered
	void StopListeningToNewPlayers(); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.StopListeningToNewPlayers
	void OnFirstPlayerLeftPod(); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.OnFirstPlayerLeftPod
	void ExecuteUbergraph_BP_DropPod_Landing(int32_t EntryPoint); // Function BP_DropPod_Landing.BP_DropPod_Landing_C.ExecuteUbergraph_BP_DropPod_Landing
};

