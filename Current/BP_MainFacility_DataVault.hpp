#ifndef UE4SS_SDK_BP_MainFacility_DataVault_HPP
#define UE4SS_SDK_BP_MainFacility_DataVault_HPP

class ABP_MainFacility_DataVault_C : public ATetherStation
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeshCarverComponent* MeshCarver;
    class UPathfinderCollisionComponent* PathfinderCollision_Hatch4;
    class UPathfinderCollisionComponent* PathfinderCollision_Hatch3;
    class UPathfinderCollisionComponent* PathfinderCollision_Hatch2;
    class UPathfinderCollisionComponent* PathfinderCollision_Hatch1;
    class UPathfinderCollisionComponent* PathfinderCollision_Hatch;
    class UPointLightComponent* ShieldEmitterPointLight;
    class USpotLightComponent* SpotLight_MainBelowGlow;
    class UStaticMeshComponent* ShieldCol;
    class UPathfinderCollisionComponent* PathfinderCollision_Bottom;
    class UPathfinderCollisionComponent* PathfinderCollision_Top;
    class UCapsuleComponent* Capsule;
    class UChildActorComponent* ShieldEmitter;
    class UStaticMeshComponent* MiddleCarver;
    class UStaticMeshComponent* UpLight_4;
    class UStaticMeshComponent* UpLight_3;
    class UStaticMeshComponent* UpLight_2;
    class UStaticMeshComponent* UpLight_1;
    class USceneComponent* UpLights;
    class UAudioComponent* FacilityBossShield_Cue;
    class UChildActorComponent* TentacleSpawn3;
    class UChildActorComponent* TentacleSpawn2;
    class UChildActorComponent* TentacleSpawn1;
    class UChildActorComponent* TentacleSpawn;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UPathfinderCollisionComponent* ShieldPFCollision;
    class UDamageComponent* Damage;
    class UBP_FacilityElectricAttack_C* BP_FacilityElectricAttack;
    class UStaticMeshComponent* Shield;
    class USceneComponent* Center;
    class UStaticMeshComponent* TerrainScannerBase;
    class USphereComponent* Sphere1;
    class UOutlineComponent* outline;
    class USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos;
    class URoomCarverComponent* RoomCarver;
    class UTerrainPlacementComponent* terrainPlacement;
    float FadeShield_NewTrack_0_1149055647097FB37A48EA8DF4A2DB45;
    TEnumAsByte<ETimelineDirection::Type> FadeShield__Direction_1149055647097FB37A48EA8DF4A2DB45;
    class UTimelineComponent* FadeShield;
    int32 NumberOfActivations;
    int32 ActivationsRequired;
    int32 spawned;
    FBP_MainFacility_DataVault_CFacilityActivated FacilityActivated;
    void FacilityActivated();
    FBP_MainFacility_DataVault_CFacilityDestroyed FacilityDestroyed;
    void FacilityDestroyed();
    FBP_MainFacility_DataVault_CFacilityDamaged FacilityDamaged;
    void FacilityDamaged();
    class UMaterialInstanceDynamic* LightMaterial;
    bool Found;
    TArray<FTransform> TentacleSpawnTransforms;
    float MeleeAttackMaxDistance;
    float AttackTimer;
    FTimerHandle AttackTimerRef;
    bool IsBusy;
    float WeakpointHideTime;
    float WeakpointShowTime;
    float WeakpointShowMaxTime;
    float WeakpointShowMinTime;
    bool HideWeakpoint;
    class UObject* WeakpointBP;
    int32 NumConsecutiveShots;
    int32 shotCount;
    int32 RangedAttackTentacleIndex;
    TArray<class APlayerCharacter*> PlayerArray2;
    bool CanShoot;
    bool PlayingMusic;
    FMusicHandle MusicHandle;
    int32 LastWeakpointPositionIndex;
    float TentaclesRegrowthPause;
    TArray<class ABP_MainShieldActvator_C*> ShieldActivators;
    class AENE_FacilityTentacle_C* CurrentTentacle;
    bool IsBossfightActive;
    bool AutoStart;
    float ElectricAttacCooldown;
    int32 PlayersInTrigger;
    FTimerHandle ElectricAttackTimer;
    TArray<class APlayerCharacter*> PlayersInsideTrigger;
    class AENE_FacilityCaretaker_C* Caretaker;
    class UMaterialInstanceDynamic* RimlightMaterial;
    class UStaticMeshComponent* NewVar_1;
    TArray<class ABP_FacilityTentacleManager_C*> TentacleSpawners;
    bool ShieldGeneratorDeactivated;
    FSimpleObjectInfoData ForceFieldInfo;
    FBP_MainFacility_DataVault_CFacilityFound FacilityFound;
    void FacilityFound();

    void UpdateLookAtShouts();
    void FadeInLightBelow();
    void Open Hatch();
    void BouncePlayer(class AActor* InActor, FHitResult InHit);
    void OnRep_Caretaker();
    void AnyAlivePlayersInTrigger(bool& Result);
    void Setup Patrol Drone(class APatrolBot* Drone);
    void OnRep_ChangingFaze();
    void GetTentacles(TArray<class AENE_FacilityTentacle_C*>& Tentacles);
    class AENE_FacilityTentacle_C* GetRandomTentacle();
    void GetTentacleSpawners(TArray<class ABP_FacilityTentacleManager_C*>& Array);
    void FindClosestWeakspotLocation(FVector TargetLocaton, FTransform& ClosestWeakpointTransform);
    void Disable Shield();
    void FindValidRangedTarget(class AENE_FacilityTentacle_C* TentacleRef, float MinDistance, bool NeedLoS, class AActor*& TargetPlayer);
    void TryStartMeleeAttack();
    void OnRep_Found();
    void OnRep_HasActivated();
    void SetActivationsRequired(int32 activations);
    void ActivatorEnganged();
    void UserConstructionScript();
    void FadeShield__FinishedFunc();
    void FadeShield__UpdateFunc();
    void ReceiveBeginPlay();
    void Cheat_TeleportPlayer();
    void BndEvt__Sphere1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnActivated();
    void OnGeneratorsReady();
    void StartFinalFight();
    void FinalFightOver();
    void RegrowTentacles();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void TryElectricAttack();
    void DroneSpawned(class APawn* enemy);
    void CaretakerDefeated(class UHealthComponentBase* HealthComponent);
    void OnCaretakerSpawned(class AENE_FacilityCaretaker_C* Caretaker);
    void DisableShields();
    void Cheat_DisableShieldEmitter();
    void PreventSpawning();
    void KillTentacles();
    void PauseTentacles(float Duration);
    void OnPause(float Duration);
    void CarveOutVault();
    void GeneratorsSpawned();
    void OnBatteriesExtracted();
    void LeftCharged(class ABP_Facility_PowerStation_GeneratorBase_C* Generator);
    void RightCharged(class ABP_Facility_PowerStation_GeneratorBase_C* Generator);
    void ExecuteUbergraph_BP_MainFacility_DataVault(int32 EntryPoint);
    void FacilityFound__DelegateSignature();
    void FacilityDamaged__DelegateSignature();
    void FacilityDestroyed__DelegateSignature();
    void FacilityActivated__DelegateSignature();
};

#endif
