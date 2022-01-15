#ifndef UE4SS_SDK_TSK_BackOff_HPP
#define UE4SS_SDK_TSK_BackOff_HPP

class UTSK_BackOff_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector DangerKey;
    float Distance;
    float WaitAfterFleeing;
    float RandomWaitTime;

    void SetBackOffFalse(AController* Controller, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void OutsideDanger(AActor* Pawn, bool& res, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void PathDone(bool success);
    void RefreshDest();
    void ReceiveAbortAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_BackOff(int32 EntryPoint, UAIController* K2Node_Event_OwnerController_1, APawn* K2Node_Event_ControlledPawn_1, RefreshDestination__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_OutsideDanger_res, UDeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Success, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue_1, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, bool CallFunc_BackOffFrom_ReturnValue, UDeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Multiply_FloatFloat_ReturnValue, PathFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
}

#endif
