#ifndef UE4SS_SDK_PRJ_Mactera_Shooter_Elite_HPP
#define UE4SS_SDK_PRJ_Mactera_Shooter_Elite_HPP

class APRJ_Mactera_Shooter_Elite_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UParticleSystemComponent* P_CactusSpikeTrail1;
    class UStaticMeshComponent* SM_CactusSpikeProjectile;
    class UParticleSystem* ImpactParticle;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PRJ_Mactera_Shooter_Elite(int32 EntryPoint);
};

#endif
