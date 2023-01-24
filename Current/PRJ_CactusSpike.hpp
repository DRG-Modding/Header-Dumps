#ifndef UE4SS_SDK_PRJ_CactusSpike_HPP
#define UE4SS_SDK_PRJ_CactusSpike_HPP

class APRJ_CactusSpike_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UParticleSystemComponent* P_CactusSpikeTrail1;
    class UStaticMeshComponent* SM_CactusSpikeProjectile;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_CactusSpike(int32 EntryPoint);
};

#endif
