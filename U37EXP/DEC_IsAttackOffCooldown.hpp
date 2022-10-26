#ifndef UE4SS_SDK_DEC_IsAttackOffCooldown_HPP
#define UE4SS_SDK_DEC_IsAttackOffCooldown_HPP

class UDEC_IsAttackOffCooldown_C : public UBTDecorator_BlueprintBase
{
    bool Any;
    FName AttackName;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

#endif
