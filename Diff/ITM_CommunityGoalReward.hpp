#ifndef UE4SS_SDK_ITM_CommunityGoalReward_HPP
#define UE4SS_SDK_ITM_CommunityGoalReward_HPP

class UITM_CommunityGoalReward_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UOverlay* BronzeImage;
    class UUI_ImageTinted_C* Frame;
    class UHorizontalBox* FreeBeerBox;
    class UOverlay* GoldImage;
    class UImage* Icon;
    class UOverlay* IconBox;
    class UHorizontalBox* NoReward;
    class UTextBlock* NoRewardTextBlock;
    class UImage* OuterImageB;
    class UImage* OuterImageG;
    class UImage* OuterImageS;
    class UHorizontalBox* RewardAchieved;
    class UVerticalBox* RewardMainBox;
    class UWidgetSwitcher* RewardSwitcher;
    class UOverlay* SilverImage;
    class UTextBlock* TextBlock_2;
    class UTextBlock* TierTextBlock;
    class UTextBlock* TitleTextBlock;
    class UUI_GradientMasked_Image_C* UI_GradientMasked_Image;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UUI_ImageTinted_C* UI_ImageTinted_C_2;
    FText Title;
    int32 TitleSize;
    FSlateBrush IconImage;
    class UCommunityGoalFaction* Faction;
    FText ResultText;
    FText BronzeText;
    FText SilverText;
    FText GoldText;
    FVector2D TierIconSize;
    class UCommunityGoal* CurrentGoal;
    FText ResultTextN;
    FSlateBrush FrameBrush;

    int32 TotalTiers();
    void SetGoalResultTier(int32 Tier, class UCommunityGoal* Goal);
    void BuildResources(int32 Tier);
    void SetGoalResult(float Score, int32 Members, class UCommunityGoal* Goal);
    void UpdateTitle();
    void UpdateIcon();
    void SetFaction(class UCommunityGoalFaction* Faction);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CommunityGoalReward(int32 EntryPoint);
};

#endif
