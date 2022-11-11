#ifndef UE4SS_SDK_PRJ_Mactera_Shooter_HPP
#define UE4SS_SDK_PRJ_Mactera_Shooter_HPP

class APRJ_Mactera_Shooter_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UParticleSystemComponent* P_CactusSpikeTrail1;
    class UStaticMeshComponent* SM_CactusSpikeProjectile;
    class UParticleSystem* ImpactParticle;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PRJ_Mactera_Shooter(int32 EntryPoint);
};

#endif
