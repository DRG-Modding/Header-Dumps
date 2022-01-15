#ifndef UE4SS_SDK_BP_NausicaaTreeTrunk_Base_HPP
#define UE4SS_SDK_BP_NausicaaTreeTrunk_Base_HPP

class ABP_NausicaaTreeTrunk_Base_C : AActor
{
    UStaticMeshComponent* StaticMesh3;
    UStaticMeshComponent* StaticMesh2;
    UStaticMeshComponent* StaticMesh1;
    UStaticMeshComponent* StaticMesh;
    UStaticMeshComponent* Cube;
    UTerrainPlacementComponent* terrainPlacement;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    USceneComponent* DefaultSceneRoot;

    void UserConstructionScript();
}

#endif
