// WidgetBlueprintGeneratedClass ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C
// Size: 0x2b0 (Inherited: 0x250)
struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UITM_CommunityGoalResult_ConsoleScreenV1_C* CurrentFactionGoalResult; // 0x258(0x08)
	UITM_CommunityGoalResult_ConsoleScreenV1_C* Faction1GoalResult; // 0x260(0x08)
	UITM_CommunityGoalResult_ConsoleScreenV1_C* Faction2GoalResult; // 0x268(0x08)
	UITM_ResetFaction_ConsoleScreenV1_C* ITM_ResetFaction; // 0x270(0x08)
	UVerticalBox* RECRUITMENT; // 0x278(0x08)
	FMulticastInlineDelegate CheckState; // 0x280(0x10)
	UCommunityGoalFaction* CurrentFaction; // 0x290(0x08)
	int32_t FactionIndex; // 0x298(0x04)
	TArray<UCommunityGoalFaction*> FactionsArray; // 0x2a0(0x10)

	void SetResultFactionID(UITM_CommunityGoalResult_ConsoleScreenV1_C* ResultUI, int32_t FactionID);
	void BuildRecruitmentUI(UCommunityGoalFaction* Faction);
	void Construct();
	void ResetFactionCheckState();
	void ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1(int32_t EntryPoint);
	void CheckState__DelegateSignature();
};

