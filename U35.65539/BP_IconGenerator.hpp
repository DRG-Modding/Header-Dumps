#ifndef UE4SS_SDK_BP_IconGenerator_HPP
#define UE4SS_SDK_BP_IconGenerator_HPP

class ABP_IconGenerator_C : UIconGenerationCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UIconSceneCaptureComponent* IconSceneCapture_Eyebrows;
    UCameraComponent* TestCamera;
    UIconSceneCaptureComponent* IconSceneCapture_HeadwearSmallLow;
    USpotLightComponent* SpotLight2;
    UIconSceneCaptureComponent* IconSceneCapture_FullHeadFar;
    UIconSceneCaptureComponent* IconSceneCapture_MoustachesLarge;
    UIconSceneCaptureComponent* IconSceneCapture_BeardsLarge;
    UIconSceneCaptureComponent* IconSceneCapture_BeardsSmall;
    UIconSceneCaptureComponent* IconSceneCapture_HeadwearLarge;
    UIconSceneCaptureComponent* IconSceneCapture_HeadwearSmall;
    UIconSceneCaptureComponent* IconSceneCapture_Sideburns;
    UIconSceneCaptureComponent* IconSceneCapture_MoustachesSmall;
    USpotLightComponent* SpotLight4;
    USpotLightComponent* SpotLight3;
    UIconSceneCaptureComponent* IconSceneCapture_Armors;
    UIconSceneCaptureComponent* IconSceneCapture_FullHeadClose;
    USceneComponent* SceneCaptures;
    USpotLightComponent* SpotLight1;
    USceneComponent* Lights;
    EVanitySlot VanityCategory;
    FString Path;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_IconGenerator(int32 EntryPoint);
}

#endif
