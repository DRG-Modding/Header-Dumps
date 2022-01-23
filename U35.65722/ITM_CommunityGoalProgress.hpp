#ifndef UE4SS_SDK_ITM_CommunityGoalProgress_HPP
#define UE4SS_SDK_ITM_CommunityGoalProgress_HPP

class UITM_CommunityGoalProgress_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UITM_CommunityGoal_C* CurrentFactionGoal;
    class UITM_CommunityGoal_C* Faction1Goal;
    class UITM_CommunityGoal_C* Faction2Goal;
    class UITM_CommunityGoal_TotalProgress_C* ITM_CommunityGoal_TotalProgress;
    class UITM_CommunityGoalInformation_C* ITM_CommunityGoalInformation;
    class UVerticalBox* Progress;
    class UITM_CommunityGoalCountdown_C* ProgressCountDown;
    int32 CurrentFaction;
    class UITM_CommunityGoalRewardToolTip_C* ToolTipRef;

    void SetInfoToCurrentFaction();
    void SetGoals(TArray<FString>& Goals, TArray<float>& Values, TArray<int32>& Members, float Miners Union Tier, bool ForceRefresh, int32 Temp_int_Variable, class UCommunityGoalFaction* Temp_object_Variable, class UCommunityGoalFaction* Temp_object_Variable_1, class UCommunityGoalFaction* Temp_object_Variable_2, EFSDFaction Temp_byte_Variable, class UCommunityGoalFaction* Temp_object_Variable_3, class UCommunityGoalFaction* Temp_object_Variable_4, class UCommunityGoalFaction* Temp_object_Variable_5, class UCommunityGoalFaction* Temp_object_Variable_6, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UCommunityGoalFaction* Temp_object_Variable_7, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, class UCommunityGoalFaction* Temp_object_Variable_8, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, class UCommunityGoalFaction* K2Node_Select_Default, class UCommunityGoalFaction* Temp_object_Variable_9, int32 CallFunc_Array_Get_Item_2, float CallFunc_Array_Get_Item_3, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue, class UCommunityGoalFaction* K2Node_Select_Default_1, int32 Temp_int_Variable_1, int32 CallFunc_Array_Get_Item_4, class UCommunityGoalFaction* K2Node_Select_Default_2, float CallFunc_Array_Get_Item_5, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, EFSDFaction CallFunc_GetFaction_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
    void TestCommunityGoal();
    void SetTime(float Seconds);
    void Construct();
    void CHover(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
    void F1Hover(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
    void F2Hover(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
    void CHEnd();
    void F1End();
    void F2End();
    void TotalHover(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
    void TotalEnd();
    void ExecuteUbergraph_ITM_CommunityGoalProgress(int32 EntryPoint, FExecuteUbergraph_ITM_CommunityGoalProgressK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITM_CommunityGoalProgressK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_ITM_CommunityGoalProgressK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_ITM_CommunityGoalProgressK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_ITM_CommunityGoalProgressK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FExecuteUbergraph_ITM_CommunityGoalProgressK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, FExecuteUbergraph_ITM_CommunityGoalProgressK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, FExecuteUbergraph_ITM_CommunityGoalProgressK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, class UCommunityGoalFaction* K2Node_CustomEvent_Faction_3, class UCommunityGoal* K2Node_CustomEvent_Goal_3, class UCommunityGoalFaction* K2Node_CustomEvent_Faction_2, class UCommunityGoal* K2Node_CustomEvent_Goal_2, class UCommunityGoalFaction* K2Node_CustomEvent_Faction_1, class UCommunityGoal* K2Node_CustomEvent_Goal_1, class UCommunityGoalFaction* K2Node_CustomEvent_Faction, class UCommunityGoal* K2Node_CustomEvent_Goal);
};

#endif
