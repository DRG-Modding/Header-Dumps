#ifndef UE4SS_SDK_BP_FrozenState_HPP
#define UE4SS_SDK_BP_FrozenState_HPP

class UBP_FrozenState_C : public UFrozenStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveStateEnter();
    void ReceiveStateExit();
    void ReceiveOnDefrosting();
    void ExecuteUbergraph_BP_FrozenState(int32 EntryPoint);
};

#endif
