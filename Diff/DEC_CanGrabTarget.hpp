#ifndef UE4SS_SDK_DEC_CanGrabTarget_HPP
#define UE4SS_SDK_DEC_CanGrabTarget_HPP

class UDEC_CanGrabTarget_C : public UBTDecorator_BlueprintBase
{
    FBlackboardKeySelector Target;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

#endif
