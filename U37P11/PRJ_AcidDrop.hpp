#ifndef UE4SS_SDK_PRJ_AcidDrop_HPP
#define UE4SS_SDK_PRJ_AcidDrop_HPP

class APRJ_AcidDrop_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystem* Impact particles;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_AcidDrop(int32 EntryPoint);
};

#endif
