#ifndef UE4SS_SDK_PRJ_ExploderTankClusterBomb_HPP
#define UE4SS_SDK_PRJ_ExploderTankClusterBomb_HPP

class APRJ_ExploderTankClusterBomb_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* SK_ShootingPlant_Projectile;
    class UProjectileExplosion* ProjectileExplosion;
    float FuseTime;
    float BurnThickness;
    class UTerrainMaterial* OverrideMaterial;
    bool HasExploded;

    void Explode(FVector Location);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void GoBoom();
    void ReceiveBeginPlay();
    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void ExecuteUbergraph_PRJ_ExploderTankClusterBomb(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_GetActorForwardVector_ReturnValue, const FHitResult K2Node_ComponentBoundEvent_ImpactResult, const FVector K2Node_ComponentBoundEvent_ImpactVelocity, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, class AShieldGeneratorActor* K2Node_DynamicCast_AsShield_Generator_Actor, bool K2Node_DynamicCast_bSuccess);
};

#endif
