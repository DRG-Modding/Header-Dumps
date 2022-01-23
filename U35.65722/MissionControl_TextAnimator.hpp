#ifndef UE4SS_SDK_MissionControl_TextAnimator_HPP
#define UE4SS_SDK_MissionControl_TextAnimator_HPP

class UMissionControl_TextAnimator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimTextRun;
    class URichTextBlock* TextBlock;
    FText Text;
    FRichTextParseResult Parser;
    float AnimProgress;

    void GetFirstWord(FString inString, FString& OutWord, bool FirstWhiteSpace, FString Char, FString Result, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsWhiteSpace_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Mid_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void SetAnimProgress(float AnimProgress, FString Caret, FString Hidden, FText Visible, int32 SplitIndex, float CallFunc_FClamp_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue_1, FString CallFunc_Mid_ReturnValue, FString CallFunc_Mid_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Conv_StringToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, FText CallFunc_SplitRichText_OutLeftText, FText CallFunc_SplitRichText_OutRightText, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_GetFirstWord_OutWord);
    void SetText(const FText InText, int32& Unformatted Length, FRichTextParseResult CallFunc_ParseRichText_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_MissionControl_TextAnimator(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 CallFunc_SetText_Unformatted_Length);
};

#endif
