#ifndef UE4SS_SDK_ENE_Mactera_Shooter_HeavyVeteran_HPP
#define UE4SS_SDK_ENE_Mactera_Shooter_HeavyVeteran_HPP

class AENE_Mactera_Shooter_HeavyVeteran_C : public AENE_Mactera_Shooter_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Mactera_Heavy_ProjectileAttack_C* Mactera_Heavy_ProjectileAttack;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    bool DoEliteExplosion;

    void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void MakeElite();
    void Death Normal();
    void ExecuteUbergraph_ENE_Mactera_Shooter_HeavyVeteran(int32 EntryPoint);
};

#endif
