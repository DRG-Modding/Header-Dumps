#ifndef UE4SS_SDK_PRJ_Spider_Shooter_Ground_HPP
#define UE4SS_SDK_PRJ_Spider_Shooter_Ground_HPP

class APRJ_Spider_Shooter_Ground_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* SK_ShootingPlant_Projectile;
    class UParticleSystemComponent* ParticleComponent;
    class UAudioComponent* audio;
    float Damageold;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Spider_Shooter_Ground(int32 EntryPoint);
};

#endif
