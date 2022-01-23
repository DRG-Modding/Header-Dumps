#ifndef UE4SS_SDK_TSK_FindRandomPointFrom_HPP
#define UE4SS_SDK_TSK_FindRandomPointFrom_HPP

class UTSK_FindRandomPointFrom_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Distance;
    bool SnapToCeiling;
    bool FindAtDistance;
    FBlackboardKeySelector FromLocationKey;
    FBlackboardKeySelector NewLocationKey;

    FVector GetLocation(class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void snap(bool SnapToCeiling, class UDeepPathfinderMovement* Pathfinder, FVector& Location, FVector CallFunc_FindPathfinderPointAbove_ReturnValue);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindRandomPointFrom(int32 EntryPoint, FVector CallFunc_GetLocation_ReturnValue, FVector CallFunc_FindRandomPositionOnNavmeshAtDistance_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ADeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetRandomReachablePointAtApproximateDistance_Async_success, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_Async_outPos);
};

#endif
