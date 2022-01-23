#ifndef UE4SS_SDK_Basic_ButtonCutCorner_HPP
#define UE4SS_SDK_Basic_ButtonCutCorner_HPP

class UBasic_ButtonCutCorner_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Background;
    class UButton* Button_0;
    class UImage* Image_Outline;
    class UOverlay* Overlay_Outer;
    class UScaleBox* ScaleBox_53;
    class USizeBox* Sizer;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    FText ButtonText;
    FBasic_ButtonCutCorner_COnClicked OnClicked;
    void OnClicked(class UBasic_ButtonCutCorner_C* Button);
    FText ControllerOverrideText;
    int32 Font Size;
    float Width (minimum);
    float Height;
    FBasic_ButtonCutCorner_COnPressed OnPressed;
    void OnPressed();
    FBasic_ButtonCutCorner_COnReleased OnReleased;
    void OnReleased();
    bool IsSelected;

    void IsPressed(bool& IsPressed, bool CallFunc_IsPressed_ReturnValue);
    void SetButtonText(FText Text, FText OverrideControllerText, FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue);
    void SetFontSize(int32 FontSize, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void Update Look();
    void Click();
    void Toggle(bool IsToggleOn);
    void ExecuteUbergraph_Basic_ButtonCutCorner(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class UBasic_ToolTip_C* K2Node_DynamicCast_AsBasic_Tool_Tip, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_CustomEvent_IsToggleOn);
    void OnReleased__DelegateSignature();
    void OnPressed__DelegateSignature();
    void OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
};

#endif
