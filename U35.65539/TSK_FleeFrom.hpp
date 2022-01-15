#ifndef UE4SS_SDK_TSK_FleeFrom_HPP
#define UE4SS_SDK_TSK_FleeFrom_HPP

class UTSK_FleeFrom_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector DangerKey;
    float Distance;
    float WaitAfterFleeing;
    float RandomWaitTime;

    FVector GetDanagerLocation(AActor* NewLocalVar_0, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void SetFleeFalse(AController* Controller, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void OutsideDanger(AActor* Pawn, bool& res, FVector CallFunc_GetDanagerLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void PathDone(bool success);
    void RefreshDest();
    void ReceiveAbortAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FleeFrom(int32 EntryPoint, FVector CallFunc_GetDanagerLocation_ReturnValue, RefreshDestination__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UAIController* K2Node_Event_OwnerController_1, APawn* K2Node_Event_ControlledPawn_1, bool CallFunc_OutsideDanger_res, UDeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Success, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, bool CallFunc_StartFleeFrom_ReturnValue, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UDeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character_1, bool K2Node_DynamicCast_bSuccess_1, PathFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
}

#endif
