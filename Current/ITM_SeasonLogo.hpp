#ifndef UE4SS_SDK_ITM_SeasonLogo_HPP
#define UE4SS_SDK_ITM_SeasonLogo_HPP

class UITM_SeasonLogo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_SeasonEndWarningTimer_C* SeasonEndWarning;
    int32 PreviewSeasonEndState;

    void SetCounterHidden(bool InCounterHidden);
    void OnWindowOpened();
    void OnWindowClosed();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SeasonLogo(int32 EntryPoint);
};

#endif
