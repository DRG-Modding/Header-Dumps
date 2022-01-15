#ifndef UE4SS_SDK_BP_Mactera_Heavy_ProjectileAttack_HPP
#define UE4SS_SDK_BP_Mactera_Heavy_ProjectileAttack_HPP

class UBP_Mactera_Heavy_ProjectileAttack_C : UProjectileAttackComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAnimMontage* BrokenAmorMontage;
    bool ArmorBroken;

    void SetArmorBroken(bool Broken);
    UAnimMontage* SelectMontage(UAnimMontage* CallFunc_SelectMontage_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Mactera_Heavy_ProjectileAttack(int32 EntryPoint);
}

#endif
