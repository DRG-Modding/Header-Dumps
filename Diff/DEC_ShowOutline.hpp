#ifndef UE4SS_SDK_DEC_ShowOutline_HPP
#define UE4SS_SDK_DEC_ShowOutline_HPP

class UDEC_ShowOutline_C : public UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    void ExecuteUbergraph_DEC_ShowOutline(int32 EntryPoint);
};

#endif
