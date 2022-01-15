#ifndef UE4SS_SDK_GatlingGun_Overheat_HPP
#define UE4SS_SDK_GatlingGun_Overheat_HPP

class UGatlingGun_Overheat_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* BG;
    UImage* CircularProgressBar;
    UTextBlock* TextBlock_HeatValue;
    UTextBlock* TextBlock_Status;
    UMaterialInstanceDynamic* DynamicMat;
    float HeatPercentage;
    bool Overheated;

    void SetHeatValue(float HeatPercentage, bool Overheated);
    void Construct();
    void SetProgress(float Percent);
    void ExecuteUbergraph_GatlingGun_Overheat(int32 EntryPoint, bool Temp_bool_Variable, FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, bool Temp_bool_Variable_2, FLinearColor Temp_struct_Variable_2, float K2Node_CustomEvent_HeatPercentage, bool K2Node_CustomEvent_Overheated, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FLinearColor K2Node_MakeStruct_LinearColor, FSlateColor K2Node_MakeStruct_SlateColor, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_TextToUpper_ReturnValue, float K2Node_CustomEvent_Percent, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_3, FLinearColor K2Node_Select_Default, FLinearColor K2Node_Select_Default_1, FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Conv_BoolToFloat_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FLinearColor CallFunc_LinearColorLerp_ReturnValue, FText CallFunc_Format_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_Select_Default_2, float CallFunc_Divide_FloatFloat_ReturnValue, FText K2Node_Select_Default_3);
}

#endif
