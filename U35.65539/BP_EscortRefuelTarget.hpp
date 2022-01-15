#ifndef UE4SS_SDK_BP_EscortRefuelTarget_HPP
#define UE4SS_SDK_BP_EscortRefuelTarget_HPP

class ABP_EscortRefuelTarget_C : AActor
{
    UStaticMeshComponent* SM_Prim_Cylinder_06sides;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    URoomCarverComponent* RoomCarver;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;
}

#endif
