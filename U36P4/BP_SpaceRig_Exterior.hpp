#ifndef UE4SS_SDK_BP_SpaceRig_Exterior_HPP
#define UE4SS_SDK_BP_SpaceRig_Exterior_HPP

class ABP_SpaceRig_Exterior_C : public AActor
{
    class UStaticMeshComponent* Launch_Blink_Light1;
    class UStaticMeshComponent* Launch_Blink_Light7;
    class UStaticMeshComponent* Launch_Blink_Light6;
    class UStaticMeshComponent* Launch_Blink_Light5;
    class UStaticMeshComponent* Launch_Blink_Light4;
    class UStaticMeshComponent* Launch_Blink_Light3;
    class UStaticMeshComponent* Launch_Blink_Light2;
    class UStaticMeshComponent* Launch_Blink_Light_Parent;
    class UParticleSystemComponent* P_SpaceRig_Exterior_Smoke_Vent;
    class USpotLightComponent* SpotLight;
    class USpotLightComponent* Area spotlight2;
    class USpotLightComponent* Area spotlight1;
    class USpotLightComponent* Area spotlight;
    class USpotLightComponent* SpotLight3;
    class USpotLightComponent* SpotLight2;
    class USpotLightComponent* SpotLight1;
    class UParticleSystemComponent* P_SpaceRig_Exterior_Smoke1;
    class UParticleSystemComponent* P_SpaceRig_Exterior_Smaller_Smoke;
    class UParticleSystemComponent* P_SpaceRig_Exterior_Smoke_Chimney;
    class UStaticMeshComponent* SM_ConeMesh;
    class UStaticMeshComponent* SM_SpaceRig_ext;
    class USceneComponent* DefaultSceneRoot;

};

#endif
