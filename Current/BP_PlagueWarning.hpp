#ifndef UE4SS_SDK_BP_PlagueWarning_HPP
#define UE4SS_SDK_BP_PlagueWarning_HPP

class UBP_PlagueWarning_C : public URunningMissionBP
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyGroupDescriptor* EnemyDescriptor;
    float MinSpawnTimerNoTurrets;
    float MaxSpawnTimerNoTurrets;
    bool SpawnTurrets;
    float MinSpawnTimerWithTurrets;
    float MaxSpawnTimerWithTurrets;
    int32 testInt;
    class UPlagueObjective* PlagueObj;
    FTimerHandle InfectedLoopTimer;

    void SpawnInfectedEnemies();
    void FirstSpawn();
    void StartTimer();
    void StartLogic();
    void CheckIfTargetingPlague();
    void CustomEvent_0();
    void FirstPlayerNear Tower(class AActor* SporeTower);
    void PlagueCenterKilled(class AActor* SporeTower);
    void ResetLoopTimer();
    void ExecuteUbergraph_BP_PlagueWarning(int32 EntryPoint);
};

#endif
