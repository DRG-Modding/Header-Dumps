#ifndef UE4SS_SDK_BP_MeteorShowerTimer_HPP
#define UE4SS_SDK_BP_MeteorShowerTimer_HPP

class ABP_MeteorShowerTimer_C : public ABP_EventSpawnTimer_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class ABP_SmallMeteor_C*> Meteors;
    class USoundBase* WarningSound;
    TArray<class ABP_SmallMeteorSpawner_C*> Spawners;
    int32 SpawnersDone;

    void GetValidMeteor(class ABP_SmallMeteor_C*& meteor);
    FTransform GetSpawnTransform();
    void ReceiveBeginPlay();
    void SpawnedMeteor(class AActor* spawned);
    void SpawnSequenceComplete();
    void MetorSpawned(class AActor* Actor);
    void SpawnFailed();
    void AssignPlagueHeart();
    void PreEventSpawn();
    void All_PlayWarningSound();
    void ExecuteUbergraph_BP_MeteorShowerTimer(int32 EntryPoint);
};

#endif
