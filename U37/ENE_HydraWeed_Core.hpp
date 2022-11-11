#ifndef UE4SS_SDK_ENE_HydraWeed_Core_HPP
#define UE4SS_SDK_ENE_HydraWeed_Core_HPP

class AENE_HydraWeed_Core_C : public AHydraWeedCore
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* Carving Mesh;
    class USphereComponent* WakeUpTrigger;
    class UParticleSystemComponent* P_GodRays;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_06;
    class UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_05;
    class UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_04;
    class UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_03;
    class UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_01;
    class UStaticMeshComponent* SM_HydraWeed_Extra_Roots_SM_HydraWeed_Root_02;
    class USceneComponent* BigRoots;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UPointLightComponent* PointLight;
    class USphereComponent* Sphere;
    class USkeletalMeshComponent* SkeletalMesh;
    class UTerrainPlacementComponent* terrainPlacement;
    class USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos;
    class USceneComponent* DefaultSceneRoot;
    float GlowIntensity_Glow_E20983104900FF1AA1B7E19B0232B66F;
    TEnumAsByte<ETimelineDirection::Type> GlowIntensity__Direction_E20983104900FF1AA1B7E19B0232B66F;
    class UTimelineComponent* GlowIntensity;
    float SpawnRadius;
    int32 NumShootersKilledToOpen;
    int32 NumShootersKilled;
    bool IsOpen;
    TArray<class AActor*> MyShooters;
    float DamageTakenWhileOpen;
    int32 ShooterIndex;
    bool IsDormant;
    FENE_HydraWeed_Core_COnOpenChanged OnOpenChanged;
    void OnOpenChanged(bool IsOpen);
    int32 MaxAllowedShooters;
    TArray<class AActor*> MyHealers;
    float MaxLightIntensity;
    FVector SeedProjectileSpawnOffset;
    TArray<FVector> LaunchSeedList;
    int32 MaxNumHealers;
    float StayOpenTimerTick;
    float StayOpenTimerProgress;
    FTimerHandle StayOpenTimer;
    float TimeToDamageConversion;
    float StayOpenWhenBellowThisHealthPercentage;
    TArray<FVector> LaunchHealerSeedList;
    TArray<class TSubclassOf<ABP_HydraWeedCoreFragment_C>> ShardFragments;
    float HealCapPercentage;
    float HealthCheckPointValue1;
    float HealthCheckPointValue2;
    float MinHealthPercentageToSpawnHealingPods;
    float TimeToDamagePenaltyPerPlayer;
    FENE_HydraWeed_Core_COnDormantChanged OnDormantChanged;
    void OnDormantChanged(bool IsDormant);
    bool IsHealthbarVisible;
    int32 NumSpawnAttempts;
    float ShooterDormantRange;
    float ShooterActiveRange;
    float StopFightingDistance;
    float ResumeFightingDistance;

    FVector GetTargetCenterMass();
    class USkeletalMeshComponent* GetMesh();
    bool GetIsTargetable();
    void OnRep_IsHealthbarVisible();
    void ArePlayersInRange(float Distance, bool& InRange);
    int32 GetMaxAllowedHealersToSpawn();
    int32 ClampMaxShooters(int32 DesiredCount);
    void SpawnGems();
    void LaunchSeed(FVector& TargetLocation, TSubclassOf<class AProjectile> ProjectileClass);
    void OnRep_IsDormant();
    class UMeshComponent* Receive_GetMeshComponent();
    void OnRep_IsOpen();
    void GlowIntensity__FinishedFunc();
    void GlowIntensity__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__Health_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount);
    void DoGlow();
    void OnShooterKilled(class AHydraWeedShooter* shooter);
    void OnHealerKilled(class AHydraWeedHealer* healer);
    void WakupCore();
    void AddSeedToLaunch(FVector Location, TSubclassOf<class AProjectile> ProjectileClass);
    void OnLaunchSeed();
    void UpdateStayOpenTimer();
    void CheckStayOpenDamage();
    void AddHealerSeedToLaunch(FVector Location, TSubclassOf<class AProjectile> ProjectileClass);
    void OnLaunchHealerSeed();
    void BndEvt__WakeUpTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void WakeUp();
    void CheckDistanceToPlayers();
    void SetSightRangeOfAllShooters(bool BePassive);
    void ResumeFight();
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_HealthSegmentChange__DelegateSignature(int32 currSegment, int32 prevSegment);
    void BndEvt__Health_K2Node_ComponentBoundEvent_4_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void ExecuteUbergraph_ENE_HydraWeed_Core(int32 EntryPoint);
    void OnDormantChanged__DelegateSignature(bool IsDormant);
    void OnOpenChanged__DelegateSignature(bool IsOpen);
};

#endif
