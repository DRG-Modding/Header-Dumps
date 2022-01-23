#ifndef UE4SS_SDK_TSK_FleeFrom_HPP
#define UE4SS_SDK_TSK_FleeFrom_HPP

class UTSK_FleeFrom_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector DangerKey;
    float Distance;
    float WaitAfterFleeing;
    float RandomWaitTime;

    FVector GetDanagerLocation(class AActor* NewLocalVar_0, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void SetFleeFalse(class AController* Controller, FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void OutsideDanger(class AActor* Pawn, bool& res, FVector CallFunc_GetDanagerLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void PathDone(bool success);
    void RefreshDest();
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FleeFrom(int32 EntryPoint, FVector CallFunc_GetDanagerLocation_ReturnValue, FExecuteUbergraph_TSK_FleeFromK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, bool CallFunc_OutsideDanger_res, class ADeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Success, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, bool CallFunc_StartFleeFrom_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ADeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character_1, bool K2Node_DynamicCast_bSuccess_1, FExecuteUbergraph_TSK_FleeFromK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

#endif
