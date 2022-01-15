#ifndef UE4SS_SDK_Basic_Label_HPP
#define UE4SS_SDK_Basic_Label_HPP

class UBasic_Label_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UFSDLabelWidget* Label;
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

    void SelectTextColor(uint8 FALSE, uint8 TRUE, bool Condition, bool Temp_bool_Variable, uint8 K2Node_Select_Default);
    void GetText(FText& Text);
    void SetWrappingPolicy(ETextWrappingPolicy WrappingPolicy);
    void SetWrapTextAt(float WrapTextAt);
    void SetAutoWrapText(bool AutoTextWrap);
    void SetFontSize(int32 inFontSize, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void SetMinDesiredWidth(float MinDesiredWidth);
    void SetJustification(uint8 Justification);
    void SetTextColor(uint8 TextColor, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
    void SetText(FText Text, bool Temp_bool_Variable, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default, FText CallFunc_ClampTextLength_ReturnValue);
    void SetMargin(FMargin New Margin);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_Label(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
