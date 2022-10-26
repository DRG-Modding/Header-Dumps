#ifndef UE4SS_SDK_BP_EventSpawnTimer_HPP
#define UE4SS_SDK_BP_EventSpawnTimer_HPP

class ABP_EventSpawnTimer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float MaxTime;
    float MinTime;
    float ReAttemtTime;
    float RetriggerEventChance;
    TSubclassOf<class AActor> Class;
    bool CarelessSpawn;
    FTimerHandle Handle_SpawnTime;
    bool SpawnOnBeginPlay;
    bool CanSpawnAfterPrimaryMissionComplete;
    bool HasSpawnedSecond;
    int32 MaxRetriggerTimes;
    int32 ReTriggers;

    void CheckAllowedToSpawn(bool& Allowed);
    FTransform GetSpawnTransform();
    void ReceiveBeginPlay();
    void SpawnEvent();
    void Match Started();
    void SpawnImmediately();
    void StartTimer();
    void EnableRetrigger();
    void ExecuteUbergraph_BP_EventSpawnTimer(int32 EntryPoint);
};

#endif
