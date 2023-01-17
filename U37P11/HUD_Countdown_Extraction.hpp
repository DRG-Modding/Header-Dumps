#ifndef UE4SS_SDK_HUD_Countdown_Extraction_HPP
#define UE4SS_SDK_HUD_Countdown_Extraction_HPP

class UHUD_Countdown_Extraction_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UTextBlock* DATA_Header;
    class UTextBlock* DATA_Time;

    void FormatTime(int32 Time, FText& Text);
    void CountdownStarted(const FText& countdownText);
    void OnCountdownTimeChanged(int32 SecondsLeft);
    void OnCountdownFinished();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Countdown_Extraction(int32 EntryPoint);
};

#endif
