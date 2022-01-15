#ifndef UE4SS_SDK_Basic_CheckBox_HPP
#define UE4SS_SDK_Basic_CheckBox_HPP

class UBasic_CheckBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* TickShow;
    UWidgetAnimation* Click;
    UImage* Checkbox_Border;
    UButton* Checkbox_Button;
    UImage* CheckBox_Tick;
    UImage* Checkbox_Undetermined;
    UTextBlock* CheckBoxText;
    UHorizontalBox* Horizontal;
    USizeBox* SizeBox_CheckBox;
    USizeBox* SizeBox_Text;
    UWidgetSwitcher* StateSwitcher;
    FBasic_CheckBox_COnCheckStateChanged OnCheckStateChanged;
    void OnCheckStateChanged(bool IsChecked);
    float Size;
    bool IsChecked;
    FText Text;
    bool UpperCase;
    TEnumAsByte<ENUM_MenuColors::Type> TextColor;
    ECheckBoxState State;
    TEnumAsByte<ENUM_MenuColors::Type> FrameColor;
    TEnumAsByte<ENUM_MenuColors::Type> HoveredColor;
    float TextWidth;

    void SetTextWidth(float InWidthOverride, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetHovered(bool InHovered, bool Temp_bool_Variable, uint8 K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor);
    void SetSize(float InSize, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, UWidgetSwitcherSlot* CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue, FMargin K2Node_MakeStruct_Margin);
    void GetState(ECheckBoxState& State);
    void SetState(ECheckBoxState InState, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_Select_Default, FVector2D K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
    void GetUpperCased(bool& UpperCase);
    void SetText(FText InText, bool InUpperCase, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_1, UButtonSlot* K2Node_DynamicCast_AsButton_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, uint8 K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default_1);
    void SetIsChecked(bool InIsChecked, bool Temp_bool_Variable, ECheckBoxState Temp_byte_Variable, ECheckBoxState Temp_byte_Variable_1, ECheckBoxState K2Node_Select_Default);
    bool GetIsChecked();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ClickButton();
    void OnClicked(bool InChecked);
    void ExecuteUbergraph_Basic_CheckBox(int32 EntryPoint, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, uint8 K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_CustomEvent_InChecked);
    void OnCheckStateChanged__DelegateSignature(bool IsChecked);
}

#endif
