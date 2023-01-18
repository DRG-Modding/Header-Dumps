#ifndef UE4SS_SDK_EWC_OverloadShieldGenerator_Facility_HPP
#define UE4SS_SDK_EWC_OverloadShieldGenerator_Facility_HPP

class UEWC_OverloadShieldGenerator_Facility_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_Facility_PowerStation_GeneratorBase_C* FromGenerator;
    float NextWaveValue;
    float OldProgress;
    int32 WaveCount;
    int32 WavesSent;
    FVector WaveOrigin;
    class UTetherComponent* origintether;
    class UEnemyGroupDescriptor* DroneWave;
    FVector DroneWaveOrigin;

    void SetWaveOrigin(class ABP_Facility_PowerStation_GeneratorBase_C* Generator, class UTetherComponent* tetherstart);
    void GetRandomPlayer(class APlayerCharacter*& NewParam, bool& PlayerFound);
    FVector Get Refinery Location();
    class UEnemyWaveManager* GetWaveManager();
    void OnWaveCompleted();
    void OnProgressPointReached(float hackProgress);
    void StartWave();
    void OnGeneratorSet(class ABP_Facility_PowerStation_GeneratorBase_C* Generator, class UTetherComponent* tetherstart);
    void ExecuteUbergraph_EWC_OverloadShieldGenerator_Facility(int32 EntryPoint);
};

#endif
