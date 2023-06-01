#ifndef UE4SS_SDK_DEC_IsPlayerTargetIncapacitated_HPP
#define UE4SS_SDK_DEC_IsPlayerTargetIncapacitated_HPP

class UDEC_IsPlayerTargetIncapacitated_C : public UBTDecorator_BlueprintBase
{
    FBlackboardKeySelector TargetKey;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

#endif
