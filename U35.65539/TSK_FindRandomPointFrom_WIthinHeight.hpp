#ifndef UE4SS_SDK_TSK_FindRandomPointFrom_WIthinHeight_HPP
#define UE4SS_SDK_TSK_FindRandomPointFrom_WIthinHeight_HPP

class UTSK_FindRandomPointFrom_WithinHeight_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float MaxHeightDiff;
    float Distance;
    bool SnapToCeiling;
    bool FindAtDistance;
    FBlackboardKeySelector FromLocationKey;
    FBlackboardKeySelector NewLocationKey;
    FVector Temp;
    int32 Attempts;
    int32 MaxAttempts;
    FVector Origin;

    void PassHeightCheck(FVector Candidate, FVector Origin, bool& pass, FVector TargetPos, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    FVector GetLocation(bool Temp_bool_Variable, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector K2Node_Select_Default);
    void snap(bool SnapToCeiling, UDeepPathfinderMovement* Pathfinder, FVector& Location, FVector CallFunc_FindPathfinderPointAbove_ReturnValue);
    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindRandomPointFrom_WithinHeight(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UDeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_GetLocation_ReturnValue, bool CallFunc_GetRandomReachablePointAtApproximateDistance_Async_success, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_Async_outPos, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, FVector CallFunc_FindRandomPositionOnNavmeshAtDistance_ReturnValue, bool CallFunc_PassHeightCheck_Pass);
}

#endif
