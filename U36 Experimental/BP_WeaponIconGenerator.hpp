#ifndef UE4SS_SDK_BP_WeaponIconGenerator_HPP
#define UE4SS_SDK_BP_WeaponIconGenerator_HPP

class ABP_WeaponIconGenerator_C : public AIconGenerationWeapon
{
    class UCameraComponent* TestCamera;
    class UWeaponIconSceneCaptureComponent* WeaponCapture_LargeCloseUp;
    class UWeaponIconSceneCaptureComponent* WeaponCapture_MediumCloseUp;
    class UChildActorComponent* PRW_BurstPistol;
    class UWeaponIconSceneCaptureComponent* WeaponCapture_SmallCloseUp;
    class UWeaponIconSceneCaptureComponent* WeaponCapture_Large;
    class UWeaponIconSceneCaptureComponent* WeaponCapture_Medium;
    class UWeaponIconSceneCaptureComponent* WeaponCapture_Small;
    class USceneComponent* SceneCaptures;
    class USpotLightComponent* SpotLight1;
    class USpotLightComponent* SpotLight4;
    class USpotLightComponent* SpotLight3;
    class USceneComponent* Lights;
    class UPointLightComponent* PointLight;

};

#endif
