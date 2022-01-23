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
    void ExecuteUbergraph_TSK_GetPointNearCeiling(int32 EntryPoint, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ADeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetRandomReachablePointAtApproximateDistance_Async_success, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_Async_outPos, FVector CallFunc_Add_VectorVector_ReturnValue, FCSGRaycastHitInfo CallFunc_Linecast_hitInfo, bool CallFunc_Linecast_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_FindNearestPathfinderPoint_ReturnValue);
};

#endif
