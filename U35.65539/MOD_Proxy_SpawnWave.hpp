#ifndef UE4SS_SDK_MOD_Proxy_SpawnWave_HPP
#define UE4SS_SDK_MOD_Proxy_SpawnWave_HPP

class AMOD_Proxy_SpawnWave_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    TSubclassOf<UEnemyWaveController> Wave;
    UEnemyWaveController* WaveInstance;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_MOD_Proxy_SpawnWave(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, UEnemyWaveController* CallFunc_TriggerWave_ReturnValue);
}

#endif
