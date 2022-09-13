#ifndef UE4SS_SDK_PRJ_AcidDrop_Ice_HPP
#define UE4SS_SDK_PRJ_AcidDrop_Ice_HPP

class APRJ_AcidDrop_Ice_C : public APRJ_AcidDrop_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_AcidDrop_Ice(int32 EntryPoint);
};

#endif
