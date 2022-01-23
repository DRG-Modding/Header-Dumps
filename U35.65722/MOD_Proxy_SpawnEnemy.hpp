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
    void ExecuteUbergraph_MOD_Proxy_SpawnEnemy(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FExecuteUbergraph_MOD_Proxy_SpawnEnemyK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class APawn* K2Node_CustomEvent_enemy, const FTransform CallFunc_GetTransform_ReturnValue, bool CallFunc_SpawnEnemy_ReturnValue);
    void OnEnemySpawned__DelegateSignature(class APawn* enemy);
};

#endif
