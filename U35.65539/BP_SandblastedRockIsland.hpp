#ifndef UE4SS_SDK_BP_SandblastedRockIsland_HPP
#define UE4SS_SDK_BP_SandblastedRockIsland_HPP

class ABP_SandblastedRockIsland_C : AActor
{
    UStaticMeshComponent* SM_Carver_Rock12;
    UStaticMeshComponent* PreviewMesh;
    UTerrainPlacementComponent* terrainPlacement;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    USceneComponent* DefaultSceneRoot;
}

#endif
