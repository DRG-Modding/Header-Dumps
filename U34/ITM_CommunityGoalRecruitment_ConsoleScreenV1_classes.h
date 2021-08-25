// WidgetBlueprintGeneratedClass ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C
// Size: 0x2b0 (Inherited: 0x250)
struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UITM_CommunityGoalResult_ConsoleScreenV1_C* CurrentFactionGoalResult; // 0x258(0x08)
	struct UITM_CommunityGoalResult_ConsoleScreenV1_C* Faction1GoalResult; // 0x260(0x08)
	struct UITM_CommunityGoalResult_ConsoleScreenV1_C* Faction2GoalResult; // 0x268(0x08)
	struct UITM_ResetFaction_ConsoleScreenV1_C* ITM_ResetFaction; // 0x270(0x08)
	struct UVerticalBox* RECRUITMENT; // 0x278(0x08)
	struct FMulticastInlineDelegate CheckState; // 0x280(0x10)
	struct UCommunityGoalFaction* CurrentFaction; // 0x290(0x08)
	int32_t FactionIndex; // 0x298(0x04)
	char UnknownData_29C[0x4]; // 0x29c(0x04)
	struct TArray<struct UCommunityGoalFaction*> FactionsArray; // 0x2a0(0x10)

	void SetResultFactionID(struct UITM_CommunityGoalResult_ConsoleScreenV1_C* ResultUI, int32_t FactionID); // Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.SetResultFactionID
	void BuildRecruitmentUI(struct UCommunityGoalFaction* Faction); // Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.BuildRecruitmentUI
	void Construct(); // Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.Construct
	void ResetFactionCheckState(); // Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.ResetFactionCheckState
	void ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1(int32_t EntryPoint); // Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1
	void CheckState__DelegateSignature(); // Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.CheckState__DelegateSignature
};

