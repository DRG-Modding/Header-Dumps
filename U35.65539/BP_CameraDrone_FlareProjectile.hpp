#ifndef UE4SS_SDK_BP_CameraDrone_FlareProjectile_HPP
#define UE4SS_SDK_BP_CameraDrone_FlareProjectile_HPP

class ABP_CameraDrone_FlareProjectile_C : AActor
{
    UPointLightComponent* PointLight_NoShadow;
    UTerrainDetectComponent* TerrainDetect;
    UStaticMeshComponent* StaticMesh;
    UStaticMeshComponent* Arrow;
    USpotLightComponent* SpotLight_Shadow_3;
    USpotLightComponent* SpotLight_Shadow_2;
    USpotLightComponent* SpotLight_Shadow_1;
    UParticleSystemComponent* ParticleSystem;
    UStaticMeshComponent* Cube;
}

#endif
