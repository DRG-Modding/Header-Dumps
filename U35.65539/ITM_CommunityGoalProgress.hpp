#ifndef UE4SS_SDK_ITM_CommunityGoalProgress_HPP
#define UE4SS_SDK_ITM_CommunityGoalProgress_HPP

class UITM_CommunityGoalProgress_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UITM_CommunityGoal_C* CurrentFactionGoal;
    UITM_CommunityGoal_C* Faction1Goal;
    UITM_CommunityGoal_C* Faction2Goal;
    UITM_CommunityGoal_TotalProgress_C* ITM_CommunityGoal_TotalProgress;
    UITM_CommunityGoalInformation_C* ITM_CommunityGoalInformation;
    UVerticalBox* Progress;
    UITM_CommunityGoalCountdown_C* ProgressCountDown;
    int32 CurrentFaction;
    UITM_CommunityGoalRewardToolTip_C* ToolTipRef;

    void SetInfoToCurrentFaction();
    void SetGoals(TArray<FString>& Goals, TArray<float>& Values, TArray<int32>& Members, float Miners Union Tier, bool ForceRefresh, int32 Temp_int_Variable, UCommunityGoalFaction* Temp_object_Variable, UCommunityGoalFaction* Temp_object_Variable_1, UCommunityGoalFaction* Temp_object_Variable_2, EFSDFaction Temp_byte_Variable, UCommunityGoalFaction* Temp_object_Variable_3, UCommunityGoalFaction* Temp_object_Variable_4, UCommunityGoalFaction* Temp_object_Variable_5, UCommunityGoalFaction* Temp_object_Variable_6, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UCommunityGoalFaction* Temp_object_Variable_7, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, UCommunityGoalFaction* Temp_object_Variable_8, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, UCommunityGoalFaction* K2Node_Select_Default, UCommunityGoalFaction* Temp_object_Variable_9, int32 CallFunc_Array_Get_Item_2, float CallFunc_Array_Get_Item_3, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue, UCommunityGoalFaction* K2Node_Select_Default_1, int32 Temp_int_Variable_1, int32 CallFunc_Array_Get_Item_4, UCommunityGoalFaction* K2Node_Select_Default_2, float CallFunc_Array_Get_Item_5, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, EFSDFaction CallFunc_GetFaction_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
    void TestCommunityGoal();
    void SetTime(float Seconds);
    void Construct();
    void CHover(UCommunityGoalFaction* Faction, UCommunityGoal* Goal);
    void F1Hover(UCommunityGoalFaction* Faction, UCommunityGoal* Goal);
    void F2Hover(UCommunityGoalFaction* Faction, UCommunityGoal* Goal);
    void CHEnd();
    void F1End();
    void F2End();
    void TotalHover(UCommunityGoalFaction* Faction, UCommunityGoal* Goal);
    void TotalEnd();
    void ExecuteUbergraph_ITM_CommunityGoalProgress(int32 EntryPoint, HoverStarted__DelegateSignature K2Node_CreateDelegate_OutputDelegate, HoverStarted__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, HoverStarted__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, HoverEnded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, HoverEnded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, HoverEnded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, HoverStarted__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, HoverEnded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, UCommunityGoalFaction* K2Node_CustomEvent_Faction_3, UCommunityGoal* K2Node_CustomEvent_Goal_3, UCommunityGoalFaction* K2Node_CustomEvent_Faction_2, UCommunityGoal* K2Node_CustomEvent_Goal_2, UCommunityGoalFaction* K2Node_CustomEvent_Faction_1, UCommunityGoal* K2Node_CustomEvent_Goal_1, UCommunityGoalFaction* K2Node_CustomEvent_Faction, UCommunityGoal* K2Node_CustomEvent_Goal);
}

#endif
