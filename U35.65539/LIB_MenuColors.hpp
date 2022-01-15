#ifndef UE4SS_SDK_LIB_MenuColors_HPP
#define UE4SS_SDK_LIB_MenuColors_HPP

class ULIB_MenuColors_C : UBlueprintFunctionLibrary
{

    void WindowColors(uint8 InColor, UObject* __WorldContext, FLinearColor& Color1, FLinearColor& Color2, uint8 Temp_byte_Variable, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, FLinearColor Temp_struct_Variable_2, FLinearColor Temp_struct_Variable_3, FLinearColor Temp_struct_Variable_4, FLinearColor Temp_struct_Variable_5, uint8 Temp_byte_Variable_1, FLinearColor Temp_struct_Variable_6, FLinearColor Temp_struct_Variable_7, FLinearColor Temp_struct_Variable_8, FLinearColor Temp_struct_Variable_9, FLinearColor Temp_struct_Variable_10, FLinearColor Temp_struct_Variable_11, FLinearColor K2Node_Select_Default, FLinearColor K2Node_Select_Default_1);
    void SelectTextColor(UTextBlock* Text, uint8 FALSE, uint8 TRUE, bool Condition, UObject* __WorldContext, bool Temp_bool_Variable, uint8 K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
    void SetTextColor(UTextBlock* Text, uint8 Color, UObject* __WorldContext, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
    void SelectMenuColor(uint8 FALSE, uint8 TRUE, bool Condition, UObject* __WorldContext, FLinearColor& OutputColor, bool Temp_bool_Variable, uint8 K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor);
    void MenuColorsAndOpacity(uint8 ColorSelector, float Opacity, UObject* __WorldContext, FLinearColor& OutputColor, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor K2Node_MakeStruct_LinearColor);
    void MenuColors(uint8 ColorSelector, UObject* __WorldContext, FLinearColor& OutputColor, uint8 Temp_byte_Variable, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, FLinearColor Temp_struct_Variable_2, FLinearColor Temp_struct_Variable_3, FLinearColor Temp_struct_Variable_4, FLinearColor Temp_struct_Variable_5, FLinearColor Temp_struct_Variable_6, FLinearColor Temp_struct_Variable_7, FLinearColor Temp_struct_Variable_8, FLinearColor Temp_struct_Variable_9, FLinearColor Temp_struct_Variable_10, FLinearColor Temp_struct_Variable_11, FLinearColor Temp_struct_Variable_12, FLinearColor Temp_struct_Variable_13, FLinearColor Temp_struct_Variable_14, FLinearColor Temp_struct_Variable_15, FLinearColor Temp_struct_Variable_16, FLinearColor Temp_struct_Variable_17, FLinearColor Temp_struct_Variable_18, FLinearColor Temp_struct_Variable_19, FLinearColor Temp_struct_Variable_20, FLinearColor Temp_struct_Variable_21, FLinearColor Temp_struct_Variable_22, FLinearColor Temp_struct_Variable_23, FLinearColor Temp_struct_Variable_24, FLinearColor Temp_struct_Variable_25, FLinearColor Temp_struct_Variable_26, FLinearColor Temp_struct_Variable_27, FLinearColor Temp_struct_Variable_28, FLinearColor Temp_struct_Variable_29, FLinearColor Temp_struct_Variable_30, FLinearColor Temp_struct_Variable_31, FLinearColor Temp_struct_Variable_32, FLinearColor K2Node_Select_Default);
}

#endif
