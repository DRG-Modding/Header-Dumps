#ifndef UE4SS_SDK_TSK_FindRandomPoint_HPP
#define UE4SS_SDK_TSK_FindRandomPoint_HPP

class UTSK_FindRandomPoint_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector LocationKey;
    float Distance;
    bool SnapToCeiling;
    EOffsetFrom offsetFrom;
    float OffsetFromDistance;

    void snap(bool SnapToCeiling, UDeepPathfinderMovement* Pathfinder, FVector& Location, FVector CallFunc_FindPathfinderPointAbove_ReturnValue);
    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindRandomPoint(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_GetRandomReachablePointAtApproximateDistance_Async_success, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_Async_outPos, FVector CallFunc_FindPathfinderOffsetPoint_ReturnValue);
}

#endif
