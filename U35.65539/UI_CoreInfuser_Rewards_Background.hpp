#ifndef UE4SS_SDK_UI_CoreInfuser_Rewards_Background_HPP
#define UE4SS_SDK_UI_CoreInfuser_Rewards_Background_HPP

class UUI_CoreInfuser_Rewards_Background_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UUI_CoreInfuser_Rewards_Animator_C* RewardsAnimator;
    UUI_CoreInfuser_Reward_Background_C* Wedge_Center;
    UUI_CoreInfuser_Reward_Background_C* Wedge_Left;
    UUI_CoreInfuser_Reward_Background_C* Wedge_Right;
    UUI_CoreInfuser_Rewards_Selector_C* RewardSelector;
    bool IsOpen;

    void SetOpen(bool IsOpen);
    void SetRewardGiven(int32 Index, TArray<UUI_CoreInfuser_Reward_Background_C*> Widgets);
    void SetRewards(TArray<USchematic*>& InRewards, USchematic* CallFunc_Array_Get_Item, USchematic* CallFunc_Array_Get_Item_1, USchematic* CallFunc_Array_Get_Item_2);
    void GetIconWidget(int32 Index, UUI_CoreInfuser_Reward_Background_C*& IconWidget, int32 Temp_int_Variable, UUI_CoreInfuser_Reward_Background_C* K2Node_Select_Default);
    void SetHovered(int32 InIndex, bool InHovered, UUI_CoreInfuser_Reward_Background_C* CallFunc_GetIconWidget_IconWidget);
    void OnRewardHovered_Event(UUI_CoreInfuser_Reward_Icon_C* Reward);
    void OnRewardUnhovered_Event(UUI_CoreInfuser_Reward_Icon_C* Reward);
    void OnRewardSelectedEvent(USchematic* Reward);
    void BindToRewardSelector(UUI_CoreInfuser_Rewards_Selector_C* RewardSelector);
    void Construct();
    void ExecuteUbergraph_UI_CoreInfuser_Rewards_Background(int32 EntryPoint, OnRewardHovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnRewardUnhovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnRewardSelected__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UUI_CoreInfuser_Reward_Icon_C* K2Node_CustomEvent_Reward_2, UUI_CoreInfuser_Reward_Icon_C* K2Node_CustomEvent_Reward_1, USchematic* K2Node_CustomEvent_Reward, UUI_CoreInfuser_Rewards_Selector_C* K2Node_CustomEvent_RewardSelector, OnOpenChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, OnRewardsChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4);
}

#endif
