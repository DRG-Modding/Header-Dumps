#ifndef UE4SS_SDK_BP_PickaxeIconGenerator_HPP
#define UE4SS_SDK_BP_PickaxeIconGenerator_HPP

class ABP_PickaxeIconGenerator_C : UIconGenerationPickaxe
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCameraComponent* TestCamera;
    UPickaxeIconSceneCaptureComponent* PickaxeIconSceneCapture_FullView;
    UStaticMeshComponent* StaticMesh5;
    UStaticMeshComponent* StaticMesh4;
    UStaticMeshComponent* StaticMesh3;
    UStaticMeshComponent* StaticMesh2;
    UStaticMeshComponent* StaticMesh1;
    UStaticMeshComponent* Mesh_Preview;
    UPickaxeIconSceneCaptureComponent* PickaxeIconSceneCapture_BackBlade;
    UPickaxeIconSceneCaptureComponent* PickaxeIconSceneCapture_Pommel;
    UPickaxeIconSceneCaptureComponent* PickaxeIconSceneCapture_Handle;
    UPickaxeIconSceneCaptureComponent* PickaxeIconSceneCapture_Shaft;
    UPickaxeIconSceneCaptureComponent* PickaxeIconSceneCapture_FrontBlade;
    UPickaxeIconSceneCaptureComponent* PickaxeIconSceneCapture_Head;
    USpotLightComponent* SpotLight4;
    USpotLightComponent* SpotLight3;
    USceneComponent* SceneCaptures;
    USpotLightComponent* SpotLight1;
    USceneComponent* Lights;
    EVanitySlot VanityCategory;
    FString Path;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PickaxeIconGenerator(int32 EntryPoint);
}

#endif
