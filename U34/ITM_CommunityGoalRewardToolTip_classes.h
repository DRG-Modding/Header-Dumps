// WidgetBlueprintGeneratedClass ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C
// Size: 0x294 (Inherited: 0x250)
struct UITM_CommunityGoalRewardToolTip_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x258(0x08)
	struct UVerticalBox* RewardMainBox; // 0x260(0x08)
	struct UVerticalBox* RewardSpecificBox; // 0x268(0x08)
	struct USizeBox* SizeBox_5; // 0x270(0x08)
	struct UCommunityGoalFaction* Faction; // 0x278(0x08)
	struct UCommunityGoal* CurrentGoal; // 0x280(0x08)
	struct FVector2D Size; // 0x288(0x08)
	int32_t CurrentTier; // 0x290(0x04)

	void SetGoal(struct UCommunityGoal* Goal); // Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetGoal
	int32_t TotalTiers(); // Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.TotalTiers
	void SetGoalResultTier(int32_t Tier, struct UCommunityGoal* Goal); // Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetGoalResultTier
	void BuildResources(int32_t Tier); // Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.BuildResources
	void SetFaction(struct UCommunityGoalFaction* Faction); // Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.SetFaction
	void PreConstruct(bool IsDesignTime); // Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.PreConstruct
	void ExecuteUbergraph_ITM_CommunityGoalRewardToolTip(int32_t EntryPoint); // Function ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C.ExecuteUbergraph_ITM_CommunityGoalRewardToolTip
};

