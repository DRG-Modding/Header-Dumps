#ifndef UE4SS_SDK_BP_FoamRocket_HPP
#define UE4SS_SDK_BP_FoamRocket_HPP

class ABP_FoamRocket_C : public ABP_BoscoAbillityProjectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 GlobCount;
    int32 spawned;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_BP_FoamRocket(int32 EntryPoint);
};

#endif
