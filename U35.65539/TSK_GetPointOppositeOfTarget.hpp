#ifndef UE4SS_SDK_TSK_GetPointOppositeOfTarget_HPP
#define UE4SS_SDK_TSK_GetPointOppositeOfTarget_HPP

class UTSK_GetPointOppositeOfTarget_C : UBTTask_BlueprintBase
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

    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetPointOppositeOfTarget(int32 EntryPoint, FVector CallFunc_Multiply_VectorFloat_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, FVector CallFunc_Add_VectorVector_ReturnValue_1, UDeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, FCSGRaycastHitInfo CallFunc_Linecast_hitInfo, bool CallFunc_Linecast_ReturnValue, FVector CallFunc_FindNearestPathfinderPoint_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_FindNearestPathfinderPoint_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Normal_ReturnValue);
}

#endif
