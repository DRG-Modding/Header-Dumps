#ifndef UE4SS_SDK_UI_ForceSeasonEvent_HPP
#define UE4SS_SDK_UI_ForceSeasonEvent_HPP

class UUI_ForceSeasonEvent_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UComboBoxString* ComboBoxString_45;
    FString NewVar_0;
    TArray<TSoftObjectPtr<USpecialEvent>> Events;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, uint8 SelectionType);
    void ExecuteUbergraph_UI_ForceSeasonEvent(int32 EntryPoint, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, SoftObjectProperty CallFunc_Array_Get_Item, FString CallFunc_Conv_SoftObjectReferenceToString_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FString CallFunc_Split_LeftS, FString CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FString K2Node_ComponentBoundEvent_SelectedItem, uint8 K2Node_ComponentBoundEvent_SelectionType, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FindOptionIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, SoftObjectProperty CallFunc_Array_Get_Item_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1);
}

#endif
