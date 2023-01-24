#ifndef UE4SS_SDK_TSK_GetPointOppositeOfTarget_HPP
#define UE4SS_SDK_TSK_GetPointOppositeOfTarget_HPP

class UTSK_GetPointOppositeOfTarget_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;
    FBlackboardKeySelector DestinationKey;
    FBlackboardKeySelector ContinueKey;
    FVector Direction;
    FVector Location;
    float DistanceBehindTarget;
    float MinHeightAboveTarget;
    float MaxHeightAboveTarget;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetPointOppositeOfTarget(int32 EntryPoint);
};

#endif
