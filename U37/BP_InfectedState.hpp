#ifndef UE4SS_SDK_BP_InfectedState_HPP
#define UE4SS_SDK_BP_InfectedState_HPP

class UBP_InfectedState_C : public UInfectedStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveStateEnter();
    void ReceiveStateExit();
    void ExecuteUbergraph_BP_InfectedState(int32 EntryPoint);
};

#endif
