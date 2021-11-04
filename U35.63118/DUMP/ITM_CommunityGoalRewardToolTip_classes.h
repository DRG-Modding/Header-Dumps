// WidgetBlueprintGeneratedClass ITM_CommunityGoalRewardToolTip.ITM_CommunityGoalRewardToolTip_C
// Size: 0x294 (Inherited: 0x250)
struct UITM_CommunityGoalRewardToolTip_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x258(0x08)
	UVerticalBox* RewardMainBox; // 0x260(0x08)
	UVerticalBox* RewardSpecificBox; // 0x268(0x08)
	USizeBox* SizeBox_5; // 0x270(0x08)
	UCommunityGoalFaction* Faction; // 0x278(0x08)
	UCommunityGoal* CurrentGoal; // 0x280(0x08)
	FVector2D Size; // 0x288(0x08)
	int32_t CurrentTier; // 0x290(0x04)

	void SetGoal(UCommunityGoal* Goal);
	int32_t TotalTiers();
	void SetGoalResultTier(int32_t Tier, UCommunityGoal* Goal);
	void BuildResources(int32_t Tier);
	void SetFaction(UCommunityGoalFaction* Faction);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_CommunityGoalRewardToolTip(int32_t EntryPoint);
};

