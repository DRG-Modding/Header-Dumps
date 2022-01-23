#ifndef UE4SS_SDK_UI_Hoop_HistoryLine_HPP
#define UE4SS_SDK_UI_Hoop_HistoryLine_HPP

class UUI_Hoop_HistoryLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* ScoreText;

    void SetScore(int32 Score);
    void Construct();
    void ExecuteUbergraph_UI_Hoop_HistoryLine(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 K2Node_CustomEvent_Score, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, ESlateVisibility K2Node_Select_Default);
};

#endif
