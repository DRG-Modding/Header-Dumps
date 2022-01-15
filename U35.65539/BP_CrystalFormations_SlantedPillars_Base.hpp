#ifndef UE4SS_SDK_BP_CrystalFormations_SlantedPillars_Base_HPP
#define UE4SS_SDK_BP_CrystalFormations_SlantedPillars_Base_HPP

class ABP_CrystalFormations_SlantedPillars_Base_C : AActor
{
    UStaticMeshComponent* StaticMesh3;
    UStaticMeshComponent* StaticMesh2;
    UStaticMeshComponent* StaticMesh1;
    UStaticMeshComponent* StaticMesh;
    UStaticMeshComponent* Cube;
    UTerrainPlacementComponent* terrainPlacement;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    USceneComponent* DefaultSceneRoot;
}

#endif
