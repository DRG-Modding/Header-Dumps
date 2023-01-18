#ifndef UE4SS_SDK_EWC_Spiders_Motherlode_HPP
#define UE4SS_SDK_EWC_Spiders_Motherlode_HPP

class UEWC_Spiders_Motherlode_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 WaveCountConstantPressure;
    int32 WaveCountWaves;

    class UEnemyWaveManager* GetWaveManager();
    void StartWave();
    void ExecuteUbergraph_EWC_Spiders_Motherlode(int32 EntryPoint);
};

#endif
