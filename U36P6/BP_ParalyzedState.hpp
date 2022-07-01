#ifndef UE4SS_SDK_BP_ParalyzedState_HPP
#define UE4SS_SDK_BP_ParalyzedState_HPP

class UBP_ParalyzedState_C : public UParalyzedStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FRotator StoredRotation;
    float Camera Arm Y Rotation ;

    void ReceiveStateEnter();
    void ReceiveStateExit();
    void ExecuteUbergraph_BP_ParalyzedState(int32 EntryPoint);
};

#endif
