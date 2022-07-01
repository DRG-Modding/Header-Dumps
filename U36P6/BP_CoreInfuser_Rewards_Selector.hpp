#ifndef UE4SS_SDK_BP_CoreInfuser_Rewards_Selector_HPP
#define UE4SS_SDK_BP_CoreInfuser_Rewards_Selector_HPP

class ABP_CoreInfuser_Rewards_Selector_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget_Rewards;
    class UWidgetComponent* Widget_Bg;
    class USceneComponent* DefaultSceneRoot;
    bool IsVisible;
    FBP_CoreInfuser_Rewards_Selector_COnRewardSelected OnRewardSelected;
    void OnRewardSelected(class USchematic* SchematicReward);

    void GetBackgroundsWidget(class UUI_CoreInfuser_Rewards_Background_C*& Widget);
    void GetRewardsWidget(class UUI_CoreInfuser_Rewards_Selector_C*& Widget);
    void ReceiveBeginPlay();
    void SetVisible(bool InVisible);
    void OnRewardSelectedEvent(class USchematic* Reward);
    void SetSelectedReward(class USchematic* InReward);
    void SetDispenser(class AEventRewardDispenser* InDispenser);
    void Set Selectable Rewards(TArray<class USchematic*>& InRewards);
    void ExecuteUbergraph_BP_CoreInfuser_Rewards_Selector(int32 EntryPoint);
    void OnRewardSelected__DelegateSignature(class USchematic* SchematicReward);
};

#endif
