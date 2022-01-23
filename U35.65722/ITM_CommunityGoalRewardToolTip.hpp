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
    int32 TotalTiers(int32 CallFunc_Array_Length_ReturnValue);
    void SetGoalResultTier(int32 Tier, class UCommunityGoal* Goal);
    void BuildResources(int32 Tier, class UHorizontalBox* TempHBox, TMap<UResourceData*, int32> ResourceMap, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, TArray<class UResourceData*>& CallFunc_Map_Keys_Keys, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UHorizontalBox* CallFunc_CreateHorizontalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UResourceData*>& CallFunc_Map_Keys_Keys_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UResourceData* CallFunc_Array_Get_Item, class UUI_RewardResourceAditive_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UHorizontalBox* CallFunc_CreateHorizontalBox_ReturnValue_1, TMap<UResourceData*, int32> CallFunc_GetResourcesTierOnlyReward_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, class UResourceData* CallFunc_Array_Get_Item_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UUI_RewardResourceAditive_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_3, class UHorizontalBox* CallFunc_CreateHorizontalBox_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, TMap<UResourceData*, int32> CallFunc_GetResourcesReward_ReturnValue);
    void SetFaction(class UCommunityGoalFaction* Faction);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CommunityGoalRewardToolTip(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
};

#endif
