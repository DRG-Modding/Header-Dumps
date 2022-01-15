#ifndef UE4SS_SDK_HUD_DefaultLabel_HPP
#define UE4SS_SDK_HUD_DefaultLabel_HPP

class UHUD_DefaultLabel_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* Label;
    FText Text;
    int32 Font Size;
    TEnumAsByte<ENUM_AcuminCondensedTypeface::Type> Typeface;
    TEnumAsByte<ETextJustify::Type> Justification;
    FFontOutlineSettings Outline Settings;
    float Min Desired Width;
    TEnumAsByte<ENUM_MenuColors::Type> TextColor;

    void SetTextColor(uint8 ColorSelector, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
    void SetOutlineSettings(FFontOutlineSettings InFontInfo_OutlineSettings, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void SetJustification(uint8 InJustification);
    void SetTypeFace(uint8 Typeface, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void SetFontSize(int32 inFontSize, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void SetText(FText NewText);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_DefaultLabel(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
