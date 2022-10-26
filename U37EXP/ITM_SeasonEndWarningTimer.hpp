#ifndef UE4SS_SDK_ITM_SeasonEndWarningTimer_HPP
#define UE4SS_SDK_ITM_SeasonEndWarningTimer_HPP

class UITM_SeasonEndWarningTimer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Pulse;
    class UVerticalBox* AnyTimeNowBox;
    class UVerticalBox* CountDownBox;
    class UTextBlock* countdownText;
    class UWidgetSwitcher* StateSwitcher;

    void Refresh();
    void Construct();
    void ExecuteUbergraph_ITM_SeasonEndWarningTimer(int32 EntryPoint);
};

#endif
