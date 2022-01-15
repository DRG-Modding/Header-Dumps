#ifndef UE4SS_SDK_ENE_Mactera_TripleShooter_HPP
#define UE4SS_SDK_ENE_Mactera_TripleShooter_HPP

class AENE_Mactera_TripleShooter_C : UENE_Mactera_Shooter_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UProjectileAttackComponent* ProjectileAttack;

    void MakeElite();
    void ExecuteUbergraph_ENE_Mactera_TripleShooter(int32 EntryPoint, UAttackBaseComponent* CallFunc_ReplaceAttackComponent_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
