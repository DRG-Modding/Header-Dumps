#ifndef UE4SS_SDK_BP_IceLight_HPP
#define UE4SS_SDK_BP_IceLight_HPP

class ABP_IceLight_C : AActor
{
    UPointLightComponent* PointLight;
    UTerrainPlacementComponent* terrainPlacement;
    USceneComponent* DefaultSceneRoot;
}

#endif
