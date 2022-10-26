#ifndef UE4SS_SDK_UI_CoreInfuser_Rewards_Background_HPP
#define UE4SS_SDK_UI_CoreInfuser_Rewards_Background_HPP

class UUI_CoreInfuser_Rewards_Background_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_CoreInfuser_Rewards_Animator_C* RewardsAnimator;
    class UUI_CoreInfuser_Reward_Background_C* Wedge_Center;
    class UUI_CoreInfuser_Reward_Background_C* Wedge_Left;
    class UUI_CoreInfuser_Reward_Background_C* Wedge_Right;
    class UUI_CoreInfuser_Rewards_Selector_C* RewardSelector;
    bool IsOpen;

    void SetOpen(bool IsOpen);
    void SetRewardGiven(int32 Index);
    void SetRewards(TArray<class USchematic*>& InRewards);
    void GetIconWidget(int32 Index, class UUI_CoreInfuser_Reward_Background_C*& IconWidget);
    void SetHovered(int32 InIndex, bool InHovered);
    void OnRewardHovered_Event(class UUI_CoreInfuser_Reward_Icon_C* Reward);
    void OnRewardUnhovered_Event(class UUI_CoreInfuser_Reward_Icon_C* Reward);
    void OnRewardSelectedEvent(class USchematic* Reward);
    void BindToRewardSelector(class UUI_CoreInfuser_Rewards_Selector_C* RewardSelector);
    void Construct();
    void ExecuteUbergraph_UI_CoreInfuser_Rewards_Background(int32 EntryPoint);
};

#endif
