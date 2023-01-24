#ifndef UE4SS_SDK_PRJ_BomberGoo_HPP
#define UE4SS_SDK_PRJ_BomberGoo_HPP

class APRJ_BomberGoo_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;
    class UFirstPersonStaticMeshComponent* ProjectileMesh;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_BomberGoo(int32 EntryPoint);
};

#endif
