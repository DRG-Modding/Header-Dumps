#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSelector_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSelector_HPP

class UITM_Wardrobe_ItemSelector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimOpen;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UITM_MenuBackground_C* ITM_MenuBackground;
    class UUniformGridPanel* SelectorGrid;
    int32 MaxColumns;
    int32 MinimumRows;
    int32 CellSize;
    FMargin InnerPadding;
    bool LeftSide;
    bool DesignTime;
    bool SelectorOpen;
    FITM_Wardrobe_ItemSelector_COnItemClicked OnItemClicked;
    void OnItemClicked(int32 Index, class UWidget* Widget);
    class UITM_Wardrobe_ItemSlot_Base_C* ItemSlot;
    float AnimOpenProgress;
    FITM_Wardrobe_ItemSelector_COnSelectorOpenChanged OnSelectorOpenChanged;
    void OnSelectorOpenChanged(bool IsOpen);
    class UITM_Wardrobe_ItemSelector_C* OtherSelector;

    void ItemUnhovered(int32 Index, class UWidget* Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void ItemHovered(int32 Index, class UWidget* Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void SetAnimOpenProgress(float InProgress, bool Temp_bool_Variable, float CallFunc_FClamp_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, float CallFunc_Lerp_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void ItemClicked(int32 Index, class UWidget* Widget, bool CloseSelector, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SelectorItemClicked_OutCloseSelector);
    void SetOpen(bool InOpen, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
    void PadRowWithBlanks(int32 GridCount, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UITM_Wardrobe_ItemSelector_Entry_C* CallFunc_AddItem_OutEntry, class UWidget* CallFunc_AddItem_OutItemWidget, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 K2Node_Select_Default, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void ShowSlot(class UITM_Wardrobe_ItemSlot_Base_C* InSlot, int32 ItemIndex, class UWidget* Item, TArray<int32> NewItems, int32 SelectedIndex, TArray<class UWidget*> Items, bool CallFunc_IsValid_ReturnValue, TArray<class UWidget*>& CallFunc_GetItemWidgets_ItemWidgets, TArray<int32>& CallFunc_GetItemWidgets_NewItemIndices, int32 CallFunc_GetItemWidgets_OutSelectedIndex, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_1, class UDLCBase* CallFunc_ReceiveItemDLC_FromDLC, class UITM_Wardrobe_ItemSelector_Entry_C* CallFunc_AddItem_OutEntry, class UWidget* CallFunc_AddItem_OutItemWidget, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UITM_Wardrobe_ItemSelector_Entry_C* CallFunc_AddItem_OutEntry_1, class UWidget* CallFunc_AddItem_OutItemWidget_1, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
    void ClearItems();
    void AddItem(class UWidget* InChildWidget, bool inSelected, bool IsNewItem, class UDLCBase* FromDLC, class UITM_Wardrobe_ItemSelector_Entry_C*& OutEntry, class UWidget*& OutItemWidget, class UITM_Wardrobe_ItemSelector_Entry_C* Entry, int32 Index, class UUniformGridSlot* GridSlot, class UITM_Wardrobe_ItemSelector_Entry_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable, FAddItemK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FAddItemK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FAddItemK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 K2Node_Select_Default, class UUniformGridSlot* CallFunc_AddChildToUniformGridEx_OutSlot, class UUniformGridPanel* CallFunc_AddChildToUniformGridEx_OutGridPanel, class UITM_Wardrobe_ItemSelector_Entry_C* CallFunc_AddChildToUniformGridEx_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnimOpenStarted();
    void OnAnimOpenFinished();
    void OnOtherSelectorOpen(bool IsOpen);
    void ExecuteUbergraph_ITM_Wardrobe_ItemSelector(int32 EntryPoint, FExecuteUbergraph_ITM_Wardrobe_ItemSelectorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_ITM_Wardrobe_ItemSelectorK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_CustomEvent_IsOpen, FExecuteUbergraph_ITM_Wardrobe_ItemSelectorK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_RandomBool_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, class UImage* CallFunc_CreateImageSized_ReturnValue, class UITM_Wardrobe_ItemSelector_Entry_C* CallFunc_AddItem_OutEntry, class UWidget* CallFunc_AddItem_OutItemWidget, float K2Node_Select_Default_1, FMargin K2Node_MakeStruct_Margin);
    void OnSelectorOpenChanged__DelegateSignature(bool IsOpen);
    void OnItemClicked__DelegateSignature(int32 Index, class UWidget* Widget);
};

#endif
