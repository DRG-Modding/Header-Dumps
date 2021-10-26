// WidgetBlueprintGeneratedClass ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C
// Size: 0x2a8 (Inherited: 0x250)
struct UITM_CommunityGoalProgress_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x258(0x08)
	UITM_CommunityGoal_C* CurrentFactionGoal; // 0x260(0x08)
	UITM_CommunityGoal_C* Faction1Goal; // 0x268(0x08)
	UITM_CommunityGoal_C* Faction2Goal; // 0x270(0x08)
	UITM_CommunityGoal_TotalProgress_C* ITM_CommunityGoal_TotalProgress; // 0x278(0x08)
	UITM_CommunityGoalInformation_C* ITM_CommunityGoalInformation; // 0x280(0x08)
	UVerticalBox* Progress; // 0x288(0x08)
	UITM_CommunityGoalCountdown_C* ProgressCountDown; // 0x290(0x08)
	int32_t CurrentFaction; // 0x298(0x04)
	UITM_CommunityGoalRewardToolTip_C* ToolTipRef; // 0x2a0(0x08)

	void SetInfoToCurrentFaction();
	void SetGoals(TArray<FString> Goals, TArray<float> Values, TArray<int32_t> Members, float Miners Union Tier, bool ForceRefresh);
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
	void ExecuteUbergraph_ITM_CommunityGoalProgress(int32_t EntryPoint);
};

