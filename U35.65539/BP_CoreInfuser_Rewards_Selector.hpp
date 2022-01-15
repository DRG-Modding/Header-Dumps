#ifndef UE4SS_SDK_BP_CoreInfuser_Rewards_Selector_HPP
#define UE4SS_SDK_BP_CoreInfuser_Rewards_Selector_HPP

class ABP_CoreInfuser_Rewards_Selector_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* Widget_Rewards;
    UWidgetComponent* Widget_Bg;
    USceneComponent* DefaultSceneRoot;
    bool IsVisible;
    FBP_CoreInfuser_Rewards_Selector_COnRewardSelected OnRewardSelected;
    void OnRewardSelected(USchematic* SchematicReward);

    void GetBackgroundsWidget(UUI_CoreInfuser_Rewards_Background_C*& Widget, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UUI_CoreInfuser_Rewards_Background_C* K2Node_DynamicCast_AsUI_Core_Infuser_Rewards_Background, bool K2Node_DynamicCast_bSuccess);
    void GetRewardsWidget(UUI_CoreInfuser_Rewards_Selector_C*& Widget, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UUI_CoreInfuser_Rewards_Selector_C* K2Node_DynamicCast_AsUI_Core_Infuser_Rewards_Selector, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void SetVisible(bool InVisible);
    void OnRewardSelectedEvent(USchematic* Reward);
    void SetSelectedReward(USchematic* InReward);
    void SetDispenser(AEventRewardDispenser* InDispenser);
    void Set Selectable Rewards(TArray<USchematic*>& InRewards);
    void ExecuteUbergraph_BP_CoreInfuser_Rewards_Selector(int32 EntryPoint, UUI_CoreInfuser_Rewards_Background_C* CallFunc_GetBackgroundsWidget_Widget, UUI_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardsWidget_Widget, UUI_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardsWidget_Widget_1, USchematic* K2Node_CustomEvent_Reward, OnRewardSelected__DelegateSignature K2Node_CreateDelegate_OutputDelegate, USchematic* K2Node_CustomEvent_InReward, UUI_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardsWidget_Widget_2, UUI_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardsWidget_Widget_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetSelectedReward_IsRewardValid, bool K2Node_CustomEvent_InVisible, AEventRewardDispenser* K2Node_CustomEvent_InDispenser, UUI_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardsWidget_Widget_4, TArray<USchematic*>& K2Node_CustomEvent_InRewards, UUI_CoreInfuser_Rewards_Selector_C* CallFunc_GetRewardsWidget_Widget_5);
    void OnRewardSelected__DelegateSignature(USchematic* SchematicReward);
}

#endif
