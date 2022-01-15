#ifndef UE4SS_SDK_BP_Glacier_2_HPP
#define UE4SS_SDK_BP_Glacier_2_HPP

class ABP_Glacier_2_C : AActor
{
    UStaticMeshComponent* StandInMesh;
    UStaticMeshComponent* Cube;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    UTerrainPlacementComponent* terrainPlacement;
    USceneComponent* DefaultSceneRoot;
}

#endif
