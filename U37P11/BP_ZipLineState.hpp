#ifndef UE4SS_SDK_BP_ZipLineState_HPP
#define UE4SS_SDK_BP_ZipLineState_HPP

class UBP_ZipLineState_C : public UZipLineStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    FVector GetJumpVector(FVector LookVector, FVector CurrentVelocity);
    void ReceiveSpeedBoostActivated();
    void ReceiveSpeedBoostDeactivated();
    void ExecuteUbergraph_BP_ZipLineState(int32 EntryPoint);
};

#endif
