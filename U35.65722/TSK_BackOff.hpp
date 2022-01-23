#ifndef UE4SS_SDK_TSK_BackOff_HPP
#define UE4SS_SDK_TSK_BackOff_HPP

class UTSK_BackOff_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector DangerKey;
    float Distance;
    float WaitAfterFleeing;
    float RandomWaitTime;

    void SetBackOffFalse(class AController* Controller, FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void OutsideDanger(class AActor* Pawn, bool& res, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void PathDone(bool success);
    void RefreshDest();
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_BackOff(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, FExecuteUbergraph_TSK_BackOffK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_OutsideDanger_res, class ADeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Success, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, bool CallFunc_BackOffFrom_ReturnValue, class ADeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Multiply_FloatFloat_ReturnValue, FExecuteUbergraph_TSK_BackOffK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

#endif
