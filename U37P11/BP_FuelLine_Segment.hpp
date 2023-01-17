#ifndef UE4SS_SDK_BP_FuelLine_Segment_HPP
#define UE4SS_SDK_BP_FuelLine_Segment_HPP

class ABP_FuelLine_Segment_C : public AFuelLineSegment
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* Audio_Placeing;
    class USphereComponent* UsableSphere;
    TArray<class UMaterialInterface*> MaterialsDefaultEndPost;
    FVector EndLocation;

    void OverrideMaterialByIndex(class UPrimitiveComponent*& InMesh, TArray<class UMaterialInterface*>& InDefaultMaterials, int32 InIndex, class UMaterialInterface* InMaterial);
    void OverrideMaterialByName(class UMeshComponent* InMesh, TArray<class UMaterialInterface*>& InDefaultMaterials, FName InMaterialSlotName, class UMaterialInterface* InMaterial);
    void UpdateVisualState();
    bool ReceiveCanPlaceAt(const FTransform& InCandidateTransform, class UTrackBuilderConnectPoint* InConnectPoint);
    void UserConstructionScript();
    void ReceivePlacementStateChanged(ETrackBuildPlacementState NewState);
    void BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ReceiveBeginPlay();
    void ReceivPlacementValidChanged(bool InIsValid);
    void BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health);
    void BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_FuelLine_Segment(int32 EntryPoint);
};

#endif
