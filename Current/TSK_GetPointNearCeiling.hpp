#ifndef UE4SS_SDK_TSK_GetPointNearCeiling_HPP
#define UE4SS_SDK_TSK_GetPointNearCeiling_HPP

class UTSK_GetPointNearCeiling_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float SearchRadius;
    float CeilingMaxDistance;
    FBlackboardKeySelector TargetKey;
    FBlackboardKeySelector DestinationKey;
    float MinHeightBelowCeiling;
    float MaxHeightBelowCeiling;
    FVector TargetLocation;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetPointNearCeiling(int32 EntryPoint);
};

#endif
