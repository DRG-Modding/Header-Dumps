#ifndef UE4SS_SDK_ENE_Mactera_Shooter_Normal_HPP
#define UE4SS_SDK_ENE_Mactera_Shooter_Normal_HPP

class AENE_Mactera_Shooter_Normal_C : UENE_Mactera_Shooter_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UProjectileAttackComponent* ProjectileAttack;

    void MakeElite();
    void ExecuteUbergraph_ENE_Mactera_Shooter_Normal(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UAttackBaseComponent* CallFunc_ReplaceAttackComponent_ReturnValue);
}

#endif
