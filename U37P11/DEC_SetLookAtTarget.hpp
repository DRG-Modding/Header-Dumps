#ifndef UE4SS_SDK_DEC_SetLookAtTarget_HPP
#define UE4SS_SDK_DEC_SetLookAtTarget_HPP

class UDEC_SetLookAtTarget_C : public UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    void ExecuteUbergraph_DEC_SetLookAtTarget(int32 EntryPoint);
};

#endif
