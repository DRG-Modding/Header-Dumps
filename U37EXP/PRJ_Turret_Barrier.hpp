#ifndef UE4SS_SDK_PRJ_Turret_Barrier_HPP
#define UE4SS_SDK_PRJ_Turret_Barrier_HPP

class APRJ_Turret_Barrier_C : public APRJ_Facility_Barrier_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Turret_Barrier(int32 EntryPoint);
};

#endif
