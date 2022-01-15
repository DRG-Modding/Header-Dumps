#ifndef UE4SS_SDK_TSK_FindRandomPointFrom_HPP
#define UE4SS_SDK_TSK_FindRandomPointFrom_HPP

class UTSK_FindRandomPointFrom_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Distance;
    bool SnapToCeiling;
    bool FindAtDistance;
    FBlackboardKeySelector FromLocationKey;
    FBlackboardKeySelector NewLocationKey;

    FVector GetLocation(AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void snap(bool SnapToCeiling, UDeepPathfinderMovement* Pathfinder, FVector& Location, FVector CallFunc_FindPathfinderPointAbove_ReturnValue);
    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindRandomPointFrom(int32 EntryPoint, FVector CallFunc_GetLocation_ReturnValue, FVector CallFunc_FindRandomPositionOnNavmeshAtDistance_ReturnValue, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UDeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetRandomReachablePointAtApproximateDistance_Async_success, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_Async_outPos);
}

#endif
