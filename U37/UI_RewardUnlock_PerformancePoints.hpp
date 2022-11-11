#ifndef UE4SS_SDK_UI_RewardUnlock_PerformancePoints_HPP
#define UE4SS_SDK_UI_RewardUnlock_PerformancePoints_HPP

class UUI_RewardUnlock_PerformancePoints_C : public URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* MakeVisibleTest;
    class UWidgetAnimation* NewRewardsSlam;
    class UWidgetAnimation* CelebrateAnim;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_2;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_3;
    class UImage* IconLeft;
    class UImage* Image_559;
    class UImage* Image_Background_Black;
    class UImage* Image_Background_Smoke;
    class UImage* Image_BG_Topline_1;
    class UITM_Season_RewardImageSingle_C* ITM_Season_RewardImageSingle;
    class UITM_SeasonProgressBar_C* ITM_SeasonProgressBar_41;
    class UOverlay* Overlay_NewRewards;
    class UScaleBox* ScaleBox_Rewards;
    class UTextBlock* TextBlock_LevelReached;
    class UTextBlock* UnlockTitle;
    class UVerticalBox* VerticalBox_Outer;
    class UVerticalBox* VerticalBox_Rewards;
    class UVerticalBox* VerticalBox_Text;
    class UReward* LevelReward;

    void SelectCharacterID(class UPlayerCharacterID* OptionalID, class UPlayerCharacterID*& OutputPin);
    void GetUnlockDetails(FText& Text);
    void PreConstruct(bool IsDesignTime);
    void PlayReceiveAnim();
    void Construct();
    void OnLevelReached(int32 Level);
    void ExecuteUbergraph_UI_RewardUnlock_PerformancePoints(int32 EntryPoint);
};

#endif
