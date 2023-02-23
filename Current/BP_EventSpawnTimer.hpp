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
    float MinTimeBetweenEvents;
    bool CarelessSpawn;
    FTimerHandle Handle_SpawnTime;
    bool SpawnOnBeginPlay;
    bool CanSpawnAfterPrimaryMissionComplete;
    bool HasSpawnedSecond;
    int32 MaxRetriggerTimes;
    int32 ReTriggers;
    int32 SpawnOrderIndex;
    TArray<FFEventSpawnEntry> SpawnOrder;
    FBP_EventSpawnTimer_CSpawnedActor SpawnedActor;
    void SpawnedActor(class AActor* spawned);
    FBP_EventSpawnTimer_CSpawnSequenceFinished SpawnSequenceFinished;
    void SpawnSequenceFinished();
    float CandidateTime;
    TArray<class ABP_EventSpawnTimer_C*> Out Actors;
    bool FoundValidTime;
    TEnumAsByte<EEventTimerAdjustMode::Type> AdjustDirection;
    class UDialogDataAsset* EventSpawnShout;
    float DebugStartTime;
    bool IsSpawningInProgress;
    FTimerHandle Handle_Debug;

    void StopTimer();
    void CheckAllowedToSpawn(bool& Allowed);
    FTransform GetSpawnTransform();
    void ReceiveBeginPlay();
    void SpawnEvent();
    void Match Started();
    void SpawnImmediately();
    void StartTimer();
    void EnableRetrigger();
    void SpawnSequence();
    void PreEventSpawn();
    void PrintDebug();
    void ExecuteUbergraph_BP_EventSpawnTimer(int32 EntryPoint);
    void SpawnSequenceFinished__DelegateSignature();
    void SpawnedActor__DelegateSignature(class AActor* spawned);
};

#endif
