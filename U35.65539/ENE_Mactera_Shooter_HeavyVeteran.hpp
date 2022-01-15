#ifndef UE4SS_SDK_ENE_Mactera_Shooter_HeavyVeteran_HPP
#define UE4SS_SDK_ENE_Mactera_Shooter_HeavyVeteran_HPP

class AENE_Mactera_Shooter_HeavyVeteran_C : UENE_Mactera_Shooter_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBP_Mactera_Heavy_ProjectileAttack_C* Mactera_Heavy_ProjectileAttack;
    UArmorHealthDamageComponent* ArmorHealthDamage;
    bool DoEliteExplosion;

    void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void MakeElite();
    void Death_Normal();
    void ExecuteUbergraph_ENE_Mactera_Shooter_HeavyVeteran(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, FName K2Node_ComponentBoundEvent_name, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable);
}

#endif
