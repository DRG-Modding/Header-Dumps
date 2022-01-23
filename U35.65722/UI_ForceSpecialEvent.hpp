#ifndef UE4SS_SDK_UI_ForceSpecialEvent_HPP
#define UE4SS_SDK_UI_ForceSpecialEvent_HPP

class UUI_ForceSpecialEvent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UComboBoxString* ComboBoxString_45;
    FString NewVar_0;
    TArray<TSoftObjectPtr<USpecialEvent>> Events;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_UI_ForceSpecialEvent(int32 EntryPoint, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable, TSoftObjectPtr<USpecialEvent> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_Conv_SoftObjectReferenceToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Split_LeftS, FString CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FString K2Node_ComponentBoundEvent_SelectedItem, TEnumAsByte<ESelectInfo::Type> K2Node_ComponentBoundEvent_SelectionType, int32 CallFunc_FindOptionIndex_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, TSoftObjectPtr<USpecialEvent> CallFunc_Array_Get_Item_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class USpecialEvent* K2Node_DynamicCast_AsSpecial_Event, bool K2Node_DynamicCast_bSuccess);
};

#endif
