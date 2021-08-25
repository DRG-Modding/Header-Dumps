// BlueprintGeneratedClass ENE_PF_SpiderBase.ENE_PF_SpiderBase_C
// Size: 0x450 (Inherited: 0x3e0)
struct AENE_PF_SpiderBase_C : ASpiderEnemy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UPawnAlertComponent* PawnAlert; // 0x3e8(0x08)
	struct UPathfinderReactiveTerrainTrackerComponent* PathfinderReactiveTerrainTracker; // 0x3f0(0x08)
	struct UOutlineComponent* outline; // 0x3f8(0x08)
	struct UEnemyComponent* enemy; // 0x400(0x08)
	struct UPawnSensingComponent* PawnSensing; // 0x408(0x08)
	struct UParticleSystem* Death Particles; // 0x410(0x08)
	struct USoundCue* Death Sound; // 0x418(0x08)
	float DeathDuration; // 0x420(0x04)
	float AlertOthersRadius; // 0x424(0x04)
	float MeshScale; // 0x428(0x04)
	char UnknownData_42C[0x4]; // 0x42c(0x04)
	struct UAnimMontage* SpawnMontage; // 0x430(0x08)
	float DecalSize; // 0x438(0x04)
	char UnknownData_43C[0x4]; // 0x43c(0x04)
	struct USoundCue* FleeSound; // 0x440(0x08)
	struct USoundBase* AlertedScream; // 0x448(0x08)

	void EndSpecialAttack(); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.EndSpecialAttack
	void BeginSpecialAttack(int32_t SpecialAttackIndex, struct UAnimMontage* Montage); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.BeginSpecialAttack
	void ChangeVisibility(bool bNewVisibility); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.ChangeVisibility
	void ActivateSpider(struct AActor* Target); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.ActivateSpider
	void InitBlackboard(); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.InitBlackboard
	void PlayDeathEffects(); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.PlayDeathEffects
	void OnNotifyEnd_994DB7944B827DB8A3582CB9C470D4B6(struct FName NotifyName); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnNotifyEnd_994DB7944B827DB8A3582CB9C470D4B6
	void OnNotifyBegin_994DB7944B827DB8A3582CB9C470D4B6(struct FName NotifyName); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnNotifyBegin_994DB7944B827DB8A3582CB9C470D4B6
	void OnInterrupted_994DB7944B827DB8A3582CB9C470D4B6(struct FName NotifyName); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnInterrupted_994DB7944B827DB8A3582CB9C470D4B6
	void OnBlendOut_994DB7944B827DB8A3582CB9C470D4B6(struct FName NotifyName); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnBlendOut_994DB7944B827DB8A3582CB9C470D4B6
	void OnCompleted_994DB7944B827DB8A3582CB9C470D4B6(struct FName NotifyName); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnCompleted_994DB7944B827DB8A3582CB9C470D4B6
	void ReceiveBeginPlay(); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.ReceiveBeginPlay
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void OnDeathBase(); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnDeathBase
	void Spawn(); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.Spawn
	void OnFrozen(struct AActor* Source); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnFrozen
	void OnUnFrozen(); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnUnFrozen
	void OnStartedFleeing(); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnStartedFleeing
	void PlayFleeSound(); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.PlayFleeSound
	void All_PlayAlertScream(); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.All_PlayAlertScream
	void Receive_Alerted(); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.Receive_Alerted
	void CancelSpecialAttack(); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.CancelSpecialAttack
	void StopMontagesOnDeath(); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.StopMontagesOnDeath
	void ExecuteUbergraph_ENE_PF_SpiderBase(int32_t EntryPoint); // Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.ExecuteUbergraph_ENE_PF_SpiderBase
};

