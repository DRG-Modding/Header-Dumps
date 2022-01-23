#ifndef UE4SS_SDK_BP_FuelLine_StartPoint_HPP
#define UE4SS_SDK_BP_FuelLine_StartPoint_HPP

class ABP_FuelLine_StartPoint_C : public AFuelLineStart
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* WidgetStartFuelLine;
    class UBoxComponent* UsableCollider;
    TArray<class UMaterialInterface*> DefaultMaterials;

    void SetMaterial(FName InSlotName, class UMaterialInterface* inMaterial, int32 Index, bool Temp_bool_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInterface* K2Node_Select_Default, int32 CallFunc_GetMaterialIndex_ReturnValue);
    void UpdateState(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1);
    void UserConstructionScript(TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue);
    void BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ReceiveBeginPlay();
    void FuelPodLanded();
    void BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_1_SegmentDelegate__DelegateSignature(class UTrackBuilderUsable* InUsable, class ATrackBuilderSegment* InSegment);
    void ExecuteUbergraph_BP_FuelLine_StartPoint(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_ComponentBoundEvent_canUse, class UTrackBuilderUsable* K2Node_ComponentBoundEvent_InUsable, class ATrackBuilderSegment* K2Node_ComponentBoundEvent_InSegment, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue, class ABP_Salvage_FuelPod_C* K2Node_DynamicCast_AsBP_Salvage_Fuel_Pod, bool K2Node_DynamicCast_bSuccess);
};

#endif
