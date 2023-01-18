#ifndef UE4SS_SDK_BP_IconGenerator_HPP
#define UE4SS_SDK_BP_IconGenerator_HPP

class ABP_IconGenerator_C : public AIconGenerationCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UIconSceneCaptureComponent* IconSceneCapture_Eyebrows;
    class UCameraComponent* TestCamera;
    class UIconSceneCaptureComponent* IconSceneCapture_HeadwearSmallLow;
    class USpotLightComponent* SpotLight2;
    class UIconSceneCaptureComponent* IconSceneCapture_FullHeadFar;
    class UIconSceneCaptureComponent* IconSceneCapture_MoustachesLarge;
    class UIconSceneCaptureComponent* IconSceneCapture_BeardsLarge;
    class UIconSceneCaptureComponent* IconSceneCapture_BeardsSmall;
    class UIconSceneCaptureComponent* IconSceneCapture_HeadwearLarge;
    class UIconSceneCaptureComponent* IconSceneCapture_HeadwearSmall;
    class UIconSceneCaptureComponent* IconSceneCapture_Sideburns;
    class UIconSceneCaptureComponent* IconSceneCapture_MoustachesSmall;
    class USpotLightComponent* SpotLight4;
    class USpotLightComponent* SpotLight3;
    class UIconSceneCaptureComponent* IconSceneCapture_Armors;
    class UIconSceneCaptureComponent* IconSceneCapture_FullHeadClose;
    class USceneComponent* SceneCaptures;
    class USpotLightComponent* SpotLight1;
    class USceneComponent* Lights;
    EVanitySlot VanityCategory;
    FString Path;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_IconGenerator(int32 EntryPoint);
};

#endif
