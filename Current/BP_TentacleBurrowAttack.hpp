#ifndef UE4SS_SDK_BP_TentacleBurrowAttack_HPP
#define UE4SS_SDK_BP_TentacleBurrowAttack_HPP

class UBP_TentacleBurrowAttack_C : public UAttackBaseComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveAttackTarget(class AActor* Target);
    void ExecuteUbergraph_BP_TentacleBurrowAttack(int32 EntryPoint);
};

#endif
