#ifndef UE4SS_SDK_BP_ShowroomStage_HPP
#define UE4SS_SDK_BP_ShowroomStage_HPP

class ABP_ShowroomStage_C : public AShowroomStage
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLight;
    class USpotLightComponent* SpotLight1;
    class USpotLightComponent* SpotLight2;
    class UStaticMeshComponent* StaticMesh;

    class UTextureRenderTarget2D* CreateRenderTarget();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ShowroomStage(int32 EntryPoint);
};

#endif
