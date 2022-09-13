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

    void GetHistoryCount(int32& History Count);
    void OnRep_Scores();
    void Construct();
    void UpdateScores(const TArray<int32>& Scores);
    void ExecuteUbergraph_UI_Hoop_History(int32 EntryPoint);
};

#endif
