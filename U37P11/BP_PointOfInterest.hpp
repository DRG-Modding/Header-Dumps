#ifndef UE4SS_SDK_BP_PointOfInterest_HPP
#define UE4SS_SDK_BP_PointOfInterest_HPP

class ABP_PointOfInterest_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Sphere;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class USceneComponent* DefaultSceneRoot;
    class UTexture2D* Icon;

    void Init(class UTexture2D* Texture);
    void ReceiveBeginPlay();
    void Finished_Event();
    void ExecuteUbergraph_BP_PointOfInterest(int32 EntryPoint);
};

#endif
