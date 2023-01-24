#ifndef UE4SS_SDK_EWC_Refinery_End_HPP
#define UE4SS_SDK_EWC_Refinery_End_HPP

class UEWC_Refinery_End_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    int32 WaveCountConstantPressure;
    int32 WaveCountWaves;

    void StartWave();
    void ExecuteUbergraph_EWC_Refinery_End(int32 EntryPoint);
};

#endif
