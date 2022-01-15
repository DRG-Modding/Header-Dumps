#ifndef UE4SS_SDK_BP_Azure_MagicCrystal_Base_HPP
#define UE4SS_SDK_BP_Azure_MagicCrystal_Base_HPP

class ABP_Azure_MagicCrystal_Base_C : AActor
{
    UTerrainPlacementComponent* terrainPlacement;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* PreviewMesh;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    USceneComponent* DefaultSceneRoot;
}

#endif
