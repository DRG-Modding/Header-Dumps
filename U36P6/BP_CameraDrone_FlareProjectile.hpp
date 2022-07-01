#ifndef UE4SS_SDK_BP_CameraDrone_FlareProjectile_HPP
#define UE4SS_SDK_BP_CameraDrone_FlareProjectile_HPP

class ABP_CameraDrone_FlareProjectile_C : public AActor
{
    class UPointLightComponent* PointLight_NoShadow;
    class UTerrainDetectComponent* TerrainDetect;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Arrow;
    class USpotLightComponent* SpotLight_Shadow_3;
    class USpotLightComponent* SpotLight_Shadow_2;
    class USpotLightComponent* SpotLight_Shadow_1;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* Cube;

};

#endif
