#ifndef UE4SS_SDK_ITM_TimeText_HPP
#define UE4SS_SDK_ITM_TimeText_HPP

class UITM_TimeText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Text_Timer;
    FSlateFontInfo Font;

    void SetData(FTimespan Timespan, const bool ShowDays);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_TimeText(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FTimespan K2Node_CustomEvent_Timespan, const bool K2Node_CustomEvent_ShowDays, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, FText CallFunc_Conv_IntToText_ReturnValue_2, FText CallFunc_Conv_IntToText_ReturnValue_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_5, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_6, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue, FText CallFunc_Format_ReturnValue_1);
};

#endif
