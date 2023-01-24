#ifndef UE4SS_SDK_TSK_GetPointAboveTarget_HPP
#define UE4SS_SDK_TSK_GetPointAboveTarget_HPP

class UTSK_GetPointAboveTarget_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;
    FBlackboardKeySelector LocationKey;
    float RandomRange;
    float MinRangeAboveTarget;
    float MaxRangeAboveTarget;
    FVector TempStorage;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetPointAboveTarget(int32 EntryPoint);
};

#endif
