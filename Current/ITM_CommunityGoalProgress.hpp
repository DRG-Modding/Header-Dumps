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
    void SetGoals(TArray<FString>& Goals, TArray<float>& Values, TArray<int32>& Members, float Miners Union Tier, bool ForceRefresh);
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
    void ExecuteUbergraph_ITM_CommunityGoalProgress(int32 EntryPoint);
};

#endif
