#ifndef UE4SS_SDK_PRJ_RockpoxBomber_PlagueDrop_HPP
#define UE4SS_SDK_PRJ_RockpoxBomber_PlagueDrop_HPP

class APRJ_RockpoxBomber_PlagueDrop_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystem* Impact particles;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_RockpoxBomber_PlagueDrop(int32 EntryPoint);
};

#endif
