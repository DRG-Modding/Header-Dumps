#ifndef UE4SS_SDK_DEC_UprightCheck_HPP
#define UE4SS_SDK_DEC_UprightCheck_HPP

class UDEC_UprightCheck_C : public UBTDecorator_BlueprintBase
{
    float ZComponent;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

#endif
