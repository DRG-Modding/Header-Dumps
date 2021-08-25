// BlueprintGeneratedClass ENE_HydraWeed_Core.ENE_HydraWeed_Core_C
// Size: 0x4e0 (Inherited: 0x338)
struct AENE_HydraWeed_Core_C : AHydraWeedCore {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UStaticMeshComponent* Carving Mesh; // 0x340(0x08)
	struct USphereComponent* WakeUpTrigger; // 0x348(0x08)
	struct UParticleSystemComponent* P_GodRays; // 0x350(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x358(0x08)
	struct UOutlineComponent* outline; // 0x360(0x08)
	struct UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_06; // 0x368(0x08)
	struct UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_05; // 0x370(0x08)
	struct UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_04; // 0x378(0x08)
	struct UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_03; // 0x380(0x08)
	struct UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_01; // 0x388(0x08)
	struct UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_02; // 0x390(0x08)
	struct USceneComponent* BigRoots; // 0x398(0x08)
	struct UWeakpointGlowComponent* WeakpointGlow; // 0x3a0(0x08)
	struct UPointLightComponent* PointLight; // 0x3a8(0x08)
	struct USphereComponent* Sphere; // 0x3b0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x3b8(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x3c0(0x08)
	struct USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos; // 0x3c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d0(0x08)
	float GlowIntensity_Glow_E20983104900FF1AA1B7E19B0232B66F; // 0x3d8(0x04)
	char GlowIntensity__Direction_E20983104900FF1AA1B7E19B0232B66F; // 0x3dc(0x01)
	char UnknownData_3DD[0x3]; // 0x3dd(0x03)
	struct UTimelineComponent* GlowIntensity; // 0x3e0(0x08)
	float SpawnRadius; // 0x3e8(0x04)
	int32_t NumShootersKilledToOpen; // 0x3ec(0x04)
	int32_t NumShootersKilled; // 0x3f0(0x04)
	bool IsOpen; // 0x3f4(0x01)
	char UnknownData_3F5[0x3]; // 0x3f5(0x03)
	struct TArray<struct AActor*> MyShooters; // 0x3f8(0x10)
	float DamageTakenWhileOpen; // 0x408(0x04)
	int32_t ShooterIndex; // 0x40c(0x04)
	bool IsDormant; // 0x410(0x01)
	char UnknownData_411[0x7]; // 0x411(0x07)
	struct FMulticastInlineDelegate OnOpenChanged; // 0x418(0x10)
	int32_t MaxAllowedShooters; // 0x428(0x04)
	char UnknownData_42C[0x4]; // 0x42c(0x04)
	struct TArray<struct AActor*> MyHealers; // 0x430(0x10)
	float MaxLightIntensity; // 0x440(0x04)
	struct FVector SeedProjectileSpawnOffset; // 0x444(0x0c)
	struct TArray<struct FVector> LaunchSeedList; // 0x450(0x10)
	int32_t MaxNumHealers; // 0x460(0x04)
	float StayOpenTimerTick; // 0x464(0x04)
	float StayOpenTimerProgress; // 0x468(0x04)
	char UnknownData_46C[0x4]; // 0x46c(0x04)
	struct FTimerHandle StayOpenTimer; // 0x470(0x08)
	float TimeToDamageConversion; // 0x478(0x04)
	float StayOpenWhenBellowThisHealthPercentage; // 0x47c(0x04)
	struct TArray<struct FVector> LaunchHealerSeedList; // 0x480(0x10)
	struct TArray<struct ABP_HydraWeedCoreFragment_C*> ShardFragments; // 0x490(0x10)
	float HealCapPercentage; // 0x4a0(0x04)
	float HealthCheckPointValue1; // 0x4a4(0x04)
	float HealthCheckPointValue2; // 0x4a8(0x04)
	float MinHealthPercentageToSpawnHealingPods; // 0x4ac(0x04)
	float TimeToDamagePenaltyPerPlayer; // 0x4b0(0x04)
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct FMulticastInlineDelegate OnDormantChanged; // 0x4b8(0x10)
	bool IsHealthbarVisible; // 0x4c8(0x01)
	char UnknownData_4C9[0x3]; // 0x4c9(0x03)
	int32_t NumSpawnAttempts; // 0x4cc(0x04)
	float ShooterDormantRange; // 0x4d0(0x04)
	float ShooterActiveRange; // 0x4d4(0x04)
	float StopFightingDistance; // 0x4d8(0x04)
	float ResumeFightingDistance; // 0x4dc(0x04)

	struct FVector GetTargetCenterMass(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.GetTargetCenterMass
	struct USkeletalMeshComponent* GetMesh(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.GetMesh
	bool GetIsTargetable(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.GetIsTargetable
	void OnRep_IsHealthbarVisible(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.OnRep_IsHealthbarVisible
	void ArePlayersInRange(float Distance, bool InRange); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.ArePlayersInRange
	int32_t GetMaxAllowedHealersToSpawn(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.GetMaxAllowedHealersToSpawn
	int32_t ClampMaxShooters(int32_t DesiredCount); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.ClampMaxShooters
	void SpawnGems(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.SpawnGems
	void LaunchSeed(struct FVector TargetLocation, struct AProjectile* projectileClass); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.LaunchSeed
	void OnRep_IsDormant(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.OnRep_IsDormant
	struct UMeshComponent* Receive_GetMeshComponent(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.Receive_GetMeshComponent
	void OnRep_IsOpen(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.OnRep_IsOpen
	void GlowIntensity__FinishedFunc(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.GlowIntensity__FinishedFunc
	void GlowIntensity__UpdateFunc(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.GlowIntensity__UpdateFunc
	void ReceiveBeginPlay(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.ReceiveBeginPlay
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__Health_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float amount); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.BndEvt__Health_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature
	void DoGlow(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.DoGlow
	void OnShooterKilled(struct AHydraWeedShooter* shooter); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.OnShooterKilled
	void OnHealerKilled(struct AHydraWeedHealer* healer); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.OnHealerKilled
	void WakupCore(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.WakupCore
	void AddSeedToLaunch(struct FVector Location, struct AProjectile* projectileClass); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.AddSeedToLaunch
	void OnLaunchSeed(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.OnLaunchSeed
	void UpdateStayOpenTimer(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.UpdateStayOpenTimer
	void CheckStayOpenDamage(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.CheckStayOpenDamage
	void AddHealerSeedToLaunch(struct FVector Location, struct AProjectile* projectileClass); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.AddHealerSeedToLaunch
	void OnLaunchHealerSeed(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.OnLaunchHealerSeed
	void BndEvt__WakeUpTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.BndEvt__WakeUpTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	void WakeUp(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.WakeUp
	void CheckDistanceToPlayers(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.CheckDistanceToPlayers
	void SetSightRangeOfAllShooters(bool BePassive); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.SetSightRangeOfAllShooters
	void ResumeFight(); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.ResumeFight
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_HealthSegmentChange__DelegateSignature(int32_t currSegment, int32_t prevSegment); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.BndEvt__Health_K2Node_ComponentBoundEvent_1_HealthSegmentChange__DelegateSignature
	void BndEvt__Health_K2Node_ComponentBoundEvent_4_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.BndEvt__Health_K2Node_ComponentBoundEvent_4_HitSig__DelegateSignature
	void ExecuteUbergraph_ENE_HydraWeed_Core(int32_t EntryPoint); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.ExecuteUbergraph_ENE_HydraWeed_Core
	void OnDormantChanged__DelegateSignature(bool IsDormant); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.OnDormantChanged__DelegateSignature
	void OnOpenChanged__DelegateSignature(bool IsOpen); // Function ENE_HydraWeed_Core.ENE_HydraWeed_Core_C.OnOpenChanged__DelegateSignature
};

