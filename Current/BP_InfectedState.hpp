#ifndef UE4SS_SDK_BP_InfectedState_HPP
#define UE4SS_SDK_BP_InfectedState_HPP

class UBP_InfectedState_C : public UInfectedStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle HandleStartDamage;
    float GracePeriod;

    void ReceiveStateEnter();
    void ReceiveStateExit();
    void StartDamage();
    void ExecuteUbergraph_BP_InfectedState(int32 EntryPoint);
};

#endif
