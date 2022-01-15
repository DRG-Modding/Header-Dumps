#ifndef UE4SS_SDK_ITM_GenericGarbageMultiline_HPP
#define UE4SS_SDK_ITM_GenericGarbageMultiline_HPP

class UITM_GenericGarbageMultiline_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UScrollBox* ScrollBox_0;
    UTextBlock* TextBlock_0;
    float TimePassed;
    TArray<FString> Operations;
    bool NewOperation;
    int32 CurrentOperation;
    int32 Steps;
    int32 CurrentStep;
    float OperationDelay;
    FSlateColor Color and Opacity;
    FSlateFontInfo Font;
    TEnumAsByte<ETextJustify::Type> Justification;
    FLinearColor Shadow Color and Opacity;
    FVector2D Shadow Offset;

    void BuildTextBlock();
    void GetNewOperation(float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue);
    void DoOperation(FString Temp_string_Variable, FString Temp_string_Variable_1, FString Temp_string_Variable_2, FString Temp_string_Variable_3, FString Temp_string_Variable_4, FString Temp_string_Variable_5, FString Temp_string_Variable_6, int32 Temp_int_Variable, FString Temp_string_Variable_7, FString Temp_string_Variable_8, FString Temp_string_Variable_9, FString Temp_string_Variable_10, FString Temp_string_Variable_11, FString Temp_string_Variable_12, FString Temp_string_Variable_13, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue_1, FString K2Node_Select_Default, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_MakeLiteralString_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Conv_FloatToString_ReturnValue, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Variable_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, FString K2Node_Select_Default_1, FString K2Node_Select_Default_2, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_1);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ITM_GenericGarbageMultiline(int32 EntryPoint, TArray<FString>& K2Node_MakeArray_Array, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue);
}

#endif
