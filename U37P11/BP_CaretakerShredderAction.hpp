#ifndef UE4SS_SDK_BP_CaretakerShredderAction_HPP
#define UE4SS_SDK_BP_CaretakerShredderAction_HPP

class UBP_CaretakerShredderAction_C : public UBP_CaretakerActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle SpawnTimer;

    void LaunchWave(int32 WaveSize);
    void OnTriggered();
    void OnStarted();
    void OnStopped();
    void SpawnMore();
    void ActivateLights();
    void DeactivateLights();
    void ExecuteUbergraph_BP_CaretakerShredderAction(int32 EntryPoint);
};

#endif
