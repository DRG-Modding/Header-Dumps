#ifndef UE4SS_SDK_TSK_FindPointNearTarget_HPP
#define UE4SS_SDK_TSK_FindPointNearTarget_HPP

class UTSK_FindPointNearTarget_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector ManualOffset;
    float Distance;
    FBlackboardKeySelector TargetKey;
    FBlackboardKeySelector LocationKey;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindPointNearTarget(int32 EntryPoint);
};

#endif
