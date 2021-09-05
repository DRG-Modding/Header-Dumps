// BlueprintGeneratedClass ENE_HydraWeed_Core.ENE_HydraWeed_Core_C
// Size: 0x4e0 (Inherited: 0x338)
struct AENE_HydraWeed_Core_C : AHydraWeedCore {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UStaticMeshComponent* Carving Mesh; // 0x340(0x08)
	USphereComponent* WakeUpTrigger; // 0x348(0x08)
	UParticleSystemComponent* P_GodRays; // 0x350(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x358(0x08)
	UOutlineComponent* outline; // 0x360(0x08)
	UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_06; // 0x368(0x08)
	UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_05; // 0x370(0x08)
	UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_04; // 0x378(0x08)
	UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_03; // 0x380(0x08)
	UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_01; // 0x388(0x08)
	UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_02; // 0x390(0x08)
	USceneComponent* BigRoots; // 0x398(0x08)
	UWeakpointGlowComponent* WeakpointGlow; // 0x3a0(0x08)
	UPointLightComponent* PointLight; // 0x3a8(0x08)
	USphereComponent* Sphere; // 0x3b0(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x3b8(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x3c0(0x08)
	USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos; // 0x3c8(0x08)
	USceneComponent* DefaultSceneRoot; // 0x3d0(0x08)
	float GlowIntensity_Glow_E20983104900FF1AA1B7E19B0232B66F; // 0x3d8(0x04)
	enum class ETimelineDirection GlowIntensity__Direction_E20983104900FF1AA1B7E19B0232B66F; // 0x3dc(0x01)
	UTimelineComponent* GlowIntensity; // 0x3e0(0x08)
	float SpawnRadius; // 0x3e8(0x04)
	int32_t NumShootersKilledToOpen; // 0x3ec(0x04)
	int32_t NumShootersKilled; // 0x3f0(0x04)
	bool IsOpen; // 0x3f4(0x01)
	TArray<AActor*> MyShooters; // 0x3f8(0x10)
	float DamageTakenWhileOpen; // 0x408(0x04)
	int32_t ShooterIndex; // 0x40c(0x04)
	bool IsDormant; // 0x410(0x01)
	FMulticastInlineDelegate OnOpenChanged; // 0x418(0x10)
	int32_t MaxAllowedShooters; // 0x428(0x04)
	TArray<AActor*> MyHealers; // 0x430(0x10)
	float MaxLightIntensity; // 0x440(0x04)
	FVector SeedProjectileSpawnOffset; // 0x444(0x0c)
	TArray<FVector> LaunchSeedList; // 0x450(0x10)
	int32_t MaxNumHealers; // 0x460(0x04)
	float StayOpenTimerTick; // 0x464(0x04)
	float StayOpenTimerProgress; // 0x468(0x04)
	FTimerHandle StayOpenTimer; // 0x470(0x08)
	float TimeToDamageConversion; // 0x478(0x04)
	float StayOpenWhenBellowThisHealthPercentage; // 0x47c(0x04)
	TArray<FVector> LaunchHealerSeedList; // 0x480(0x10)
	TArray<ABP_HydraWeedCoreFragment_C*> ShardFragments; // 0x490(0x10)
	float HealCapPercentage; // 0x4a0(0x04)
	float HealthCheckPointValue1; // 0x4a4(0x04)
	float HealthCheckPointValue2; // 0x4a8(0x04)
	float MinHealthPercentageToSpawnHealingPods; // 0x4ac(0x04)
	float TimeToDamagePenaltyPerPlayer; // 0x4b0(0x04)
	FMulticastInlineDelegate OnDormantChanged; // 0x4b8(0x10)
	bool IsHealthbarVisible; // 0x4c8(0x01)
	int32_t NumSpawnAttempts; // 0x4cc(0x04)
	float ShooterDormantRange; // 0x4d0(0x04)
	float ShooterActiveRange; // 0x4d4(0x04)
	float StopFightingDistance; // 0x4d8(0x04)
	float ResumeFightingDistance; // 0x4dc(0x04)

	FVector GetTargetCenterMass();
	USkeletalMeshComponent* GetMesh();
	bool GetIsTargetable();
	void OnRep_IsHealthbarVisible();
	void ArePlayersInRange(float Distance, bool InRange);
	int32_t GetMaxAllowedHealersToSpawn();
	int32_t ClampMaxShooters(int32_t DesiredCount);
	void SpawnGems();
	void LaunchSeed(FVector TargetLocation, AProjectile* projectileClass);
	void OnRep_IsDormant();
	UMeshComponent* Receive_GetMeshComponent();
	void OnRep_IsOpen();
	void GlowIntensity__FinishedFunc();
	void GlowIntensity__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__Health_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float amount);
	void DoGlow();
	void OnShooterKilled(AHydraWeedShooter* shooter);
	void OnHealerKilled(AHydraWeedHealer* healer);
	void WakupCore();
	void AddSeedToLaunch(FVector Location, AProjectile* projectileClass);
	void OnLaunchSeed();
	void UpdateStayOpenTimer();
	void CheckStayOpenDamage();
	void AddHealerSeedToLaunch(FVector Location, AProjectile* projectileClass);
	void OnLaunchHealerSeed();
	void BndEvt__WakeUpTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void WakeUp();
	void CheckDistanceToPlayers();
	void SetSightRangeOfAllShooters(bool BePassive);
	void ResumeFight();
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_HealthSegmentChange__DelegateSignature(int32_t currSegment, int32_t prevSegment);
	void BndEvt__Health_K2Node_ComponentBoundEvent_4_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void ExecuteUbergraph_ENE_HydraWeed_Core(int32_t EntryPoint);
	void OnDormantChanged__DelegateSignature(bool IsDormant);
	void OnOpenChanged__DelegateSignature(bool IsOpen);
};

