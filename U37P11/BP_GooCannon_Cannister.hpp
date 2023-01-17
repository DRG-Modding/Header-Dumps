#ifndef UE4SS_SDK_BP_GooCannon_Cannister_HPP
#define UE4SS_SDK_BP_GooCannon_Cannister_HPP

class ABP_GooCannon_Cannister_C : public AMAG_BaseClass_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonStaticMeshComponent* Bar;
    float Timeline_0_NewTrack_0_FBE0858B42174801F4BF1E8D85338A2E;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_FBE0858B42174801F4BF1E8D85338A2E;
    class UTimelineComponent* Timeline_0;
    float StartZScale;

    bool OnSpawnRelease_Attached(class AActor* Parent);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GooCannon_Cannister(int32 EntryPoint);
};

#endif
