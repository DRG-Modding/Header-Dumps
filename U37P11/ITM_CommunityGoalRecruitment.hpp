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

    void SetResult(class UITM_CommunityGoalResult_C* ResultUI, int32 FactionID);
    void BuildRecruitmentUI(class UCommunityGoalFaction* Faction);
    void SetTime(float Seconds);
    void Construct();
    void ResetFactionCheckState();
    void ExecuteUbergraph_ITM_CommunityGoalRecruitment(int32 EntryPoint);
    void CheckState__DelegateSignature();
};

#endif
