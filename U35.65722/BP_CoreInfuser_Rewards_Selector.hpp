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

    void GetBackgroundsWidget(class UUI_CoreInfuser_Rewards_Background_C*& Widget, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUI_CoreInfuser_Rewards_Background_C* K2Node_DynamicCast_AsUI_Core_Infuser_Rewards_Background, bool K2Node_DynamicCast_bSuccess);
    void GetRewardsWidget(class UUI_CoreInfuser_Rewards_Selector_C*& Widget, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUI_CoreInfuser_Rewards_Selector_C* K2Node_DynamicCast_AsUI_Core_Infuser_Rewards_Selector, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void SetVisible(bool InVisible);
    void OnRewardSelectedEvent(class USchematic* Reward);
    void SetSelectedReward(class USchematic* InReward);
    void SetDispenser(class AEventRewardDispenser* InDispenser);
    void Set Selectable Rewards(TArray<class USchematic*>& InRewards);
    void ExecuteUbergraph_BP_CoreInfuser_Rewards_Selector(int32 EntryPoint, class UUI_CoreInfuser_Rewards_Background_C* CallFunc_GetBackgroundsWidget_Widget, class UUI_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardsWidget_Widget, class UUI_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardsWidget_Widget_1, class USchematic* K2Node_CustomEvent_Reward, FExecuteUbergraph_BP_CoreInfuser_Rewards_SelectorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class USchematic* K2Node_CustomEvent_InReward, class UUI_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardsWidget_Widget_2, class UUI_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardsWidget_Widget_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetSelectedReward_IsRewardValid, bool K2Node_CustomEvent_InVisible, class AEventRewardDispenser* K2Node_CustomEvent_InDispenser, class UUI_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardsWidget_Widget_4, TArray<class USchematic*>& K2Node_CustomEvent_InRewards, class UUI_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardsWidget_Widget_5);
    void OnRewardSelected__DelegateSignature(class USchematic* SchematicReward);
};

#endif
