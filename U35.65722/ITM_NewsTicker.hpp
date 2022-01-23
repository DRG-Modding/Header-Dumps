#ifndef UE4SS_SDK_ITM_NewsTicker_HPP
#define UE4SS_SDK_ITM_NewsTicker_HPP

class UITM_NewsTicker_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_TickerText_C* UI_TickerText;
    class UNewsTextHeadlines* MineralTradeData;
    int32 LastSeed;
    bool IsTesting;
    class UMissionNameBank* MissionNames;
    class UNewsTextLists* NewsTexts;

    FString GenerateFluffStock(const FRandomStream& RandomStreamFString FDJ, int32 NumberOfCompanyLetters, FString Company, TArray<FString> Letters, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, TArray<FString>& K2Node_MakeArray_Array, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloatFromStream_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FString CallFunc_SelectString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1, FString CallFunc_Array_Get_Item, FString CallFunc_Concat_StrStr_ReturnValue_2, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_RandomBoolFromStream_ReturnValue, FString CallFunc_SelectString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue_5);
    void GenerateTickerText(int32 SelectedIdx, TArray<FText> TextPool, int64 MinutesBetweenNewHeadlines, bool NewLocalVar_0, TArray<FText> G_MissionNames, int32 NumberOfTextToGenerate, TArray<FString> Letters, int32 NewSeed, TArray<FText> SelectedTexts, TArray<FText> texts, FText Result, TArray<class UResourceData*> Resources, FRandomStream Stream, TArray<FString>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<FText>& CallFunc_FormatNewsTexts_ReturnValue, int64 CallFunc_GetUnixTimeStamp_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue, FText CallFunc_Array_Get_Item_1, int64 CallFunc_Divide_Int64Int64_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, FString CallFunc_GenerateFluffStock_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_NotEqual_IntInt_ReturnValue, FRandomStream CallFunc_MakeRandomStream_ReturnValue, FText CallFunc_Array_Get_Item_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, int32 CallFunc_Array_Length_ReturnValue_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_Less_IntInt_ReturnValue, FText CallFunc_Format_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FText CallFunc_Format_ReturnValue_1);
    void Construct();
    void CheckForNewText();
    void ExecuteUbergraph_ITM_NewsTicker(int32 EntryPoint, FExecuteUbergraph_ITM_NewsTickerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
};

#endif
