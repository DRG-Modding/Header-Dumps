#ifndef UE4SS_SDK_BP_Tentacle_RangedAttack_HPP
#define UE4SS_SDK_BP_Tentacle_RangedAttack_HPP

class UBP_Tentacle_RangedAttack_C : public UProjectileAttackBaseComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle LookAtHandle;

    void ReceiveAttackTarget(class AActor* Target);
    void ReceiveCompleteAttack();
    void ReceiveAbortAttack();
    void Face();
    void ExecuteUbergraph_BP_Tentacle_RangedAttack(int32 EntryPoint);
};

#endif
