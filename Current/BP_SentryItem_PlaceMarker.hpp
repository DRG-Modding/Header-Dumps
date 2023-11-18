#ifndef UE4SS_SDK_BP_SentryItem_PlaceMarker_HPP
#define UE4SS_SDK_BP_SentryItem_PlaceMarker_HPP

class ABP_SentryItem_PlaceMarker_C : public AItemMarker
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* ArcIndicator;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* Scene;
    class UStaticMeshComponent* RightLine;
    class UStaticMeshComponent* LeftLine;
    class USceneComponent* AimScene;
    class UArrowComponent* Arrow;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstanceDynamic* Material;
    FName ColorName;
    FLinearColor ValidColor;
    class ARecallableSentryGunItem* Item;

    void SetAngleRestriction(float AngleRestriction);
    void SetMaterials(class UMeshComponent* Mesh, class UMaterialInterface* ParentMaterial, class UMaterialInstanceDynamic*& DynamicMaterial);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnMarkerValidChanged(bool Valid);
    void SetArcIndicatorActive(bool Active);
    void ExecuteUbergraph_BP_SentryItem_PlaceMarker(int32 EntryPoint);
};

#endif
