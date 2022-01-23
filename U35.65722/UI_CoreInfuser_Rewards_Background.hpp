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
    void SetRewardGiven(int32 Index, TArray<class UUI_CoreInfuser_Reward_Background_C*> Widgets);
    void SetRewards(TArray<class USchematic*>& InRewards, class USchematic* CallFunc_Array_Get_Item, class USchematic* CallFunc_Array_Get_Item_1, class USchematic* CallFunc_Array_Get_Item_2);
    void GetIconWidget(int32 Index, class UUI_CoreInfuser_Reward_Background_C*& IconWidget, int32 Temp_int_Variable, class UUI_CoreInfuser_Reward_Background_C* K2Node_Select_Default);
    void SetHovered(int32 InIndex, bool InHovered, class UUI_CoreInfuser_Reward_Background_C* CallFunc_GetIconWidget_IconWidget);
    void OnRewardHovered_Event(class UUI_CoreInfuser_Reward_Icon_C* Reward);
    void OnRewardUnhovered_Event(class UUI_CoreInfuser_Reward_Icon_C* Reward);
    void OnRewardSelectedEvent(class USchematic* Reward);
    void BindToRewardSelector(class UUI_CoreInfuser_Rewards_Selector_C* RewardSelector);
    void Construct();
    void ExecuteUbergraph_UI_CoreInfuser_Rewards_Background(int32 EntryPoint, FExecuteUbergraph_UI_CoreInfuser_Rewards_BackgroundK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_UI_CoreInfuser_Rewards_BackgroundK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_UI_CoreInfuser_Rewards_BackgroundK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UUI_CoreInfuser_Reward_Icon_C* K2Node_CustomEvent_Reward_2, class UUI_CoreInfuser_Reward_Icon_C* K2Node_CustomEvent_Reward_1, class USchematic* K2Node_CustomEvent_Reward, class UUI_CoreInfuser_Rewards_Selector_C* K2Node_CustomEvent_RewardSelector, FExecuteUbergraph_UI_CoreInfuser_Rewards_BackgroundK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_UI_CoreInfuser_Rewards_BackgroundK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4);
};

#endif
