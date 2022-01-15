#ifndef UE4SS_SDK_BP_Count_Randoms_Widget_HPP
#define UE4SS_SDK_BP_Count_Randoms_Widget_HPP

class UBP_Count_Randoms_Widget_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_0;
    UImage* Image_2;
    UImage* Image_3;
    UTextBlock* TextBlock_4;
    UTextBlock* TextBlock_5;
    UTextBlock* TextBlock_6;
    float Depth;

    void UpdateDepthText(float CallFunc_RandomFloatInRange_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, float CallFunc_Add_FloatFloat_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void SetProgress(float Progress);
    void Construct();
    void ExecuteUbergraph_BP_Count_Randoms_Widget(int32 EntryPoint);
}

#endif
