#ifndef UE4SS_SDK_BP_Glacier_2_HPP
#define UE4SS_SDK_BP_Glacier_2_HPP

class ABP_Glacier_2_C : public AActor
{
    class UStaticMeshComponent* StandInMesh;
    class UStaticMeshComponent* Cube;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;

};

#endif
