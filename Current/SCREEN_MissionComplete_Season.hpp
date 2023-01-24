#ifndef UE4SS_SDK_SCREEN_MissionComplete_Season_HPP
#define UE4SS_SDK_SCREEN_MissionComplete_Season_HPP

class USCREEN_MissionComplete_Season_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SeasonMultiplierIntro;
    class UWidgetAnimation* LevelUpSmoke;
    class UWidgetAnimation* RemoveLevelUpBanner;
    class UWidgetAnimation* Appear;
    class UWidgetAnimation* PerformancePointShake;
    class UWidgetAnimation* HideEvents;
    class UWidgetAnimation* NewRewardIntro;
    class UImage* 2x;
    class UHorizontalBox* HB_PointsGained;
    class UHorizontalBox* HorizontalBox_Challenges;
    class UImage* Icon_SeasonXP;
    class UImage* Image_559;
    class UImage* Image_BG;
    class UImage* Image_BG_Topline_1;
    class UImage* Image_BottomSmoke;
    class UImage* Image_Line;
    class UImage* Image_Line_1;
    class UImage* Image_OktoberfestBeer;
    class UITM_SeasonProgressBar_C* ITM_SeasonProgressBar;
    class UImage* NoiseImage;
    class UImage* PlayerCharacterImage;
    class UTextBlock* Text_XP_Gained;
    class UUI_GlowBackground_C* UI_GlowBackground;
    class UUniformGridPanel* UniformGridPanel_Rewards;
    class UVerticalBox* VBox_Events;
    class UVerticalBox* VBox_LevelUpHolder;
    class UVerticalBox* VerticalBox_Rewards;
    class UVerticalBox* VerticalBox_SeasonMultiplier;
    class UVerticalBox* VerticalBox_XPGain;
    FSCREEN_MissionComplete_Season_CSeasonFlowFinished SeasonFlowFinished;
    void SeasonFlowFinished();
    int32 tmpIndex;
    int32 currXPCount;
    TArray<class UITM_Season_Challenge_C*> Challenges;
    bool FirstReward;
    TArray<FSeasonLevel> Rewards;
    int32 RewardIndex;
    bool IsRewardFlowActive;

    void SequenceEvent__ENTRYPOINTSCREEN_MissionComplete_Season_0();
    void AddLevelUpBanner(int32 Level);
    void AddPoints(int32 Points);
    void AddRewardWithAnim(class UReward* Reward, class UITM_Season_RewardImageSingle_C*& RewardWidget);
    void RewardIntroFinished();
    void StartSeasonFlow();
    void StartChallenges();
    void FlowFinished();
    void Construct();
    void OnShowLevelRewards(int32 Level);
    void PreConstruct(bool IsDesignTime);
    void PIE_UpdateXPText();
    void ContinueReward1();
    void HideEventsFinished();
    void PlayIntro();
    void OnAppeared();
    void CreateChallenges();
    void OnAddPoints_Event(class UITM_Season_Challenge_C* Challenge);
    void LevelReached(int32 Level);
    void OnRewardIntroFinished();
    void RefreshShowroom();
    void Destruct();
    void ShowNextReward();
    void StartXPMultiplierFlow();
    void StartEventsXP();
    void ExecuteUbergraph_SCREEN_MissionComplete_Season(int32 EntryPoint);
    void SeasonFlowFinished__DelegateSignature();
};

#endif
