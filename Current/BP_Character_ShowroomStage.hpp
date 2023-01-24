#ifndef UE4SS_SDK_BP_Character_ShowroomStage_HPP
#define UE4SS_SDK_BP_Character_ShowroomStage_HPP

class ABP_Character_ShowroomStage_C : public AShowroomStage
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UShowroomSceneCaptureComponent* Capture_SeasonsMenu;
    class UShowroomSceneCaptureComponent* Capture_EscapeMenu;
    class USpotLightComponent* SpotLight2;
    class UCameraComponent* Camera;
    class USpotLightComponent* SpotLight;
    class USpotLightComponent* SpotLight1;
    class USkeletalMeshComponent* PreviewMesh;

    void UpdateActorsToHide();
    class UTextureRenderTarget2D* CreateRenderTarget();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Character_ShowroomStage(int32 EntryPoint);
};

#endif
