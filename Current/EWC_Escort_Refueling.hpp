#ifndef UE4SS_SDK_EWC_Escort_Refueling_HPP
#define UE4SS_SDK_EWC_Escort_Refueling_HPP

class UEWC_Escort_Refueling_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector TunnelEntranceLocation;
    float DelayBetweenWaves;
    int32 WaveCountConstantPressure;
    class AActor* Drilldozer;
    bool LargeWaveInProgress;

    void StartWave();
    void OnWaveCompleted();
    void ExecuteUbergraph_EWC_Escort_Refueling(int32 EntryPoint);
};

#endif
