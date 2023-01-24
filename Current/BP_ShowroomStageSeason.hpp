#ifndef UE4SS_SDK_BP_ShowroomStageSeason_HPP
#define UE4SS_SDK_BP_ShowroomStageSeason_HPP

class ABP_ShowroomStageSeason_C : public AShowroomStage
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLight;
    class USpotLightComponent* SpotLight1;
    class USpotLightComponent* SpotLight2;
    class UStaticMeshComponent* StaticMesh;

    class UTextureRenderTarget2D* CreateRenderTarget();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ShowroomStageSeason(int32 EntryPoint);
};

#endif
