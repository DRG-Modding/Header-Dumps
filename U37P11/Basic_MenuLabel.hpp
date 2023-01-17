#ifndef UE4SS_SDK_Basic_MenuLabel_HPP
#define UE4SS_SDK_Basic_MenuLabel_HPP

class UBasic_MenuLabel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Label;
    FText Text;
    int32 Font Size;
    TEnumAsByte<ENUM_CarbonTypeface::Type> Typeface;
    TEnumAsByte<ETextJustify::Type> Justification;
    float Min Desired Width;
    TEnumAsByte<ENUM_MenuColors::Type> Text Color;
    bool UpperCase;

    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    void SetTypeFace(TEnumAsByte<ENUM_CarbonTypeface::Type> Typeface);
    void SetFontSize(int32 inFontSize);
    void SetText(FText NewText);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_MenuLabel(int32 EntryPoint);
};

#endif
