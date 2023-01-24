#ifndef UE4SS_SDK_HUD_DefaultLabel_HPP
#define UE4SS_SDK_HUD_DefaultLabel_HPP

class UHUD_DefaultLabel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Label;
    FText Text;
    int32 Font Size;
    TEnumAsByte<ENUM_AcuminCondensedTypeface::Type> Typeface;
    TEnumAsByte<ETextJustify::Type> Justification;
    FFontOutlineSettings Outline Settings;
    float Min Desired Width;
    TEnumAsByte<ENUM_MenuColors::Type> TextColor;

    void SetTextColor(TEnumAsByte<ENUM_MenuColors::Type> ColorSelector);
    void SetOutlineSettings(FFontOutlineSettings InFontInfo_OutlineSettings);
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    void SetTypeFace(TEnumAsByte<ENUM_AcuminCondensedTypeface::Type> Typeface);
    void SetFontSize(int32 inFontSize);
    void SetText(FText NewText);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_DefaultLabel(int32 EntryPoint);
};

#endif
