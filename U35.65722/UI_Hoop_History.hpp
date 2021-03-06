#ifndef UE4SS_SDK_UI_Hoop_History_HPP
#define UE4SS_SDK_UI_Hoop_History_HPP

class UUI_Hoop_History_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UConsoleScreen_Empty_C* ConsoleScreen_Empty;
    class UTextBlock* Header;
    class UVerticalBox* ScoreParent;
    class UUI_Hoop_HistoryLine_C* UI_Hoop_HistoryLine;
    class UUI_Hoop_HistoryLine_C* UI_Hoop_HistoryLine_0;
    class UUI_Hoop_HistoryLine_C* UI_Hoop_HistoryLine_1;
    class UUI_Hoop_HistoryLine_C* UI_Hoop_HistoryLine_2;
    TArray<class UUI_Hoop_HistoryLine_C*> Lines;
    int32 Index;
    TArray<int32> Scores;

    void GetHistoryCount(int32& History Count, int32 CallFunc_GetChildrenCount_ReturnValue);
    void OnRep_Scores(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, class UUI_Hoop_HistoryLine_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void Construct();
    void UpdateScores(const TArray<int32>& Scores);
    void ExecuteUbergraph_UI_Hoop_History(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUI_Hoop_HistoryLine_C* CallFunc_Array_Get_Item, int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, const TArray<int32>& K2Node_CustomEvent_Scores, class UScaleBox* K2Node_DynamicCast_AsScale_Box, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue, class UUI_Hoop_HistoryLine_C* K2Node_DynamicCast_AsUI_Hoop_History_Line, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Get_Item_1);
};

#endif
