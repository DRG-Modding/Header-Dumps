// BlueprintGeneratedClass ENE_Flea.ENE_Flea_C
// Size: 0x404 (Inherited: 0x398)
struct AENE_Flea_C : AEnemyDeepPathfinderCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	UParticleSystemComponent* Trail; // 0x3a0(0x08)
	UAudioComponent* Audio Flying; // 0x3a8(0x08)
	UAudioComponent* Audio Idle; // 0x3b0(0x08)
	UPointLightComponent* PointLight; // 0x3b8(0x08)
	USkeletalMeshComponent* Wings; // 0x3c0(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x3c8(0x08)
	UInDangerComponent* InDanger; // 0x3d0(0x08)
	UOutlineComponent* outline; // 0x3d8(0x08)
	UEnemyComponent* enemy; // 0x3e0(0x08)
	USphereComponent* Sphere; // 0x3e8(0x08)
	UGroundToAirComponent* GroundToAir; // 0x3f0(0x08)
	float FleeFromplayerRange; // 0x3f8(0x04)
	float MinWalkTIme; // 0x3fc(0x04)
	float MaxWalkTime; // 0x400(0x04)

	void SetWantstoFly(bool Fly);
	void BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature();
	void OnMessageAI(FName TriggerName);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature();
	void ReceiveBeginPlay();
	void LookforPlayers();
	void RandomFlight();
	void OnFrozen(AActor* Source);
	void ExecuteUbergraph_ENE_Flea(int32_t EntryPoint);
};

