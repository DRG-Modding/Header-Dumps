#ifndef UE4SS_SDK_DEC_SetLookAtTarget_HPP
#define UE4SS_SDK_DEC_SetLookAtTarget_HPP

class UDEC_SetLookAtTarget_C : public UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    void ExecuteUbergraph_DEC_SetLookAtTarget(int32 EntryPoint, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, TEnumAsByte<EBTNodeResult::Type> K2Node_Event_NodeResult, class AENE_Spider_Shooter_C* K2Node_DynamicCast_AsENE_Spider_Shooter, bool K2Node_DynamicCast_bSuccess, class AENE_Spider_Shooter_C* K2Node_DynamicCast_AsENE_Spider_Shooter_1, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
