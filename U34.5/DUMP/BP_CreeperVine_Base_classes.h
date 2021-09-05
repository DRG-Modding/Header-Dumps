// BlueprintGeneratedClass BP_CreeperVine_Base.BP_CreeperVine_Base_C
// Size: 0x4b8 (Inherited: 0x448)
struct ABP_CreeperVine_Base_C : ASplinePlant {
	FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	UAudioComponent* HurtAudioComponent; // 0x450(0x08)
	UParticleSystemComponent* Trail; // 0x458(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x460(0x08)
	UStaticMeshComponent* SM_brokenFloor_01; // 0x468(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x470(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x478(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x480(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x488(0x08)
	FTimerHandle CheckPlayersTimer; // 0x490(0x08)
	bool IsRetracted; // 0x498(0x01)
	float SplineNodeRandomOffset; // 0x49c(0x04)
	USoundBase* HurtAudio; // 0x4a0(0x08)
	float SpeedRetraction; // 0x4a8(0x04)
	float SpeedExtending; // 0x4ac(0x04)
	float LengthRetracted; // 0x4b0(0x04)
	float LastPlayerHitTime; // 0x4b4(0x04)

	void HandleActorOverlap(AActor* OverlappedActor, AActor* OtherActor);
	void HandleActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult Hit);
	void PrepareSpline(USplineComponent* InSplineComponent, int32_t InSeed);
	void OnRep_IsRetracted();
	void ReceiveBeginPlay();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
	void ReceivePrepareSpline(USplineComponent* InSplineComponent, int32_t InSeed);
	void InitiateChainRetract();
	void PlayHurtAudio(float InDamage);
	void Retract();
	void ReceiveMovementFinished(float InDistanceProgress);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature(float Health);
	void ExecuteUbergraph_BP_CreeperVine_Base(int32_t EntryPoint);
};

