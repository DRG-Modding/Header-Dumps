#ifndef UE4SS_SDK_ENE_ShootingPlant_Small_HPP
#define UE4SS_SDK_ENE_ShootingPlant_Small_HPP

class AENE_ShootingPlant_Small_C : public AHydraWeedShooter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UProjectileAttackComponent* ProjectileAttack;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UPointLightComponent* PointLight;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPawnSensingComponent* PawnSensing;
    class UOutlineComponent* outline;
    class UCapsuleComponent* Capsule;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;
    float Growth_Size_F8D1ED0F47A0109E69BA949410BBFBDF;
    TEnumAsByte<ETimelineDirection::Type> Growth__Direction_F8D1ED0F47A0109E69BA949410BBFBDF;
    class UTimelineComponent* Growth;
    float Timeline_0_NewTrack_0_B7C1F10347624A87CE535C859B0970CF;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B7C1F10347624A87CE535C859B0970CF;
    class UTimelineComponent* Timeline_0;
    int32 NumSpawned;
    int32 MaxSpawns;
    float MaxSpawnDistance;
    bool IsPupating;
    float PupationDuration;
    TEnumAsByte<Spider_DeathType::Type> DeathType;
    float MaxLightIntensity;
    int32 NumHitsToWakeUp;
    float AggressiveSightRadius;
    float PassiveSightRadius;
    bool IsPassive;

    bool GetIsTargetable();
    class UMeshComponent* Receive_GetMeshComponent();
    void OnRep_DeathType();
    class USkeletalMeshComponent* GetMesh();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Growth__FinishedFunc();
    void Growth__UpdateFunc();
    void BndEvt__Health_K2Node_ComponentBoundEvent_31_HealthChangedSig__DelegateSignature(float Health);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void ReceiveBeginPlay();
    void WakeUp();
    void NormalDeath();
    void WeakpointDeath();
    void OnRep_Target();
    void ToggleAggressionLevel(bool BePassive);
    void BndEvt__ENE_ShootingPlant_Small_Health_K2Node_ComponentBoundEvent_2_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void ExecuteUbergraph_ENE_ShootingPlant_Small(int32 EntryPoint);
};

#endif
