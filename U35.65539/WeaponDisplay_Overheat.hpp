#ifndef UE4SS_SDK_WeaponDisplay_Overheat_HPP
#define UE4SS_SDK_WeaponDisplay_Overheat_HPP

class UWeaponDisplay_Overheat_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_88;
    UTextBlock* TextBlock_HeatValue;
    UTextBlock* TextBlock_Status;

    void SetHeatValue(float HeatPercentage, bool Overheated);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_Overheat(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, FText Temp_text_Variable, float K2Node_CustomEvent_HeatPercentage, bool K2Node_CustomEvent_Overheated, FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_BoolToFloat_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FLinearColor K2Node_MakeStruct_LinearColor, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FSlateColor K2Node_MakeStruct_SlateColor, FText CallFunc_Format_ReturnValue, FLinearColor CallFunc_LinearColorLerp_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_Select_Default, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default_1);
}

#endif
