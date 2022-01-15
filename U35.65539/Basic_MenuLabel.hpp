#ifndef UE4SS_SDK_Basic_MenuLabel_HPP
#define UE4SS_SDK_Basic_MenuLabel_HPP

class UBasic_MenuLabel_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* Label;
    FText Text;
    int32 Font Size;
    TEnumAsByte<ENUM_CarbonTypeface::Type> Typeface;
    TEnumAsByte<ETextJustify::Type> Justification;
    float Min Desired Width;
    TEnumAsByte<ENUM_MenuColors::Type> Text Color;
    bool UpperCase;

    void SetJustification(uint8 InJustification);
    void SetTypeFace(uint8 Typeface, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void SetFontSize(int32 inFontSize, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void SetText(FText NewText, bool Temp_bool_Variable, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_MenuLabel(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
