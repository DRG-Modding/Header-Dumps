#ifndef UE4SS_SDK_BP_SpaceRig_Exterior_HPP
#define UE4SS_SDK_BP_SpaceRig_Exterior_HPP

class ABP_SpaceRig_Exterior_C : AActor
{
    UStaticMeshComponent* Launch_Blink_Light1;
    UStaticMeshComponent* Launch_Blink_Light7;
    UStaticMeshComponent* Launch_Blink_Light6;
    UStaticMeshComponent* Launch_Blink_Light5;
    UStaticMeshComponent* Launch_Blink_Light4;
    UStaticMeshComponent* Launch_Blink_Light3;
    UStaticMeshComponent* Launch_Blink_Light2;
    UStaticMeshComponent* Launch_Blink_Light_Parent;
    UParticleSystemComponent* P_SpaceRig_Exterior_Smoke_Vent;
    USpotLightComponent* SpotLight;
    USpotLightComponent* Area spotlight2;
    USpotLightComponent* Area spotlight1;
    USpotLightComponent* Area spotlight;
    USpotLightComponent* SpotLight3;
    USpotLightComponent* SpotLight2;
    USpotLightComponent* SpotLight1;
    UParticleSystemComponent* P_SpaceRig_Exterior_Smoke1;
    UParticleSystemComponent* P_SpaceRig_Exterior_Smaller_Smoke;
    UParticleSystemComponent* P_SpaceRig_Exterior_Smoke_Chimney;
    UStaticMeshComponent* SM_ConeMesh;
    UStaticMeshComponent* SM_SpaceRig_ext;
    USceneComponent* DefaultSceneRoot;
}

#endif
