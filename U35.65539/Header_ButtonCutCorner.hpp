#ifndef UE4SS_SDK_Header_ButtonCutCorner_HPP
#define UE4SS_SDK_Header_ButtonCutCorner_HPP

class UHeader_ButtonCutCorner_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* Background;
    UButton* Button_0;
    UImage* Image_Outline;
    USizeBox* Sizer;
    UTextBlock* TXT_ButtonText;
    FText ButtonText;
    FHeader_ButtonCutCorner_COnClicked OnClicked;
    void OnClicked(UHeader_ButtonCutCorner_C* Button);
    int32 Font Size;
    float Width (minimum);
    float Height;
    FHeader_ButtonCutCorner_COnPressed OnPressed;
    void OnPressed();
    FHeader_ButtonCutCorner_COnReleased OnReleased;
    void OnReleased();
    bool IsSelected;
    bool TopRightCorner;

    void IsPressed(bool& IsPressed, bool CallFunc_IsPressed_ReturnValue);
    void SetButtonText(FText Text, FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue);
    void SetFontSize(int32 FontSize, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void Toggle(bool IsToggleOn);
    void Update Look();
    void Click();
    void ExecuteUbergraph_Header_ButtonCutCorner(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, UBasic_ToolTip_C* K2Node_DynamicCast_AsBasic_Tool_Tip, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_IsToggleOn, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_MakeStruct_SlateColor_2, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Select_Default, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void OnReleased__DelegateSignature();
    void OnPressed__DelegateSignature();
    void OnClicked__DelegateSignature(UHeader_ButtonCutCorner_C* Button);
}

#endif
