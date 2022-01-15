#ifndef UE4SS_SDK_ITM_CommunityGoalRecruitment_ConsoleScreenV1_HPP
#define UE4SS_SDK_ITM_CommunityGoalRecruitment_ConsoleScreenV1_HPP

class UITM_CommunityGoalRecruitment_ConsoleScreenV1_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_CommunityGoalResult_ConsoleScreenV1_C* CurrentFactionGoalResult;
    UITM_CommunityGoalResult_ConsoleScreenV1_C* Faction1GoalResult;
    UITM_CommunityGoalResult_ConsoleScreenV1_C* Faction2GoalResult;
    UITM_ResetFaction_ConsoleScreenV1_C* ITM_ResetFaction;
    UVerticalBox* RECRUITMENT;
    FITM_CommunityGoalRecruitment_ConsoleScreenV1_CCheckState CheckState;
    void CheckState();
    UCommunityGoalFaction* CurrentFaction;
    int32 FactionIndex;
    TArray<UCommunityGoalFaction*> FactionsArray;

    void SetResultFactionID(UITM_CommunityGoalResult_ConsoleScreenV1_C* ResultUI, int32 FactionID, UCommunityGoalFaction* CallFunc_Array_Get_Item, UGameData* CallFunc_GetFSDGameData_ReturnValue, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Array_Get_Item_1, UCommunityGoal* CallFunc_FindGoal_ReturnValue, float CallFunc_Array_Get_Item_2, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_RewardTier_ReturnValue);
    void BuildRecruitmentUI(UCommunityGoalFaction* Faction, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1);
    void Construct();
    void ResetFactionCheckState();
    void ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1(int32 EntryPoint, CheckState__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
    void CheckState__DelegateSignature();
}

#endif
