#ifndef UE4SS_SDK_BP_Portal_HPP
#define UE4SS_SDK_BP_Portal_HPP

class ABP_Portal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Prim_GeoSphere_20segments;
    class USceneComponent* DefaultSceneRoot;
    class USceneCaptureComponent2D* NewVar_0;
    class UObject* SceneReference;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Portal(int32 EntryPoint);
};

#endif
