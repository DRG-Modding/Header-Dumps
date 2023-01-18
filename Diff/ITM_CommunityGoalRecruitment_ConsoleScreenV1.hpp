#ifndef UE4SS_SDK_ITM_CommunityGoalRecruitment_ConsoleScreenV1_HPP
#define UE4SS_SDK_ITM_CommunityGoalRecruitment_ConsoleScreenV1_HPP

class UITM_CommunityGoalRecruitment_ConsoleScreenV1_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_CommunityGoalResult_ConsoleScreenV1_C* CurrentFactionGoalResult;
    class UITM_CommunityGoalResult_ConsoleScreenV1_C* Faction1GoalResult;
    class UITM_CommunityGoalResult_ConsoleScreenV1_C* Faction2GoalResult;
    class UITM_ResetFaction_ConsoleScreenV1_C* ITM_ResetFaction;
    class UVerticalBox* RECRUITMENT;
    FITM_CommunityGoalRecruitment_ConsoleScreenV1_CCheckState CheckState;
    void CheckState();
    class UCommunityGoalFaction* CurrentFaction;
    int32 FactionIndex;
    TArray<class UCommunityGoalFaction*> FactionsArray;

    void SetResultFactionID(class UITM_CommunityGoalResult_ConsoleScreenV1_C* ResultUI, int32 FactionID);
    void BuildRecruitmentUI(class UCommunityGoalFaction* Faction);
    void Construct();
    void ResetFactionCheckState();
    void ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1(int32 EntryPoint);
    void CheckState__DelegateSignature();
};

#endif
