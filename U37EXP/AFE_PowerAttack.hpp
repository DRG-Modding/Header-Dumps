#ifndef UE4SS_SDK_AFE_PowerAttack_HPP
#define UE4SS_SDK_AFE_PowerAttack_HPP

class UAFE_PowerAttack_C : public UAfflictionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginEffect(class UPawnAfflictionComponent* Target);
    void ReceiveEndEffect(class UPawnAfflictionComponent* Target);
    void ExecuteUbergraph_AFE_PowerAttack(int32 EntryPoint);
};

#endif
