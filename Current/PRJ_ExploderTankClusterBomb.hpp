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
    void ExecuteUbergraph_PRJ_ExploderTankClusterBomb(int32 EntryPoint);
};

#endif
