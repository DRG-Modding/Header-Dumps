#ifndef UE4SS_SDK_MOD_Proxy_SpawnWave_HPP
#define UE4SS_SDK_MOD_Proxy_SpawnWave_HPP

class AMOD_Proxy_SpawnWave_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TSubclassOf<class UEnemyWaveController> Wave;
    class UEnemyWaveController* WaveInstance;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_MOD_Proxy_SpawnWave(int32 EntryPoint);
};

#endif
