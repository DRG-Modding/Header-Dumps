#ifndef UE4SS_SDK_EWC_HackBuilding_HPP
#define UE4SS_SDK_EWC_HackBuilding_HPP

class UEWC_HackBuilding_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_Facility_PowerStation_GeneratorBase_C* FromGenerator;
    FVector WaveOrigin;
    class UTetherComponent* origintether;
    class UEnemyGroupDescriptor* DroneWave;
    class ABP_Facility_PowerStation_GeneratorBase_C* Generator;

    void SpawnWave(float Difficulty, bool IsConstantPressure);
    void SetWaveOrigin(class ABP_Facility_PowerStation_GeneratorBase_C* Generator, class UTetherComponent* tetherstart);
    void GetRandomPlayer(class APlayerCharacter*& NewParam, bool& PlayerFound);
    FVector Get Refinery Location();
    class UEnemyWaveManager* GetWaveManager();
    void OnWaveCompleted();
    void OnGeneratorSet(class ABP_Facility_PowerStation_GeneratorBase_C* Generator, class UTetherComponent* tetherstart);
    void OnThirdReached(float hackProgress);
    void StartWave();
    void ExecuteUbergraph_EWC_HackBuilding(int32 EntryPoint);
};

#endif
