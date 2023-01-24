#ifndef UE4SS_SDK_PRJ_Terminator_Barrier_HPP
#define UE4SS_SDK_PRJ_Terminator_Barrier_HPP

class APRJ_Terminator_Barrier_C : public APRJ_Facility_Barrier_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* audio;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PRJ_Terminator_Barrier(int32 EntryPoint);
};

#endif
