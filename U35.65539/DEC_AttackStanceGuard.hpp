#ifndef UE4SS_SDK_DEC_AttackStanceGuard_HPP
#define UE4SS_SDK_DEC_AttackStanceGuard_HPP

class UDEC_AttackStanceGuard_C : UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    bool PerformConditionCheckAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveExecutionFinishAI(UAIController* OwnerController, APawn* ControlledPawn, uint8 NodeResult);
    void ExecuteUbergraph_DEC_AttackStanceGuard(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, uint8 K2Node_Event_NodeResult, bool K2Node_SwitchEnum_CmpSuccess, UDeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess);
}

#endif
