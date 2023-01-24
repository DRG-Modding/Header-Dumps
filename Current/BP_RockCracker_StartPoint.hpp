#ifndef UE4SS_SDK_BP_RockCracker_StartPoint_HPP
#define UE4SS_SDK_BP_RockCracker_StartPoint_HPP

class ABP_RockCracker_StartPoint_C : public AFuelLineStart
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
    void PodLanded();
    void ExecuteUbergraph_BP_RockCracker_StartPoint(int32 EntryPoint);
};

#endif
