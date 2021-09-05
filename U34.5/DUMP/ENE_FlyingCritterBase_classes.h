// BlueprintGeneratedClass ENE_FlyingCritterBase.ENE_FlyingCritterBase_C
// Size: 0x448 (Inherited: 0x3c8)
struct AENE_FlyingCritterBase_C : AFlyingEnemyDeepPathfinderCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	UParticleSystemComponent* Trail; // 0x3d0(0x08)
	UAudioComponent* Audio Flying; // 0x3d8(0x08)
	UAudioComponent* Audio Idle; // 0x3e0(0x08)
	UPointLightComponent* PointLight; // 0x3e8(0x08)
	USkeletalMeshComponent* Wings; // 0x3f0(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x3f8(0x08)
	UInDangerComponent* InDanger; // 0x400(0x08)
	UOutlineComponent* outline; // 0x408(0x08)
	UEnemyComponent* enemy; // 0x410(0x08)
	USphereComponent* Sphere; // 0x418(0x08)
	UGroundToAirComponent* GroundToAir; // 0x420(0x08)
	float FleeFromplayerRange; // 0x428(0x04)
	float MinWalkTIme; // 0x42c(0x04)
	float MaxWalkTime; // 0x430(0x04)
	USoundCue* deathSound; // 0x438(0x08)
	UFXSystemAsset* deathParticles; // 0x440(0x08)

	void SetWantstoFly(bool Fly);
	void BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature();
	void OnMessageAI(FName TriggerName);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature();
	void ReceiveBeginPlay();
	void LookforPlayers();
	void RandomFlight();
	void OnFrozen(AActor* Source);
	void ExecuteUbergraph_ENE_FlyingCritterBase(int32_t EntryPoint);
};

