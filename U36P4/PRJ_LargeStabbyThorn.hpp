#ifndef UE4SS_SDK_PRJ_LargeStabbyThorn_HPP
#define UE4SS_SDK_PRJ_LargeStabbyThorn_HPP

class APRJ_LargeStabbyThorn_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UParticleSystemComponent* P_CactusSpikeTrail1;
    class UStaticMeshComponent* SM_CactusSpikeProjectile;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_LargeStabbyThorn(int32 EntryPoint);
};

#endif
