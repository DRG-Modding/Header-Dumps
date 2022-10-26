#ifndef UE4SS_SDK_BP_MicroRocket_Base_HPP
#define UE4SS_SDK_BP_MicroRocket_Base_HPP

class ABP_MicroRocket_Base_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_MicroRocket_Plume;
    class UPointLightComponent* Light_Exhaust;
    class UParticleSystemComponent* particle_Trail;
    class UParticleSystemComponent* Particle_Exhaust;
    class UStaticMeshComponent* MeshRocket;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MicroRocket_Base(int32 EntryPoint);
};

#endif
