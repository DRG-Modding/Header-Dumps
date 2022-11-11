#ifndef UE4SS_SDK_PRJ_TripleShooter_HPP
#define UE4SS_SDK_PRJ_TripleShooter_HPP

class APRJ_TripleShooter_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SK_ShootingPlant_Projectile;
    class UDamageComponent* Damage;
    class UParticleSystemComponent* P_CactusSpikeTrail1;
    class UStaticMeshComponent* SM_CactusSpikeProjectile;
    class UParticleSystem* ImpactParticle;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PRJ_TripleShooter(int32 EntryPoint);
};

#endif
