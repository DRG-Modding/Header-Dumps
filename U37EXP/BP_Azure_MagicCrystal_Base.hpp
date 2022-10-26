#ifndef UE4SS_SDK_BP_Azure_MagicCrystal_Base_HPP
#define UE4SS_SDK_BP_Azure_MagicCrystal_Base_HPP

class ABP_Azure_MagicCrystal_Base_C : public AActor
{
    class UTerrainPlacementComponent* terrainPlacement;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* PreviewMesh;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class USceneComponent* DefaultSceneRoot;

};

#endif
