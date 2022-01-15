#ifndef UE4SS_SDK_DEC_SetAttackStance_HPP
#define UE4SS_SDK_DEC_SetAttackStance_HPP

class UDEC_SetAttackStance_C : UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector AttackingKey;

    bool PerformConditionCheckAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveExecutionStartAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_DEC_SetAttackStance(int32 EntryPoint, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue);
}

#endif
