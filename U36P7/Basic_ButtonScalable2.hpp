#ifndef UE4SS_SDK_Basic_ButtonScalable2_HPP
#define UE4SS_SDK_Basic_ButtonScalable2_HPP

class UBasic_ButtonScalable2_C : public UFSDAdvancedLabel
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anim_Btn_Click;
    class UWidgetAnimation* Anim_Unhover;
    class UWidgetAnimation* Anim_Hover;
    class USizeBox* Bar_Left_Sizer;
    class USizeBox* Bar_Right_Sizer;
    class UBorder* BaseLeft;
    class UBorder* BaseMid;
    class UBorder* BaseRight;
    class UButton* Button_0;
    class UTextBlock* CountDownLabel;
    class UImage* LeftIcon;
    class UVerticalBox* Lines;
    class UImage* RightIcon;
    class USizeBox* Sizer;
    class USpacer* Spacer_0;
    class USpacer* Spacer_1;
    class UHorizontalBox* CurrentLine;
    bool Thick Bars;
    float Width (minimum);
    float Height (minimum);
    int32 Icon Size;
    int32 Icon Size - Controller Override;
    FLinearColor Tint - PC Icon;
    FLinearColor Tint - Controller Icon;
    FSlateFontInfo Font;
    FBasic_ButtonScalable2_COnClicked OnClicked;
    void OnClicked();
    FSlateBrush LeftIconBrush;
    FMargin LeftIconPadding;
    FSlateBrush RightIconBrush;
    FMargin RightIconPadding;
    TEnumAsByte<ENUM_MenuColors::Type> BackgroundNormal;
    TEnumAsByte<ENUM_MenuColors::Type> BackgroundHover;
    FLinearColor Font Color;
    float Width2;
    float Width4;
    bool ToggledOn;
    FBasic_ButtonScalable2_COnHovered OnHovered;
    void OnHovered();
    FBasic_ButtonScalable2_COnUnhovered OnUnhovered;
    void OnUnhovered();

    void HideCountDown();
    void SetCountDown(int32 SecondsRemaining, int32 MinimumIntegralDigits);
    void SetBackgroundColor(TEnumAsByte<ENUM_MenuColors::Type> ColorSelector);
    void SetIconBrush(class UImage*& Icon, FSlateBrush InBrush, FMargin InPadding);
    void SetTints(FLinearColor PC  Icon Tint, FLinearColor Controller Icon Tint);
    void SetIconTint(FLinearColor PC  Icon Tint, FLinearColor Controller Icon Tint);
    void OnNewLine(int32 Index);
    void OnAddIcon(FString Name, const FActionIconMapping& Icon);
    void OnAddKeyName(FString Name);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void OnAddString(FString Value);
    void OnReset();
    void Toggle(bool IsToggledOn);
    void SetToggled();
    void SetUntoggled();
    void Click();
    void ExecuteUbergraph_Basic_ButtonScalable2(int32 EntryPoint);
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature();
    void OnClicked__DelegateSignature();
};

#endif
