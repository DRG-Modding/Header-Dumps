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

    void SetFontSize(int32 inFontSize);
    void SetText(FText NewText, FText OverrideControllerText);
    void Update();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_FlatGradientButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
