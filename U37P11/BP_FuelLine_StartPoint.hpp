#ifndef UE4SS_SDK_BP_FuelLine_StartPoint_HPP
#define UE4SS_SDK_BP_FuelLine_StartPoint_HPP

class ABP_FuelLine_StartPoint_C : public AFuelLineStart
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* WidgetStartFuelLine;
    class UBoxComponent* UsableCollider;
    TArray<class UMaterialInterface*> DefaultMaterials;

    void SetMaterial(FName InSlotName, class UMaterialInterface* InMaterial);
    void UpdateState();
    void UserConstructionScript();
    void BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ReceiveBeginPlay();
    void FuelPodLanded();
    void BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_1_SegmentDelegate__DelegateSignature(class UTrackBuilderUsable* InUsable, class ATrackBuilderSegment* InSegment);
    void ExecuteUbergraph_BP_FuelLine_StartPoint(int32 EntryPoint);
};

#endif
