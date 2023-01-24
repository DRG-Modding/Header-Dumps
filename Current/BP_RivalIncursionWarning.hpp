#ifndef UE4SS_SDK_BP_RivalIncursionWarning_HPP
#define UE4SS_SDK_BP_RivalIncursionWarning_HPP

class UBP_RivalIncursionWarning_C : public URunningMissionBP
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyGroupDescriptor* EnemyDescriptor;
    float MinSpawnTimerNoTurrets;
    float MaxSpawnTimerNoTurrets;
    bool SpawnTurrets;
    float MinSpawnTimerWithTurrets;
    float MaxSpawnTimerWithTurrets;
    float TimeToNextBotWave;

    void StartLogic();
    void StartTimer();
    void SpawnRivalBots();
    void FirstSpawn();
    void ExecuteUbergraph_BP_RivalIncursionWarning(int32 EntryPoint);
};

#endif
