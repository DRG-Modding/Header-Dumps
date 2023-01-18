#ifndef UE4SS_SDK_EWC_Escort_DigPhase_HPP
#define UE4SS_SDK_EWC_Escort_DigPhase_HPP

class UEWC_Escort_DigPhase_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector FirstSpawnLocationOverride;
    float DelayBetweenWaves;
    int32 WaveCountConstantPressure;
    class AActor* Drilldozer;
    class AAIC_EscortMule_C* DrilldoserAIC;
    int32 WaveCountBigTunnelWave;

    void StartWave();
    void SpawnWaves();
    void LoopSpawnWaves();
    void OnWaveCompleted();
    void ExecuteUbergraph_EWC_Escort_DigPhase(int32 EntryPoint);
};

#endif
