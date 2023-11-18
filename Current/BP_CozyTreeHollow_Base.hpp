#ifndef UE4SS_SDK_BP_CozyTreeHollow_Base_HPP
#define UE4SS_SDK_BP_CozyTreeHollow_Base_HPP

class ABP_CozyTreeHollow_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UGenerationCleanupComponent* GenerationCleanup;
    class UBillboardComponent* SugarChunksLocation;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* StaticMesh_Entrance;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_Entrance;
    class UStaticMeshComponent* StaticMesh_Room;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_Room;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void Spawn Sugar();
    void ExecuteUbergraph_BP_CozyTreeHollow_Base(int32 EntryPoint);
};

#endif
