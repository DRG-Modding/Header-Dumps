// WidgetBlueprintGeneratedClass ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C
// Size: 0x2a8 (Inherited: 0x250)
struct UITM_CommunityGoalProgress_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x258(0x08)
	struct UITM_CommunityGoal_C* CurrentFactionGoal; // 0x260(0x08)
	struct UITM_CommunityGoal_C* Faction1Goal; // 0x268(0x08)
	struct UITM_CommunityGoal_C* Faction2Goal; // 0x270(0x08)
	struct UITM_CommunityGoal_TotalProgress_C* ITM_CommunityGoal_TotalProgress; // 0x278(0x08)
	struct UITM_CommunityGoalInformation_C* ITM_CommunityGoalInformation; // 0x280(0x08)
	struct UVerticalBox* Progress; // 0x288(0x08)
	struct UITM_CommunityGoalCountdown_C* ProgressCountDown; // 0x290(0x08)
	int32_t CurrentFaction; // 0x298(0x04)
	char UnknownData_29C[0x4]; // 0x29c(0x04)
	struct UITM_CommunityGoalRewardToolTip_C* ToolTipRef; // 0x2a0(0x08)

	void SetInfoToCurrentFaction(); // Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetInfoToCurrentFaction
	void SetGoals(struct TArray<struct FString> Goals, struct TArray<float> Values, struct TArray<int32_t> Members, float Miners Union Tier, bool ForceRefresh); // Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetGoals
	void TestCommunityGoal(); // Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TestCommunityGoal
	void SetTime(float Seconds); // Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetTime
	void Construct(); // Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.Construct
	void CHover(struct UCommunityGoalFaction* Faction, struct UCommunityGoal* Goal); // Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.CHover
	void F1Hover(struct UCommunityGoalFaction* Faction, struct UCommunityGoal* Goal); // Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F1Hover
	void F2Hover(struct UCommunityGoalFaction* Faction, struct UCommunityGoal* Goal); // Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F2Hover
	void CHEnd(); // Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.CHEnd
	void F1End(); // Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F1End
	void F2End(); // Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F2End
	void TotalHover(struct UCommunityGoalFaction* Faction, struct UCommunityGoal* Goal); // Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TotalHover
	void TotalEnd(); // Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TotalEnd
	void ExecuteUbergraph_ITM_CommunityGoalProgress(int32_t EntryPoint); // Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.ExecuteUbergraph_ITM_CommunityGoalProgress
};

