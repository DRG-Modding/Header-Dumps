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
    void SetSelectedReward(class USchematic* InReward, bool& IsRewardValid, class UUI_CoreInfuser_Reward_Icon_C* OtherWidget, bool CallFunc_IsValid_ReturnValue);
    void SetSchematicRewards(TArray<class USchematic*>& InRewards, class USchematic* CallFunc_Array_Get_Item, class USchematic* CallFunc_Array_Get_Item_1, class USchematic* CallFunc_Array_Get_Item_2);
    void Construct();
    void RewardHovered(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void RewardUnhovered(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void RewardSelected(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void SetDispenser(class AEventRewardDispenser* InDispenser);
    void ExecuteUbergraph_UI_CoreInfuser_Rewards_Selector(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, class UUI_CoreInfuser_Reward_Icon_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsValid_ReturnValue, class UUI_CoreInfuser_Reward_Icon_C* K2Node_CustomEvent_IconWidget_2, TArray<class UUI_CoreInfuser_Reward_Icon_C*>& K2Node_MakeArray_Array, class UUI_CoreInfuser_Reward_Icon_C* K2Node_CustomEvent_IconWidget_1, FExecuteUbergraph_UI_CoreInfuser_Rewards_SelectorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_UI_CoreInfuser_Rewards_SelectorK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_UI_CoreInfuser_Rewards_SelectorK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UUI_CoreInfuser_Reward_Icon_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UUI_CoreInfuser_Reward_Icon_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UUI_CoreInfuser_Reward_Icon_C* K2Node_CustomEvent_IconWidget, class USchematic* CallFunc_GetReward_SchematicReward, class AEventRewardDispenser* K2Node_CustomEvent_InDispenser, bool CallFunc_SetSelectedReward_IsRewardValid);
    void OnRewardsChanged__DelegateSignature(TArray<class USchematic*>& Rewards);
    void OnOpenChanged__DelegateSignature(bool Open);
    void OnRewardSelected__DelegateSignature(class USchematic* Reward);
    void OnRewardUnhovered__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C* Reward);
    void OnRewardHovered__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C* Reward);
};

#endif
