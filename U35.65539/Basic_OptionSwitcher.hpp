#ifndef UE4SS_SDK_Basic_OptionSwitcher_HPP
#define UE4SS_SDK_Basic_OptionSwitcher_HPP

class UBasic_OptionSwitcher_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* ArrowBox_Text;
    UBasic_ScrollArrow2_C* ArrowLeft;
    UBasic_ScrollArrow2_C* ArrowRight;
    UButton* Button_Left;
    UButton* Button_Right;
    TArray<FText> options;
    int32 SelectedIndex;
    bool Loop;
    FBasic_OptionSwitcher_COnSelectionChanged OnSelectionChanged;
    void OnSelectionChanged(FText Value, int32 Index);
    bool White Text;

    void ContainsOption(FText Option, bool& DoesContain, bool CallFunc_Array_Contains_ReturnValue);
    bool RemoveOption(FText& Itembool CallFunc_Array_RemoveItem_ReturnValue);
    void GetOptionCount(int32& count, int32 CallFunc_Array_Length_ReturnValue);
    void ClearOptions();
    void Add Option(FText Option, int32& Index, int32 CallFunc_Array_Add_ReturnValue);
    void GetSelectedValue(FText& Value, bool Temp_bool_Variable, FText Temp_text_Variable, FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FText K2Node_Select_Default);
    void GetSelectedIndex(int32& Index);
    void SetSelectedValue(FText Value, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FText CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetSelectedIndex(int32 NewIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue);
    void Set Options(TArray<FText>& options, int32 DefaultIndex);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_OptionSwitcher(int32 EntryPoint, bool Temp_bool_Variable, FLinearColor CallFunc_SetActive_ReturnValue, FLinearColor CallFunc_SetActive_ReturnValue_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FText CallFunc_GetSelectedValue_Value, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_Select_Default, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_SetActive_ReturnValue_2, FLinearColor CallFunc_SetActive_ReturnValue_3);
    void OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
}

#endif
