#ifndef UE4SS_SDK_DEC_SetAttackStance_HPP
#define UE4SS_SDK_DEC_SetAttackStance_HPP

class UDEC_SetAttackStance_C : public UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector AttackingKey;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_DEC_SetAttackStance(int32 EntryPoint, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue);
};

#endif
