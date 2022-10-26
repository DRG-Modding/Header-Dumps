#ifndef UE4SS_SDK_EWC_BombEvent_HPP
#define UE4SS_SDK_EWC_BombEvent_HPP

class UEWC_BombEvent_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector WaveOrigin;
    int32 NumWaves;

    void SpawnWave(float Difficulty, bool IsConstantPressure);
    void SetWaveOrigin(FVector NewOrigin);
    void GetRandomPlayer(class APlayerCharacter*& NewParam, bool& PlayerFound);
    FVector Get Refinery Location();
    class UEnemyWaveManager* GetWaveManager();
    void StartWave();
    void OnWaveCompleted();
    void ExecuteUbergraph_EWC_BombEvent(int32 EntryPoint);
};

#endif
