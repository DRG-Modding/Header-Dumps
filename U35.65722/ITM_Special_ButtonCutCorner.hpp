#ifndef UE4SS_SDK_ITM_Special_ButtonCutCorner_HPP
#define UE4SS_SDK_ITM_Special_ButtonCutCorner_HPP

class UITM_Special_ButtonCutCorner_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Background;
    class UBorder* Border_LeftIcon;
    class UButton* Button_0;
    class UImage* Image_Outline;
    class UImage* LeftIcon;
    class UOverlay* Overlay_Icon;
    class UOverlay* Overlay_Outer;
    class USizeBox* SizeBox_Icon;
    class USizeBox* Sizer;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    FText ButtonText;
    FITM_Special_ButtonCutCorner_COnClicked OnClicked;
    void OnClicked();
    FText ControllerOverrideText;
    int32 Font Size;
    float Width (minimum);
    float Height;
    FITM_Special_ButtonCutCorner_COnPressed OnPressed;
    void OnPressed();
    FITM_Special_ButtonCutCorner_COnReleased OnReleased;
    void OnReleased();
    bool IsSelected;
    class UTexture2D* Icon;
    TEnumAsByte<ENUM_MenuColors::Type> NormalColor;
    TEnumAsByte<ENUM_MenuColors::Type> SelectedColor;
    TEnumAsByte<ENUM_MenuColors::Type> IconColor;

    void IsPressed(bool& IsPressed, bool CallFunc_IsPressed_ReturnValue);
    void SetButtonText(FText Text, FText OverrideControllerText, bool CallFunc_EqualEqual_TextText_ReturnValue);
    void SetFontSize(int32 FontSize, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void SetSelected(bool IsSelected);
    void Update Look();
    void Click();
    void ExecuteUbergraph_ITM_Special_ButtonCutCorner(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime, class UBasic_ToolTip_C* K2Node_DynamicCast_AsBasic_Tool_Tip, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_IsSelected, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_1, FLinearColor CallFunc_MenuColors_OutputColor_3, FSlateColor K2Node_MakeStruct_SlateColor_2);
    void OnReleased__DelegateSignature();
    void OnPressed__DelegateSignature();
    void OnClicked__DelegateSignature();
};

#endif
