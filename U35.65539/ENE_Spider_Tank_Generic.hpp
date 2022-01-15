#ifndef UE4SS_SDK_ENE_Spider_Tank_Generic_HPP
#define UE4SS_SDK_ENE_Spider_Tank_Generic_HPP

class AENE_Spider_Tank_Generic_C : UENE_Spider_Tank_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMeleeAttackComponent* BiteAttack;
    UMeleeAttackComponent* StabAttack;

    void ReceiveBeginPlay();
    void MakeElite();
    void ExecuteUbergraph_ENE_Spider_Tank_Generic(int32 EntryPoint, UDamageBonusBase* CallFunc_AddDamageBonusToComponent_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UKnockbackDamageBonus* K2Node_DynamicCast_AsKnockback_Damage_Bonus, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue_1, UDamageBonusBase* CallFunc_AddDamageBonusToComponent_ReturnValue_1, UKnockbackDamageBonus* K2Node_DynamicCast_AsKnockback_Damage_Bonus_1, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
