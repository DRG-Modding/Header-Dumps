#ifndef UE4SS_SDK_BP_SandblastedRockIsland_HPP
#define UE4SS_SDK_BP_SandblastedRockIsland_HPP

class ABP_SandblastedRockIsland_C : public AActor
{
    class UStaticMeshComponent* SM_Carver_Rock12;
    class UStaticMeshComponent* PreviewMesh;
    class UTerrainPlacementComponent* terrainPlacement;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class USceneComponent* DefaultSceneRoot;

};

#endif
