#ifndef UE4SS_SDK_BP_EscortRefuelTarget_HPP
#define UE4SS_SDK_BP_EscortRefuelTarget_HPP

class ABP_EscortRefuelTarget_C : public AActor
{
    class UStaticMeshComponent* SM_Prim_Cylinder_06sides;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class URoomCarverComponent* RoomCarver;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
