#ifndef UE4SS_SDK_BP_Meet_Attack_HPP
#define UE4SS_SDK_BP_Meet_Attack_HPP

class UBP_Meet_Attack_C : public UAttackBaseComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float BurrowDuration;

    void ReceiveAbortAttack();
    void StartMeeting();
    void OnUnburrowed(bool IsEmerging);
    void OnBurrowedDone(bool IsEmerging);
    void ReceiveAttackTarget(class AActor* Target);
    void ExecuteUbergraph_BP_Meet_Attack(int32 EntryPoint);
};

#endif
