#ifndef UE4SS_SDK_BP_SentryGun_MoveMarker_Heavy_HPP
#define UE4SS_SDK_BP_SentryGun_MoveMarker_Heavy_HPP

class ABP_SentryGun_MoveMarker_Heavy_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    class UWidgetComponent* DistanceWidget;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInterface* Material;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SentryGun_MoveMarker_Heavy(int32 EntryPoint);
};

#endif
