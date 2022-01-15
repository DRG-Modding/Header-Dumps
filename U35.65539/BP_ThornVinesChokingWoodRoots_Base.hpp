#ifndef UE4SS_SDK_BP_ThornVinesChokingWoodRoots_Base_HPP
#define UE4SS_SDK_BP_ThornVinesChokingWoodRoots_Base_HPP

class ABP_ThornVinesChokingWoodRoots_Base_C : AActor
{
    ULevelGenerationCarverComponent* LevelGenerationCarver_ThornVine;
    ULevelGenerationCarverComponent* LevelGenerationCarver_BaseRoot;
    UStaticMeshComponent* StaticMesh3;
    UStaticMeshComponent* StaticMesh2;
    UStaticMeshComponent* StaticMesh1;
    UStaticMeshComponent* StaticMesh;
    UStaticMeshComponent* Cube;
    UTerrainPlacementComponent* terrainPlacement;
    USceneComponent* DefaultSceneRoot;
}

#endif
