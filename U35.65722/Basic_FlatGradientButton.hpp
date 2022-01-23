#ifndef UE4SS_SDK_Basic_FlatGradientButton_HPP
#define UE4SS_SDK_Basic_FlatGradientButton_HPP

class UBasic_FlatGradientButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button;
    class UBasic_Image_C* Button_Background;
    class UBorder* Button_Border;
    class UOverlay* Button_Overlay;
    class USizeBox* Button_SizeBox;
    class UUI_AdvancedLabel_C* Button_Text;
    class UScaleBox* Button_TextScale;
    TEnumAsByte<ENUM_MenuColors::Type> TextTint;
    TEnumAsByte<ENUM_MenuColors::Type> ButtonTint;
    TEnumAsByte<ENUM_MenuColors::Type> BorderTint;
    TEnumAsByte<ENUM_MenuColors::Type> ButtonHoveredTint;
    TEnumAsByte<ENUM_MenuColors::Type> BorderHoverdTint;
    TEnumAsByte<EHorizontalAlignment> ContentHorizontalAlignment;
    FText Text;
    FText TextControllerOverride;
    FSlateFontInfo TextFont;
    FSizeBoxSettings ButtonSize;
    FMargin TextPadding;
    TEnumAsByte<EStretch::Type> TextScale;
    FBasic_FlatGradientButton_COnClicked OnClicked;
    void OnClicked();

    void SetFontSize(int32 inFontSize, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void SetText(FText NewText, FText OverrideControllerText);
    void Update(bool Temp_bool_Variable, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_IsHovered_ReturnValue, FLinearColor CallFunc_SelectMenuColor_OutputColor, bool CallFunc_IsHovered_ReturnValue_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_FlatGradientButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UScaleBoxSlot* CallFunc_SlotAsScaleBoxSlot_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
    void OnClicked__DelegateSignature();
};

#endif
