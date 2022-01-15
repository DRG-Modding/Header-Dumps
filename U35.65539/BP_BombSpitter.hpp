#ifndef UE4SS_SDK_BP_BombSpitter_HPP
#define UE4SS_SDK_BP_BombSpitter_HPP

class ABP_BombSpitter_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* BombSpitterMesh;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UTerrainPlacementComponent* terrainPlacement;
    UPathfinderCollisionComponent* PathfinderCollision;
    UStaticMeshComponent* ProjectileFake;
    UTerrainDetectComponent* TerrainDetect;
    USceneComponent* ProjectileSpawnLocation;
    UCapsuleComponent* Capsule;
    USimpleHealthComponent* SimpleHealth;
    USceneComponent* DefaultSceneRoot;
    float Grow_Scale_E6213CB8461859CFDD77B8B3B4302959;
    TEnumAsByte<ETimelineDirection::Type> Grow__Direction_E6213CB8461859CFDD77B8B3B4302959;
    UTimelineComponent* Grow;
    bool IsReady;
    float ReloadTime;
    UMaterialInstanceDynamic* DynamicMaterial;
    FBP_BombSpitter_COnChangeState OnChangeState;
    void OnChangeState(bool Closed, bool Open);

    void OnRep_IsReady();
    void UserConstructionScript(float CallFunc_K2_GetScalarParameterValue_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Grow__FinishedFunc();
    void Grow__UpdateFunc();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void Shoot();
    void ExecuteUbergraph_BP_BombSpitter(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float K2Node_ComponentBoundEvent_Damage, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, FVector CallFunc_GetActorUpVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, FRotator CallFunc_MakeRotFromX_ReturnValue, AProjectileBase* CallFunc_SpawnProjectile_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void OnChangeState__DelegateSignature(bool Closed, bool Open);
}

#endif
