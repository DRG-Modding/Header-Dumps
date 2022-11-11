#ifndef UE4SS_SDK_ITM_SeasonProgressBar_HPP
#define UE4SS_SDK_ITM_SeasonProgressBar_HPP

class UITM_SeasonProgressBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TrailTurnBlue;
    class UWidgetAnimation* NewLevel;
    class UImage* Icon_PerformancePoint;
    class UImage* Image_258;
    class UImage* Image_NormalClaim;
    class UProgressBar* ProgressBar_LevelPercent;
    class UProgressBar* ProgressBar_Trail;
    class UTextBlock* Text_NextLevel;
    class UTextBlock* Text_PrevLevel;
    class UTextBlock* TextBlock_Slash;
    class UTextBlock* TextBlock_TotalXP;
    class UTextBlock* TextBlock_XP;
    bool ShowPPIcon;
    float AnimTime;
    FITM_SeasonProgressBar_CXPCountFinished XPCountFinished;
    void XPCountFinished();
    bool IsCountingMissionXP;
    int32 CurrentLevelTotal;
    FITM_SeasonProgressBar_CLevelReached LevelReached;
    void LevelReached(int32 Level);

    void AnimateCount(int32 SeasonXP, int32 AddedXP, const TArray<FSeasonEvent>& SeasonEvents);
    void AnimateXP(int32 FromLevel, int32 ToLevel, float FromPercent, float ToPercent, int32 FromXP, int32 ToXP);
    void UpdateText(int32 CurrentLevel, float Percent);
    void UpdateTextFromXP(int32 XP);
    void UpdateXPText(int32 currXP);
    void ContinueCount();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SeasonProgressBar(int32 EntryPoint);
    void LevelReached__DelegateSignature(int32 Level);
    void XPCountFinished__DelegateSignature();
};

#endif
