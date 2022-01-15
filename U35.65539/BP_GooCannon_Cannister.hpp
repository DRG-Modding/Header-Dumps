#ifndef UE4SS_SDK_BP_GooCannon_Cannister_HPP
#define UE4SS_SDK_BP_GooCannon_Cannister_HPP

class ABP_GooCannon_Cannister_C : UMAG_BaseClass_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UFirstPersonStaticMeshComponent* Bar;
    float Timeline_0_NewTrack_0_FBE0858B42174801F4BF1E8D85338A2E;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_FBE0858B42174801F4BF1E8D85338A2E;
    UTimelineComponent* Timeline_0;
    float StartZScale;

    bool Attached(AActor* Parent);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GooCannon_Cannister(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue);
}

#endif
