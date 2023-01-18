#ifndef UE4SS_SDK_PRJ_Spider_Shooter_Queen_HPP
#define UE4SS_SDK_PRJ_Spider_Shooter_Queen_HPP

class APRJ_Spider_Shooter_Queen_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* DamageComponent;
    class UStaticMeshComponent* ProjectileMesh;
    class UParticleSystemComponent* ParticleComponent;
    class UAudioComponent* audio;
    float DamageAmmount;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Spider_Shooter_Queen(int32 EntryPoint);
};

#endif
