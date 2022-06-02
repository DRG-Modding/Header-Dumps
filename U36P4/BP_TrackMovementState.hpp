#ifndef UE4SS_SDK_BP_TrackMovementState_HPP
#define UE4SS_SDK_BP_TrackMovementState_HPP

class UBP_TrackMovementState_C : public UTrackMovementStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TrackMovementState(int32 EntryPoint);
};

#endif
