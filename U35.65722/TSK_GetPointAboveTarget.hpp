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
    void ExecuteUbergraph_TSK_GetPointAboveTarget(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, FString CallFunc_GetObjectName_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class ADeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GetRandomReachablePointAtApproximateDistance_Async_success, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_Async_outPos, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, FCSGRaycastHitInfo CallFunc_Linecast_hitInfo, bool CallFunc_Linecast_ReturnValue, FVector CallFunc_FindNearestPathfinderPoint_ReturnValue);
};

#endif
