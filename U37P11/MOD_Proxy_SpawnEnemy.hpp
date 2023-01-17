#ifndef UE4SS_SDK_MOD_Proxy_SpawnEnemy_HPP
#define UE4SS_SDK_MOD_Proxy_SpawnEnemy_HPP

class AMOD_Proxy_SpawnEnemy_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UEnemyDescriptor* enemy;
    FMOD_Proxy_SpawnEnemy_COnEnemySpawned OnEnemySpawned;
    void OnEnemySpawned(class APawn* enemy);
    bool useSpawnFX;
    bool IsAlert;

    void ReceiveBeginPlay();
    void spawned(class APawn* enemy);
    void ExecuteUbergraph_MOD_Proxy_SpawnEnemy(int32 EntryPoint);
    void OnEnemySpawned__DelegateSignature(class APawn* enemy);
};

#endif
