#ifndef UE4SS_SDK_BP_HureRoots_Base_HPP
#define UE4SS_SDK_BP_HureRoots_Base_HPP

class ABP_HureRoots_Base_C : public AActor
{
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Cube;
    class UTerrainPlacementComponent* terrainPlacement;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class USceneComponent* DefaultSceneRoot;

};

#endif
