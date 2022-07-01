#ifndef UE4SS_SDK_Basic_Label_HPP
#define UE4SS_SDK_Basic_Label_HPP

class UBasic_Label_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDLabelWidget* Label;
    FText Text;
    bool ToUpper;
    FSlateFontInfo Font;
    TEnumAsByte<ENUM_MenuColors::Type> TextColor;
    TEnumAsByte<ETextJustify::Type> Justification;
    float MinDesiredWidth;
    FMargin TextMargin;
    bool AutoTextWrap;
    float WrapTextAt;
    ETextWrappingPolicy WrappingPolicy;
    int32 MaxLength;
    FText MaxLengthIndicator;

    void SelectTextColor(TEnumAsByte<ENUM_MenuColors::Type> FALSE, TEnumAsByte<ENUM_MenuColors::Type> TRUE, bool Condition);
    void GetText(FText& Text);
    void SetWrappingPolicy(ETextWrappingPolicy WrappingPolicy);
    void SetWrapTextAt(float WrapTextAt);
    void SetAutoWrapText(bool AutoTextWrap);
    void SetFontSize(int32 inFontSize);
    void SetMinDesiredWidth(float MinDesiredWidth);
    void SetJustification(TEnumAsByte<ETextJustify::Type> Justification);
    void SetTextColor(TEnumAsByte<ENUM_MenuColors::Type> TextColor);
    void SetText(FText Text);
    void SetMargin(FMargin New Margin);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_Label(int32 EntryPoint);
};

#endif
