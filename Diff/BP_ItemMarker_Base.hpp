#ifndef UE4SS_SDK_BP_ItemMarker_Base_HPP
#define UE4SS_SDK_BP_ItemMarker_Base_HPP

class ABP_ItemMarker_Base_C : public AItemMarker
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstanceDynamic* Material;
    FName ColorName;
    FLinearColor ValidColor;

    void SetMaterials(class UMeshComponent* Mesh, class UMaterialInterface* ParentMaterial, class UMaterialInstanceDynamic*& DynamicMaterial);
    void UserConstructionScript();
    void OnMarkerValidChanged(bool Valid);
    void ExecuteUbergraph_BP_ItemMarker_Base(int32 EntryPoint);
};

#endif
