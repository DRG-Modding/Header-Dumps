#ifndef UE4SS_SDK_ENE_Spider_Grunt_Guard_HPP
#define UE4SS_SDK_ENE_Spider_Grunt_Guard_HPP

class AENE_Spider_Grunt_Guard_C : public AENE_Spider_Grunt_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeleeAttackComponent* MeleeAttack;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UInDangerComponent* InDanger;

    void PlayGuardAnimation(class USpiderAnimInstance* AnimInstance, float Duration, float& outDuration);
    void BndEvt__InDanger_K2Node_ComponentBoundEvent_0_IsInDangerSig__DelegateSignature();
    void MakeElite();
    void ExecuteUbergraph_ENE_Spider_Grunt_Guard(int32 EntryPoint);
};

#endif
