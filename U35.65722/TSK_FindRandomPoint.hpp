#ifndef UE4SS_SDK_TSK_FindRandomPoint_HPP
#define UE4SS_SDK_TSK_FindRandomPoint_HPP

class UTSK_FindRandomPoint_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector LocationKey;
    float Distance;
    bool SnapToCeiling;
    EOffsetFrom offsetFrom;
    float OffsetFromDistance;

    void snap(bool SnapToCeiling, class UDeepPathfinderMovement* Pathfinder, FVector& Location, FVector CallFunc_FindPathfinderPointAbove_ReturnValue);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindRandomPoint(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_GetRandomReachablePointAtApproximateDistance_Async_success, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_Async_outPos, FVector CallFunc_FindPathfinderOffsetPoint_ReturnValue);
};

#endif
