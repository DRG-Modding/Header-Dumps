#ifndef UE4SS_SDK_PRJ_BombSpitter_HPP
#define UE4SS_SDK_PRJ_BombSpitter_HPP

class APRJ_BombSpitter_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class USphereComponent* Sphere;
    class USimpleHealthComponent* SimpleHealth;
    class UProjectileExplosion* ProjectileExplosion;
    class UStaticMeshComponent* Projectile;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void GoBoom();
    void ExecuteUbergraph_PRJ_BombSpitter(int32 EntryPoint);
};

#endif
