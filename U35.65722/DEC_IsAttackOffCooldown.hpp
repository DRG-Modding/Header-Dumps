#ifndef UE4SS_SDK_DEC_IsAttackOffCooldown_HPP
#define UE4SS_SDK_DEC_IsAttackOffCooldown_HPP

class UDEC_IsAttackOffCooldown_C : public UBTDecorator_BlueprintBase
{
    bool Any;
    FName AttackName;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawnbool Temp_bool_Variable, class UAttackCooldownComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAttackOffCooldown_ReturnValue, bool CallFunc_IsAnyAttackOffCooldown_ReturnValue, bool K2Node_Select_Default);
};

#endif
