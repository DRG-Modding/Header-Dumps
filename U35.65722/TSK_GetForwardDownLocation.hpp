#ifndef UE4SS_SDK_TSK_GetForwardDownLocation_HPP
#define UE4SS_SDK_TSK_GetForwardDownLocation_HPP

class UTSK_GetForwardDownLocation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector LocationKey;
    FBlackboardKeySelector TargetKey;
    FVector targetloc;
    bool ToTarget;
    bool Continue;
    FVector Location;

    void GetEnd(FVector PawnLocation, FVector TargetLocation, FVector PawnForward, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_Normal_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetForwardDownLocation(int32 EntryPoint, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, FVector CallFunc_GetActorForwardVector_ReturnValue, class UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FCSGRaycastHitInfo CallFunc_Linecast_hitInfo, bool CallFunc_Linecast_ReturnValue, FVector CallFunc_FindNearestPathfinderPointOverrideType_ReturnValue);
};

#endif
