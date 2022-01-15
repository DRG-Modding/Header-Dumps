#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSelector_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSelector_HPP

class UITM_Wardrobe_ItemSelector_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimOpen;
    UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    UITM_MenuBackground_C* ITM_MenuBackground;
    UUniformGridPanel* SelectorGrid;
    int32 MaxColumns;
    int32 MinimumRows;
    int32 CellSize;
    FMargin InnerPadding;
    bool LeftSide;
    bool DesignTime;
    bool SelectorOpen;
    FITM_Wardrobe_ItemSelector_COnItemClicked OnItemClicked;
    void OnItemClicked(int32 Index, UWidget* Widget);
    UITM_Wardrobe_ItemSlot_Base_C* ItemSlot;
    float AnimOpenProgress;
    FITM_Wardrobe_ItemSelector_COnSelectorOpenChanged OnSelectorOpenChanged;
    void OnSelectorOpenChanged(bool IsOpen);
    UITM_Wardrobe_ItemSelector_C* OtherSelector;

    void ItemUnhovered(int32 Index, UWidget* Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void ItemHovered(int32 Index, UWidget* Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void SetAnimOpenProgress(float InProgress, bool Temp_bool_Variable, float CallFunc_FClamp_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, float CallFunc_Lerp_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void ItemClicked(int32 Index, UWidget* Widget, bool CloseSelector, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SelectorItemClicked_OutCloseSelector);
    void SetOpen(bool InOpen, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, uint8 K2Node_Select_Default, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
    void PadRowWithBlanks(int32 GridCount, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UITM_Wardrobe_ItemSelector_Entry_C* CallFunc_AddItem_OutEntry, UWidget* CallFunc_AddItem_OutItemWidget, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 K2Node_Select_Default, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void ShowSlot(UITM_Wardrobe_ItemSlot_Base_C* InSlot, int32 ItemIndex, UWidget* Item, TArray<int32> NewItems, int32 SelectedIndex, TArray<UWidget*> Items, bool CallFunc_IsValid_ReturnValue, TArray<UWidget*>& CallFunc_GetItemWidgets_ItemWidgets, TArray<int32>& CallFunc_GetItemWidgets_NewItemIndices, int32 CallFunc_GetItemWidgets_OutSelectedIndex, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_1, UDLCBase* CallFunc_ReceiveItemDLC_FromDLC, UITM_Wardrobe_ItemSelector_Entry_C* CallFunc_AddItem_OutEntry, UWidget* CallFunc_AddItem_OutItemWidget, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, UITM_Wardrobe_ItemSelector_Entry_C* CallFunc_AddItem_OutEntry_1, UWidget* CallFunc_AddItem_OutItemWidget_1, UWidget* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
    void ClearItems();
    void AddItem(UWidget* InChildWidget, bool inSelected, bool IsNewItem, UDLCBase* FromDLC, UITM_Wardrobe_ItemSelector_Entry_C*& OutEntry, UWidget*& OutItemWidget, UITM_Wardrobe_ItemSelector_Entry_C* Entry, int32 Index, UUniformGridSlot* GridSlot, UITM_Wardrobe_ItemSelector_Entry_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable, OnEntryUnhovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnEntryHovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnEntryClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 K2Node_Select_Default, UUniformGridSlot* CallFunc_AddChildToUniformGridEx_OutSlot, UUniformGridPanel* CallFunc_AddChildToUniformGridEx_OutGridPanel, UITM_Wardrobe_ItemSelector_Entry_C* CallFunc_AddChildToUniformGridEx_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnimOpenStarted();
    void OnAnimOpenFinished();
    void OnOtherSelectorOpen(bool IsOpen);
    void ExecuteUbergraph_ITM_Wardrobe_ItemSelector(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, OnSelectorOpenChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_CustomEvent_IsOpen, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_RandomBool_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, UImage* CallFunc_CreateImageSized_ReturnValue, UITM_Wardrobe_ItemSelector_Entry_C* CallFunc_AddItem_OutEntry, UWidget* CallFunc_AddItem_OutItemWidget, float K2Node_Select_Default_1, FMargin K2Node_MakeStruct_Margin);
    void OnSelectorOpenChanged__DelegateSignature(bool IsOpen);
    void OnItemClicked__DelegateSignature(int32 Index, UWidget* Widget);
}

#endif
