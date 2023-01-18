#ifndef UE4SS_SDK_PRJ_Spider_RapidShooter_HPP
#define UE4SS_SDK_PRJ_Spider_RapidShooter_HPP

class APRJ_Spider_RapidShooter_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* SK_ShootingPlant_Projectile;
    class UParticleSystemComponent* ParticleComponent;
    class UAudioComponent* audio;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Spider_RapidShooter(int32 EntryPoint);
};

#endif
