#ifndef UE4SS_SDK_HUD_CroNew_GrapplingGun_HPP
#define UE4SS_SDK_HUD_CroNew_GrapplingGun_HPP

class UHUD_CroNew_GrapplingGun_C : UUserWidget
{
    UHUD_AngleIndicator_C* HUD_AngleIndicator_151;
    UHUD_CrossHair_Basic02_C* HUD_Crosshair_Basic02;
    UImage* Image_0;
    UImage* Image_1;
    UImage* Image_2;
    UImage* Image_3;
    UImage* Image_4;
    UImage* Image_5;
    UTextBlock* TextBlock_177;
    FLinearColor BaseColour;
    FLinearColor WarningColour;
    float OpacityHigh;
    float OpacityLow;

    void ClearMessage(FText CallFunc_MakeLiteralText_ReturnValue);
    void DistanceMessage(float Dist, FText CallFunc_MakeLiteralText_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Conv_FloatToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void FailMessage(FText& Msg, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
    void SetText(FText& Value, FLinearColor Color, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
