#ifndef UE4SS_SDK_BP_PickaxeIconGenerator_HPP
#define UE4SS_SDK_BP_PickaxeIconGenerator_HPP

class ABP_PickaxeIconGenerator_C : public AIconGenerationPickaxe
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCameraComponent* TestCamera;
    class UPickaxeIconSceneCaptureComponent* PickaxeIconSceneCapture_FullView;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* Mesh_Preview;
    class UPickaxeIconSceneCaptureComponent* PickaxeIconSceneCapture_BackBlade;
    class UPickaxeIconSceneCaptureComponent* PickaxeIconSceneCapture_Pommel;
    class UPickaxeIconSceneCaptureComponent* PickaxeIconSceneCapture_Handle;
    class UPickaxeIconSceneCaptureComponent* PickaxeIconSceneCapture_Shaft;
    class UPickaxeIconSceneCaptureComponent* PickaxeIconSceneCapture_FrontBlade;
    class UPickaxeIconSceneCaptureComponent* PickaxeIconSceneCapture_Head;
    class USpotLightComponent* SpotLight4;
    class USpotLightComponent* SpotLight3;
    class USceneComponent* SceneCaptures;
    class USpotLightComponent* SpotLight1;
    class USceneComponent* Lights;
    EVanitySlot VanityCategory;
    FString Path;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PickaxeIconGenerator(int32 EntryPoint);
};

#endif
