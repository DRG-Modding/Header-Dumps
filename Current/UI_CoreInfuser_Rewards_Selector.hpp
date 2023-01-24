#ifndef UE4SS_SDK_UI_CoreInfuser_Rewards_Selector_HPP
#define UE4SS_SDK_UI_CoreInfuser_Rewards_Selector_HPP

class UUI_CoreInfuser_Rewards_Selector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Center;
    class UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Left;
    class UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Right;
    class UUI_CoreInfuser_Rewards_Animator_C* RewardsAnimator;
    TArray<class UUI_CoreInfuser_Reward_Icon_C*> RewardIcons;
    class UUI_CoreInfuser_Reward_Icon_C* HoveredReward;
    FUI_CoreInfuser_Rewards_Selector_COnRewardHovered OnRewardHovered;
    void OnRewardHovered(class UUI_CoreInfuser_Reward_Icon_C* Reward);
    FUI_CoreInfuser_Rewards_Selector_COnRewardUnhovered OnRewardUnhovered;
    void OnRewardUnhovered(class UUI_CoreInfuser_Reward_Icon_C* Reward);
    FUI_CoreInfuser_Rewards_Selector_COnRewardSelected OnRewardSelected;
    void OnRewardSelected(class USchematic* Reward);
    bool IsOpen;
    FUI_CoreInfuser_Rewards_Selector_COnOpenChanged OnOpenChanged;
    void OnOpenChanged(bool Open);
    FUI_CoreInfuser_Rewards_Selector_COnRewardsChanged OnRewardsChanged;
    void OnRewardsChanged(TArray<class USchematic*>& Rewards);
    bool IsRewardSelected;

    void SetOpen(bool InIsOpen);
    void SetSelectedReward(class USchematic* InReward, bool& IsRewardValid);
    void SetSchematicRewards(TArray<class USchematic*>& InRewards);
    void Construct();
    void RewardHovered(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void RewardUnhovered(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void RewardSelected(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void SetDispenser(class AEventRewardDispenser* InDispenser);
    void ExecuteUbergraph_UI_CoreInfuser_Rewards_Selector(int32 EntryPoint);
    void OnRewardsChanged__DelegateSignature(TArray<class USchematic*>& Rewards);
    void OnOpenChanged__DelegateSignature(bool Open);
    void OnRewardSelected__DelegateSignature(class USchematic* Reward);
    void OnRewardUnhovered__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C* Reward);
    void OnRewardHovered__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C* Reward);
};

#endif
