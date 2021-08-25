// WidgetBlueprintGeneratedClass ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C
// Size: 0x2c0 (Inherited: 0x250)
struct UITM_CommunityGoalRecruitment_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UITM_CommunityGoalResult_C* CurrentFactionGoalResult; // 0x258(0x08)
	struct UITM_CommunityGoalResult_C* Faction1GoalResult; // 0x260(0x08)
	struct UITM_CommunityGoalResult_C* Faction2GoalResult; // 0x268(0x08)
	struct UITM_ResetFaction_C* ITM_ResetFaction; // 0x270(0x08)
	struct UVerticalBox* RECRUITMENT; // 0x278(0x08)
	struct UITM_CommunityGoalCountdown_C* RecruitmentCountDown; // 0x280(0x08)
	struct UTextBlock* TitleTextBlock; // 0x288(0x08)
	struct FMulticastInlineDelegate CheckState; // 0x290(0x10)
	struct UCommunityGoalFaction* CurrentFaction; // 0x2a0(0x08)
	int32_t FactionIndex; // 0x2a8(0x04)
	char UnknownData_2AC[0x4]; // 0x2ac(0x04)
	struct TArray<struct UCommunityGoalFaction*> FactionsArray; // 0x2b0(0x10)

	void SetResult(struct UITM_CommunityGoalResult_C* ResultUI, int32_t FactionID); // Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.SetResult
	void BuildRecruitmentUI(struct UCommunityGoalFaction* Faction); // Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.BuildRecruitmentUI
	void SetTime(float Seconds); // Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.SetTime
	void Construct(); // Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.Construct
	void ResetFactionCheckState(); // Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.ResetFactionCheckState
	void ExecuteUbergraph_ITM_CommunityGoalRecruitment(int32_t EntryPoint); // Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.ExecuteUbergraph_ITM_CommunityGoalRecruitment
	void CheckState__DelegateSignature(); // Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.CheckState__DelegateSignature
};

