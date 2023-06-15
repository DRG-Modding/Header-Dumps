#ifndef UE4SS_SDK_ITM_SeasonEndWarningTimer_HPP
#define UE4SS_SDK_ITM_SeasonEndWarningTimer_HPP

class UITM_SeasonEndWarningTimer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Pulse;
    class UVerticalBox* AnyTimeNowBox;
    class UVerticalBox* CountDownBox;
    class UTextBlock* countdownText;
    class UVerticalBox* NowBox;
    class UCanvasPanel* RootCanvas;
    class UWidgetSwitcher* StateSwitcher;
    bool IsMonitoringSeasonEnd;
    float LastUpdateCheck;
    bool PendingUpdateCheck;
    int32 PreviewState;

    void On Request Season End Complete(FDateTime EndTime, bool validExpireTime);
    void Int2Text(int32 InValue, FText& OutText);
    void SetPreviewState(int32 Index);
    void OnCheckForUpdateComplete(bool IsUpdatePending);
    void Refresh();
    void Construct();
    void Begin Monitoring();
    void Stop Monitoring();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SeasonEndWarningTimer(int32 EntryPoint);
};

#endif
