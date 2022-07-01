#ifndef UE4SS_SDK_BP_IceLight_HPP
#define UE4SS_SDK_BP_IceLight_HPP

class ABP_IceLight_C : public AActor
{
    class UPointLightComponent* PointLight;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;

};

#endif
