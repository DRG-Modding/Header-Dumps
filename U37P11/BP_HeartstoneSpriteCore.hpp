#ifndef UE4SS_SDK_BP_HeartstoneSpriteCore_HPP
#define UE4SS_SDK_BP_HeartstoneSpriteCore_HPP

class ABP_HeartstoneSpriteCore_C : public AFSDPawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyComponent* enemy;
    class UStaticMeshComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    int32 BaseNumSprites;
    int32 NumSpritesPerExtraPlayer;
    float SpriteSpawnDelay;
    float TotalPhaseLifetime;
    int32 MinNumSprites;

    void OnRep_SpriteSpawnDelay();
    void SpawnEnergySpriteWave();
    void ReceiveBeginPlay();
    void StopSpawningSprites();
    void ExecuteUbergraph_BP_HeartstoneSpriteCore(int32 EntryPoint);
};

#endif
