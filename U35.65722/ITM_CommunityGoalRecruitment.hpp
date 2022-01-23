#ifndef UE4SS_SDK_ITM_CommunityGoalRecruitment_HPP
#define UE4SS_SDK_ITM_CommunityGoalRecruitment_HPP

class UITM_CommunityGoalRecruitment_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_CommunityGoalResult_C* CurrentFactionGoalResult;
    class UITM_CommunityGoalResult_C* Faction1GoalResult;
    class UITM_CommunityGoalResult_C* Faction2GoalResult;
    class UITM_ResetFaction_C* ITM_ResetFaction;
    class UVerticalBox* RECRUITMENT;
    class UITM_CommunityGoalCountdown_C* RecruitmentCountDown;
    class UTextBlock* TitleTextBlock;
    FITM_CommunityGoalRecruitment_CCheckState CheckState;
    void CheckState();
    class UCommunityGoalFaction* CurrentFaction;
    int32 FactionIndex;
    TArray<class UCommunityGoalFaction*> FactionsArray;

    void SetResult(class UITM_CommunityGoalResult_C* ResultUI, int32 FactionID, class UCommunityGoalFaction* CallFunc_Array_Get_Item, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Array_Get_Item_1, class UCommunityGoal* CallFunc_FindGoal_ReturnValue, float CallFunc_Array_Get_Item_2, int32 CallFunc_RewardTier_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
    void BuildRecruitmentUI(class UCommunityGoalFaction* Faction, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1);
    void SetTime(float Seconds);
    void Construct();
    void ResetFactionCheckState();
    void ExecuteUbergraph_ITM_CommunityGoalRecruitment(int32 EntryPoint, FExecuteUbergraph_ITM_CommunityGoalRecruitmentK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
    void CheckState__DelegateSignature();
};

#endif
