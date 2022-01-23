#ifndef UE4SS_SDK_DEC_AttackStanceGuard_HPP
#define UE4SS_SDK_DEC_AttackStanceGuard_HPP

class UDEC_AttackStanceGuard_C : public UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    void ExecuteUbergraph_DEC_AttackStanceGuard(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, TEnumAsByte<EBTNodeResult::Type> K2Node_Event_NodeResult, bool K2Node_SwitchEnum_CmpSuccess, class ADeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess);
};

#endif
