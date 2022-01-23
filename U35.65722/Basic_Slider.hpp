#ifndef UE4SS_SDK_Basic_Slider_HPP
#define UE4SS_SDK_Basic_Slider_HPP

class UBasic_Slider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* ColorOverlay;
    class UTextBlock* DATA_Percentage;
    class UProgressBar* ProgressBar_0;
    class USizeBox* SizeBox_1;
    class USlider* Slider;
    FBasic_Slider_COnValueChanged OnValueChanged;
    void OnValueChanged(float Value);
    float MinValue;
    float MaxValue;
    FBasic_Slider_COnPercentChanged OnPercentChanged;
    void OnPercentChanged(float Percent);
    FText TextFormat;
    int32 MaxFractionalDigits;
    float MinDesiredWidth;
    int32 MinFractionalDigits;
    float MappedMinValue;
    float MappedMaxValue;

    void Set Text(FText New Text);
    void Get Value(float& Value, float CallFunc_Get_Percent_Percent, float CallFunc_MapRangeClamped_ReturnValue);
    void Get Percent(float& Percent, float CallFunc_GetValue_ReturnValue);
    void Set Value(float Value, float CallFunc_MapRangeClamped_ReturnValue);
    void Set Percent(float New Percent);
    void BndEvt__Slider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature();
    void BndEvt__Slider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Update Text();
    void ExecuteUbergraph_Basic_Slider(int32 EntryPoint, float CallFunc_Get_Value_Value, float K2Node_ComponentBoundEvent_Value, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor_2, float CallFunc_Get_Value_Value_1, float CallFunc_Get_Percent_Percent, float CallFunc_Multiply_FloatFloat_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Get_Percent_Percent_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, float CallFunc_Get_Percent_Percent_2, float CallFunc_Get_Value_Value_2, int32 CallFunc_FFloor_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FText CallFunc_Conv_FloatToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, float CallFunc_MapRangeClamped_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void OnPercentChanged__DelegateSignature(float Percent);
    void OnValueChanged__DelegateSignature(float Value);
};

#endif
