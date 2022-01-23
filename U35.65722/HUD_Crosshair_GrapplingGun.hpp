#ifndef UE4SS_SDK_HUD_Crosshair_GrapplingGun_HPP
#define UE4SS_SDK_HUD_Crosshair_GrapplingGun_HPP

class UHUD_Crosshair_GrapplingGun_C : public UUserWidget
{
    class UHUD_AngleIndicator_C* HUD_AngleIndicator_151;
    class UHUD_CrossHair_Basic02_C* HUD_Crosshair_Basic02;
    class UTextBlock* TextBlock_177;

    void ClearMessage();
    void DistanceMessage(float Dist, FText CallFunc_MakeLiteralText_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Conv_FloatToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void FailMessage(FText Msg, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
    void SetText(FText Value, FLinearColor Color, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility K2Node_Select_Default);
};

#endif
