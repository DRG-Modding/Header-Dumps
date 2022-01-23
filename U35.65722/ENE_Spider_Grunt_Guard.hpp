#ifndef UE4SS_SDK_ENE_Spider_Grunt_Guard_HPP
#define UE4SS_SDK_ENE_Spider_Grunt_Guard_HPP

class AENE_Spider_Grunt_Guard_C : public AENE_Spider_Grunt_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeleeAttackComponent* MeleeAttack;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UInDangerComponent* InDanger;

    void PlayGuardAnimation(class USpiderAnimInstance* AnimInstance, float Duration, float& outDuration, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_AddModifier_ReturnValue);
    void BndEvt__InDanger_K2Node_ComponentBoundEvent_0_IsInDangerSig__DelegateSignature();
    void MakeElite();
    void ExecuteUbergraph_ENE_Spider_Grunt_Guard(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USpiderAnimInstance* K2Node_DynamicCast_AsSpider_Anim_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_PlayGuardAnimation_outDuration, bool Temp_bool_IsClosed_Variable, class UDamageBonusBase* CallFunc_AddDamageBonusToComponent_ReturnValue, class UKnockbackDamageBonus* K2Node_DynamicCast_AsKnockback_Damage_Bonus, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Has_Been_Initd_Variable);
};

#endif
