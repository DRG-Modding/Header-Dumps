#ifndef UE4SS_SDK_Donkey_BreadCrumb_HPP
#define UE4SS_SDK_Donkey_BreadCrumb_HPP

class ADonkey_BreadCrumb_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Donkey_DestinationMarker;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Shape_Cone3;
    class UStaticMeshComponent* Shape_Cone;
    class UStaticMeshComponent* Sphere;
    class UStaticMeshComponent* TerrainScannerMesh;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_Light02;
    class UPointLightComponent* PointLight_NoShadow;
    class UStaticMeshComponent* mesh_front;
    class UStaticMeshComponent* mesh_light;
    class USceneComponent* Scene;
    FRotator NextPointLookat;

    void OnRep_NextPointLookat();
    void SetNextArrowPoint(FVector NextPoint);
    FVector GetArrowPoint();
    void ReceiveBeginPlay();
    void Blink();
    void Blink_Photosensitive();
    void ExecuteUbergraph_Donkey_BreadCrumb(int32 EntryPoint);
};

#endif
