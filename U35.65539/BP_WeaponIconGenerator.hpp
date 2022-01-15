#ifndef UE4SS_SDK_BP_WeaponIconGenerator_HPP
#define UE4SS_SDK_BP_WeaponIconGenerator_HPP

class ABP_WeaponIconGenerator_C : UIconGenerationWeapon
{
    UCameraComponent* TestCamera;
    UWeaponIconSceneCaptureComponent* WeaponCapture_LargeCloseUp;
    UWeaponIconSceneCaptureComponent* WeaponCapture_MediumCloseUp;
    UChildActorComponent* PRW_BurstPistol;
    UWeaponIconSceneCaptureComponent* WeaponCapture_SmallCloseUp;
    UWeaponIconSceneCaptureComponent* WeaponCapture_Large;
    UWeaponIconSceneCaptureComponent* WeaponCapture_Medium;
    UWeaponIconSceneCaptureComponent* WeaponCapture_Small;
    USceneComponent* SceneCaptures;
    USpotLightComponent* SpotLight1;
    USpotLightComponent* SpotLight4;
    USpotLightComponent* SpotLight3;
    USceneComponent* Lights;
    UPointLightComponent* PointLight;
}

#endif
