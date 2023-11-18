#ifndef UE4SS_SDK_BP_ThornVinesChokingWoodRoots_Base_HPP
#define UE4SS_SDK_BP_ThornVinesChokingWoodRoots_Base_HPP

class ABP_ThornVinesChokingWoodRoots_Base_C : public AActor
{
    class UGenerationCleanupComponent* GenerationCleanup;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_ThornVine;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_BaseRoot;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Cube;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;

};

#endif
