#ifndef UE4SS_SDK_ENE_EnemySpawner_HPP
#define UE4SS_SDK_ENE_EnemySpawner_HPP

class AENE_EnemySpawner_C : public AEnemyPawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float Spawn Interval;
    int32 AliveCount;
    int32 MaxConcurrentEnemies;
    int32 SpawnCount;
    int32 MaxTotalSpawnCount;
    class UEnemySpawnManager* manager;
    FENE_EnemySpawner_COn Begin Play On Begin Play;
    void On Begin Play();
    TArray<FEnemySpawnWave> Spawns;
    TArray<class UEnemyDescriptor*> SpawnQueue;
    bool IsAlertet;
    bool PlayersClose;

    void SetReferenceToSpawner(class AActor* Actor);
    void SetInactive(class AActor* Target);
    bool CanSpawn(class UEnemyDescriptor* EnemyClass);
    void ReceiveBeginPlay();
    void Spawn();
    void SpawnActor(class UEnemyDescriptor* Class);
    void SpawnFromQueue();
    void OnEnemySpawned(class APawn* enemy);
    void OnEnemyDeath(class UHealthComponentBase* HealthComponent);
    void CheckForPlayerProximity();
    void ExecuteUbergraph_ENE_EnemySpawner(int32 EntryPoint);
    void On Begin Play__DelegateSignature();
};

#endif
