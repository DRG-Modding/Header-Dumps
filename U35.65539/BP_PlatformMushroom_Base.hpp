#ifndef UE4SS_SDK_BP_PlatformMushroom_Base_HPP
#define UE4SS_SDK_BP_PlatformMushroom_Base_HPP

class ABP_PlatformMushroom_Base_C : AActor
{
    UTerrainPlacementComponent* terrainPlacement;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    USceneComponent* DefaultSceneRoot;
}

#endif
