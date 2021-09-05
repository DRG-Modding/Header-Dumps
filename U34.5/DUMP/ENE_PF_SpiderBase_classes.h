// BlueprintGeneratedClass ENE_PF_SpiderBase.ENE_PF_SpiderBase_C
// Size: 0x450 (Inherited: 0x3e0)
struct AENE_PF_SpiderBase_C : ASpiderEnemy {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	UPawnAlertComponent* PawnAlert; // 0x3e8(0x08)
	UPathfinderReactiveTerrainTrackerComponent* PathfinderReactiveTerrainTracker; // 0x3f0(0x08)
	UOutlineComponent* outline; // 0x3f8(0x08)
	UEnemyComponent* enemy; // 0x400(0x08)
	UPawnSensingComponent* PawnSensing; // 0x408(0x08)
	UParticleSystem* Death Particles; // 0x410(0x08)
	USoundCue* Death Sound; // 0x418(0x08)
	float DeathDuration; // 0x420(0x04)
	float AlertOthersRadius; // 0x424(0x04)
	float MeshScale; // 0x428(0x04)
	UAnimMontage* SpawnMontage; // 0x430(0x08)
	float DecalSize; // 0x438(0x04)
	USoundCue* FleeSound; // 0x440(0x08)
	USoundBase* AlertedScream; // 0x448(0x08)

	void EndSpecialAttack();
	void BeginSpecialAttack(int32_t SpecialAttackIndex, UAnimMontage* Montage);
	void ChangeVisibility(bool bNewVisibility);
	void ActivateSpider(AActor* Target);
	void InitBlackboard();
	void PlayDeathEffects();
	void OnNotifyEnd_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
	void OnNotifyBegin_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
	void OnInterrupted_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
	void OnBlendOut_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
	void OnCompleted_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
	void ReceiveBeginPlay();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnDeathBase();
	void Spawn();
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void OnStartedFleeing();
	void PlayFleeSound();
	void All_PlayAlertScream();
	void Receive_Alerted();
	void CancelSpecialAttack();
	void StopMontagesOnDeath();
	void ExecuteUbergraph_ENE_PF_SpiderBase(int32_t EntryPoint);
};

