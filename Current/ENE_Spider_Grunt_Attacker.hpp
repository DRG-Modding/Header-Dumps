#ifndef UE4SS_SDK_ENE_Spider_Grunt_Attacker_HPP
#define UE4SS_SDK_ENE_Spider_Grunt_Attacker_HPP

class AENE_Spider_Grunt_Attacker_C : public AENE_Spider_Grunt_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeleeAttackComponent* MeleeAttack;
    class USimpleArmorDamageComponent* SimpleArmorDamage;

    void MakeElite();
    void ExecuteUbergraph_ENE_Spider_Grunt_Attacker(int32 EntryPoint);
};

#endif
