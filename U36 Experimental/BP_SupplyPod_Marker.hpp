#ifndef UE4SS_SDK_BP_SupplyPod_Marker_HPP
#define UE4SS_SDK_BP_SupplyPod_Marker_HPP

class ABP_SupplyPod_Marker_C : public AItemMarker
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* SupplyPod_SingleMesh;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstanceDynamic* Material;
    FLinearColor StartColor;
    FName ColorName;

    void SetMaterials(class UMaterial* ParentMaterial, class UMeshComponent* Mesh, class UMaterialInstanceDynamic*& DynamicMaterial);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnMarkerValidChanged(bool Valid);
    void OnMarkerVisibilityChanged(bool Visible);
    void ExecuteUbergraph_BP_SupplyPod_Marker(int32 EntryPoint);
};

#endif
