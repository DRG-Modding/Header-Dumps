#ifndef UE4SS_SDK_PRJ_Crye_SnowBall_HPP
#define UE4SS_SDK_PRJ_Crye_SnowBall_HPP

class APRJ_Crye_SnowBall_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UProjectileExplosion* ProjectileExplosion;
    class UStaticMeshComponent* StaticMesh;
    class UParticleSystemComponent* ParticleSystem;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Crye_SnowBall(int32 EntryPoint);
};

#endif
