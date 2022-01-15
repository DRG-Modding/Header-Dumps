#ifndef UE4SS_SDK_TSK_FaceTargetToCarve_HPP
#define UE4SS_SDK_TSK_FaceTargetToCarve_HPP

class UTSK_FaceTargetToCarve_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetActorKey;
    float Angle;
    int32 Tries;
    bool FailIfCantTurn;
    int32 MaxTries;

    bool IsFacingTarget(AActor* TankFVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Vector_Normal2D_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Vector_Normal2D_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_DegAcos_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveAbortAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FaceTargetToCarve(int32 EntryPoint, UAIController* K2Node_Event_OwnerController_1, APawn* K2Node_Event_ControlledPawn_1, UAlignEnemyComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsFacingTarget_ReturnValue, UAlignEnemyComponent* CallFunc_GetComponentByClass_ReturnValue_1, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UAlignEnemyComponent* CallFunc_GetComponentByClass_ReturnValue_2, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif
