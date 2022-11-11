#ifndef UE4SS_SDK_EWC_ShieledGenerator_DronePresure_Facility_HPP
#define UE4SS_SDK_EWC_ShieledGenerator_DronePresure_Facility_HPP

class UEWC_ShieledGenerator_DronePresure_Facility_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 WaveCountConstantPressure;
    int32 WaveCountWaves;
    FTimerHandle ConstantWaveTimer;
    FTimerHandle WaveTimer;

    FVector Get Refinery Location();
    void StartWave();
    void OnWaveCompleted();
    void ExecuteUbergraph_EWC_ShieledGenerator_DronePresure_Facility(int32 EntryPoint);
};

#endif
