#ifndef UE4SS_SDK_DEC_IsAttackOffCooldown_HPP
#define UE4SS_SDK_DEC_IsAttackOffCooldown_HPP

class UDEC_IsAttackOffCooldown_C : UBTDecorator_BlueprintBase
{
    bool Any;
    FName AttackName;

    bool PerformConditionCheckAI(UAIController* OwnerController, APawn* ControlledPawnbool Temp_bool_Variable, UAttackCooldownComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAttackOffCooldown_ReturnValue, bool CallFunc_IsAnyAttackOffCooldown_ReturnValue, bool K2Node_Select_Default);
}

#endif
