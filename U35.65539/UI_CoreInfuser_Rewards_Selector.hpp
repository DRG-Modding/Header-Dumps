#ifndef UE4SS_SDK_UI_CoreInfuser_Rewards_Selector_HPP
#define UE4SS_SDK_UI_CoreInfuser_Rewards_Selector_HPP

class UUI_CoreInfuser_Rewards_Selector_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Center;
    UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Left;
    UUI_CoreInfuser_Reward_Icon_C* RewardIcon_Right;
    UUI_CoreInfuser_Rewards_Animator_C* RewardsAnimator;
    TArray<UUI_CoreInfuser_Reward_Icon_C*> RewardIcons;
    UUI_CoreInfuser_Reward_Icon_C* HoveredReward;
    FUI_CoreInfuser_Rewards_Selector_COnRewardHovered OnRewardHovered;
    void OnRewardHovered(UUI_CoreInfuser_Reward_Icon_C* Reward);
    FUI_CoreInfuser_Rewards_Selector_COnRewardUnhovered OnRewardUnhovered;
    void OnRewardUnhovered(UUI_CoreInfuser_Reward_Icon_C* Reward);
    FUI_CoreInfuser_Rewards_Selector_COnRewardSelected OnRewardSelected;
    void OnRewardSelected(USchematic* Reward);
    bool IsOpen;
    FUI_CoreInfuser_Rewards_Selector_COnOpenChanged OnOpenChanged;
    void OnOpenChanged(bool Open);
    FUI_CoreInfuser_Rewards_Selector_COnRewardsChanged OnRewardsChanged;
    void OnRewardsChanged(TArray<USchematic*>& Rewards);
    bool IsRewardSelected;

    void SetOpen(bool InIsOpen);
    void SetSelectedReward(USchematic* InReward, bool& IsRewardValid, UUI_CoreInfuser_Reward_Icon_C* OtherWidget, bool CallFunc_IsValid_ReturnValue);
    void SetSchematicRewards(TArray<USchematic*>& InRewards, USchematic* CallFunc_Array_Get_Item, USchematic* CallFunc_Array_Get_Item_1, USchematic* CallFunc_Array_Get_Item_2);
    void Construct();
    void RewardHovered(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void RewardUnhovered(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void RewardSelected(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void SetDispenser(AEventRewardDispenser* InDispenser);
    void ExecuteUbergraph_UI_CoreInfuser_Rewards_Selector(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, UUI_CoreInfuser_Reward_Icon_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsValid_ReturnValue, UUI_CoreInfuser_Reward_Icon_C* K2Node_CustomEvent_IconWidget_2, TArray<UUI_CoreInfuser_Reward_Icon_C*>& K2Node_MakeArray_Array, UUI_CoreInfuser_Reward_Icon_C* K2Node_CustomEvent_IconWidget_1, OnHovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnUnhovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnRewardSelected__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UUI_CoreInfuser_Reward_Icon_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, UUI_CoreInfuser_Reward_Icon_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, UUI_CoreInfuser_Reward_Icon_C* K2Node_CustomEvent_IconWidget, USchematic* CallFunc_GetReward_SchematicReward, AEventRewardDispenser* K2Node_CustomEvent_InDispenser, bool CallFunc_SetSelectedReward_IsRewardValid);
    void OnRewardsChanged__DelegateSignature(TArray<USchematic*>& Rewards);
    void OnOpenChanged__DelegateSignature(bool Open);
    void OnRewardSelected__DelegateSignature(USchematic* Reward);
    void OnRewardUnhovered__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* Reward);
    void OnRewardHovered__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* Reward);
}

#endif
