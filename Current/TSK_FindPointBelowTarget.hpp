#ifndef UE4SS_SDK_TSK_FindPointBelowTarget_HPP
#define UE4SS_SDK_TSK_FindPointBelowTarget_HPP

class UTSK_FindPointBelowTarget_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector LocationKey;
    float Distance;
    FBlackboardKeySelector TargetKey;
    float Height;
    FVector ManualOffset;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindPointBelowTarget(int32 EntryPoint);
};

#endif
