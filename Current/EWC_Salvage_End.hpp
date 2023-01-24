#ifndef UE4SS_SDK_EWC_Salvage_End_HPP
#define UE4SS_SDK_EWC_Salvage_End_HPP

class UEWC_Salvage_End_C : public UEnemyWaveController
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    class UEnemyGroupDescriptor* EnemyGroup;
    int32 WaveCountConstantPressure;
    int32 WaveCountWaves;

    void StartWave();
    void ExecuteUbergraph_EWC_Salvage_End(int32 EntryPoint);
};

#endif
