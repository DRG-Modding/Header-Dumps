#ifndef UE4SS_SDK_MOD_Proxy_SpawnEnemy_HPP
#define UE4SS_SDK_MOD_Proxy_SpawnEnemy_HPP

class AMOD_Proxy_SpawnEnemy_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    UEnemyDescriptor* enemy;
    FMOD_Proxy_SpawnEnemy_COnEnemySpawned OnEnemySpawned;
    void OnEnemySpawned(APawn* enemy);
    bool useSpawnFX;
    bool IsAlert;

    void ReceiveBeginPlay();
    void spawned(APawn* enemy);
    void ExecuteUbergraph_MOD_Proxy_SpawnEnemy(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, EnemySpawnedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, APawn* K2Node_CustomEvent_enemy, const FTransform CallFunc_GetTransform_ReturnValue, bool CallFunc_SpawnEnemy_ReturnValue);
    void OnEnemySpawned__DelegateSignature(APawn* enemy);
}

#endif
