#ifndef UE4SS_SDK_EWC_PumpSequence_ConstantPresure_Refinery_HPP
#define UE4SS_SDK_EWC_PumpSequence_ConstantPresure_Refinery_HPP

class UEWC_PumpSequence_ConstantPresure_Refinery_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 WaveCountConstantPressure;
    int32 WaveCountWaves;
    FTimerHandle ConstantWaveTimer;
    FTimerHandle WaveTimer;

    FVector Get Refinery Location();
    class UEnemyWaveManager* GetWaveManager();
    void StartWave();
    void OnWaveCompleted();
    void ExecuteUbergraph_EWC_PumpSequence_ConstantPresure_Refinery(int32 EntryPoint);
};

#endif
