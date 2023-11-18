#ifndef UE4SS_SDK_BP_PlatformMushroom_Base_HPP
#define UE4SS_SDK_BP_PlatformMushroom_Base_HPP

class ABP_PlatformMushroom_Base_C : public AActor
{
    class UGenerationCleanupComponent* GenerationCleanup;
    class UTerrainPlacementComponent* terrainPlacement;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class USceneComponent* DefaultSceneRoot;

};

#endif
