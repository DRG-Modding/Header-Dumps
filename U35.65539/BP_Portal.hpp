#ifndef UE4SS_SDK_BP_Portal_HPP
#define UE4SS_SDK_BP_Portal_HPP

class ABP_Portal_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_Prim_GeoSphere_20segments;
    USceneComponent* DefaultSceneRoot;
    USceneCaptureComponent2D* NewVar_0;
    UObject* SceneReference;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Portal(int32 EntryPoint);
}

#endif
