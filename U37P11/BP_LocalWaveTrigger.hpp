#ifndef UE4SS_SDK_BP_LocalWaveTrigger_HPP
#define UE4SS_SDK_BP_LocalWaveTrigger_HPP

class ABP_LocalWaveTrigger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void CheckForNearbyPlayers();
    void ExecuteUbergraph_BP_LocalWaveTrigger(int32 EntryPoint);
};

#endif
