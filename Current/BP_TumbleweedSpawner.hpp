#ifndef UE4SS_SDK_BP_TumbleweedSpawner_HPP
#define UE4SS_SDK_BP_TumbleweedSpawner_HPP

class ABP_TumbleweedSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;
    class UBillboardComponent* SpawnPoint;
    class USceneComponent* DefaultSceneRoot;
    TSubclassOf<class AActor> ClassToSpawn;

    void ReceiveBeginPlay();
    void SpawnPinecone();
    void ExecuteUbergraph_BP_TumbleweedSpawner(int32 EntryPoint);
};

#endif
