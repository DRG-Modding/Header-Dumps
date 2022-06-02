#ifndef UE4SS_SDK_UI_Hoop_HistoryLine_HPP
#define UE4SS_SDK_UI_Hoop_HistoryLine_HPP

class UUI_Hoop_HistoryLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* ScoreText;

    void SetScore(int32 Score);
    void Construct();
    void ExecuteUbergraph_UI_Hoop_HistoryLine(int32 EntryPoint);
};

#endif
