#ifndef UE4SS_SDK_BP_TentacleMeleeAttack_HPP
#define UE4SS_SDK_BP_TentacleMeleeAttack_HPP

class UBP_TentacleMeleeAttack_C : public UDamageAttackComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveAttackTarget(class AActor* Target);
    void ExecuteUbergraph_BP_TentacleMeleeAttack(int32 EntryPoint);
};

#endif
