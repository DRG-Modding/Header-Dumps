#ifndef UE4SS_SDK_BP_FuelLine_StartPoint_HPP
#define UE4SS_SDK_BP_FuelLine_StartPoint_HPP

class ABP_FuelLine_StartPoint_C : AFuelLineStart
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* WidgetStartFuelLine;
    UBoxComponent* UsableCollider;
    TArray<UMaterialInterface*> DefaultMaterials;

    void SetMaterial(FName InSlotName, UMaterialInterface* inMaterial, int32 Index, bool Temp_bool_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, UMaterialInterface* CallFunc_Array_Get_Item, UMaterialInterface* K2Node_Select_Default, int32 CallFunc_GetMaterialIndex_ReturnValue);
    void UpdateState(bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable_1, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, UMaterialInterface* K2Node_Select_Default, UMaterialInterface* K2Node_Select_Default_1);
    void UserConstructionScript(TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue);
    void BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ReceiveBeginPlay();
    void FuelPodLanded();
    void BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_1_SegmentDelegate__DelegateSignature(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
    void ExecuteUbergraph_BP_FuelLine_StartPoint(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_ComponentBoundEvent_canUse, UTrackBuilderUsable* K2Node_ComponentBoundEvent_InUsable, ATrackBuilderSegment* K2Node_ComponentBoundEvent_InSegment, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue, UBP_Salvage_FuelPod_C* K2Node_DynamicCast_AsBP_Salvage_Fuel_Pod, bool K2Node_DynamicCast_bSuccess);
}

#endif
