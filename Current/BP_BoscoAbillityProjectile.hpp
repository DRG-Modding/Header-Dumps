#ifndef UE4SS_SDK_BP_BoscoAbillityProjectile_HPP
#define UE4SS_SDK_BP_BoscoAbillityProjectile_HPP

class ABP_BoscoAbillityProjectile_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* Light_Exhaust;
    class UParticleSystemComponent* particle_Trail;
    class UParticleSystemComponent* Particle_Exhaust;
    class UStaticMeshComponent* MeshRocket;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BoscoAbillityProjectile(int32 EntryPoint);
};

#endif
