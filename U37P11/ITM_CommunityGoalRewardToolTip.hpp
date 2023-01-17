#ifndef UE4SS_SDK_ITM_CommunityGoalRewardToolTip_HPP
#define UE4SS_SDK_ITM_CommunityGoalRewardToolTip_HPP

class UITM_CommunityGoalRewardToolTip_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UVerticalBox* RewardMainBox;
    class UVerticalBox* RewardSpecificBox;
    class USizeBox* SizeBox_4;
    class UCommunityGoalFaction* Faction;
    class UCommunityGoal* CurrentGoal;
    FVector2D Size;
    int32 CurrentTier;

    void SetGoal(class UCommunityGoal* Goal);
    int32 TotalTiers();
    void SetGoalResultTier(int32 Tier, class UCommunityGoal* Goal);
    void BuildResources(int32 Tier);
    void SetFaction(class UCommunityGoalFaction* Faction);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CommunityGoalRewardToolTip(int32 EntryPoint);
};

#endif
