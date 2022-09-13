#ifndef UE4SS_SDK_BP_RockEnemiesEvent_HPP
#define UE4SS_SDK_BP_RockEnemiesEvent_HPP

class ABP_RockEnemiesEvent_C : public ARockEnemiesEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* SprinklerMiscG_1_Cue;
    class UBoxComponent* Box1;
    class UBoxComponent* Box;
    class URoomCarverComponent* RoomCarver;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    class UDamageComponent* Damage;
    class UParticleSystemComponent* Sparks;
    class UChildActorComponent* Starter4;
    class UChildActorComponent* Starter6;
    class UChildActorComponent* Starter5;
    class UChildActorComponent* Starter3;
    class UStaticMeshComponent* StaticMesh;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* Scene;

    void OnShoot();
    void OnEventFinished(bool eventSuccess);
    void Spawn Enemies();
    void OnEventTriggered();
    void ReceiveBeginPlay();
    void EnemySpawnedAfterComplete(class APawn* spawnedEnemy);
    void ExecuteUbergraph_BP_RockEnemiesEvent(int32 EntryPoint);
};

#endif
