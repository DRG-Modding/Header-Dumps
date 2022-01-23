#ifndef UE4SS_SDK_BP_BombSpitter_HPP
#define UE4SS_SDK_BP_BombSpitter_HPP

class ABP_BombSpitter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* BombSpitterMesh;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UStaticMeshComponent* ProjectileFake;
    class UTerrainDetectComponent* TerrainDetect;
    class USceneComponent* ProjectileSpawnLocation;
    class UCapsuleComponent* Capsule;
    class USimpleHealthComponent* SimpleHealth;
    class USceneComponent* DefaultSceneRoot;
    float Grow_Scale_E6213CB8461859CFDD77B8B3B4302959;
    TEnumAsByte<ETimelineDirection::Type> Grow__Direction_E6213CB8461859CFDD77B8B3B4302959;
    class UTimelineComponent* Grow;
    bool IsReady;
    float ReloadTime;
    class UMaterialInstanceDynamic* DynamicMaterial;
    FBP_BombSpitter_COnChangeState OnChangeState;
    void OnChangeState(bool Closed, bool Open);

    void OnRep_IsReady();
    void UserConstructionScript(float CallFunc_K2_GetScalarParameterValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Grow__FinishedFunc();
    void Grow__UpdateFunc();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, class UDamageClass* DamageClass, class AActor* DamageCauser, bool anyHealthLost);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void Shoot();
    void ExecuteUbergraph_BP_BombSpitter(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float K2Node_ComponentBoundEvent_Damage, class UDamageClass* K2Node_ComponentBoundEvent_damageClass, class AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, FVector CallFunc_GetActorUpVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, FRotator CallFunc_MakeRotFromX_ReturnValue, class AProjectileBase* CallFunc_SpawnProjectile_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void OnChangeState__DelegateSignature(bool Closed, bool Open);
};

#endif
