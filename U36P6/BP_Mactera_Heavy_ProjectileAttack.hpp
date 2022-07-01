#ifndef UE4SS_SDK_BP_Mactera_Heavy_ProjectileAttack_HPP
#define UE4SS_SDK_BP_Mactera_Heavy_ProjectileAttack_HPP

class UBP_Mactera_Heavy_ProjectileAttack_C : public UProjectileAttackComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimMontage* BrokenAmorMontage;
    bool ArmorBroken;

    void SetArmorBroken(bool Broken);
    class UAnimMontage* SelectMontage();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Mactera_Heavy_ProjectileAttack(int32 EntryPoint);
};

#endif
