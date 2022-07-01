#ifndef UE4SS_SDK_BP_Boss_AoEAttack_HPP
#define UE4SS_SDK_BP_Boss_AoEAttack_HPP

class UBP_Boss_AoEAttack_C : public USpecialDamageAttackComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UAnimMontage*> SPMontages;

    class UAnimMontage* SelectMontage();
    void Receive_OnPerformAttack();
    void ExecuteUbergraph_BP_Boss_AoEAttack(int32 EntryPoint);
};

#endif
