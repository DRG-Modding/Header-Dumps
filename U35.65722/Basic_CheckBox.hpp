#ifndef UE4SS_SDK_Basic_CheckBox_HPP
#define UE4SS_SDK_Basic_CheckBox_HPP

class UBasic_CheckBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TickShow;
    class UWidgetAnimation* Click;
    class UImage* Checkbox_Border;
    class UButton* Checkbox_Button;
    class UImage* CheckBox_Tick;
    class UImage* Checkbox_Undetermined;
    class UTextBlock* CheckBoxText;
    class UHorizontalBox* Horizontal;
    class USizeBox* SizeBox_CheckBox;
    class USizeBox* SizeBox_Text;
    class UWidgetSwitcher* StateSwitcher;
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
    void SetHovered(bool InHovered, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor);
    void SetSize(float InSize, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UWidgetSwitcherSlot* CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue, FMargin K2Node_MakeStruct_Margin);
    void GetState(ECheckBoxState& State);
    void SetState(ECheckBoxState InState, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_Select_Default, FVector2D K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
    void GetUpperCased(bool& UpperCase);
    void SetText(FText InText, bool InUpperCase, bool Temp_bool_Variable, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable_1, bool Temp_bool_Variable_1, class UButtonSlot* K2Node_DynamicCast_AsButton_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, TEnumAsByte<EHorizontalAlignment> K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default_1);
    void SetIsChecked(bool InIsChecked, bool Temp_bool_Variable, ECheckBoxState Temp_byte_Variable, ECheckBoxState Temp_byte_Variable_1, ECheckBoxState K2Node_Select_Default);
    bool GetIsChecked();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ClickButton();
    void OnClicked(bool InChecked);
    void ExecuteUbergraph_Basic_CheckBox(int32 EntryPoint, bool Temp_bool_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_CustomEvent_InChecked);
    void OnCheckStateChanged__DelegateSignature(bool IsChecked);
};

#endif
