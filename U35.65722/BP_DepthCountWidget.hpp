#ifndef UE4SS_SDK_BP_DepthCountWidget_HPP
#define UE4SS_SDK_BP_DepthCountWidget_HPP

class UBP_DepthCountWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AlertBlink;
    class UImage* Image_50;
    class UTextBlock* TextBlock_4;
    class UTextBlock* TextBlock_5;
    class UTextBlock* TextBlock_6;
    class UTextBlock* TextBlockDepth;
    float Depth;

    void UpdateDepthText(float CallFunc_RandomFloatInRange_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FText CallFunc_Conv_FloatToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1);
    void SetProgress(float Progress);
    void Construct();
    void ExecuteUbergraph_BP_DepthCountWidget(int32 EntryPoint);
};

#endif
