// WidgetBlueprintGeneratedClass ITM_CommunityGoalReward.ITM_CommunityGoalReward_C
// Size: 0x4c8 (Inherited: 0x250)
struct UITM_CommunityGoalReward_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x258(0x08)
	struct UOverlay* BronzeImage; // 0x260(0x08)
	struct UUI_ImageTinted_C* Frame; // 0x268(0x08)
	struct UHorizontalBox* FreeBeerBox; // 0x270(0x08)
	struct UOverlay* GoldImage; // 0x278(0x08)
	struct UImage* Icon; // 0x280(0x08)
	struct UOverlay* IconBox; // 0x288(0x08)
	struct UHorizontalBox* NoReward; // 0x290(0x08)
	struct UTextBlock* NoRewardTextBlock; // 0x298(0x08)
	struct UImage* OuterImageB; // 0x2a0(0x08)
	struct UImage* OuterImageG; // 0x2a8(0x08)
	struct UImage* OuterImageS; // 0x2b0(0x08)
	struct UHorizontalBox* RewardAchieved; // 0x2b8(0x08)
	struct UVerticalBox* RewardMainBox; // 0x2c0(0x08)
	struct UWidgetSwitcher* RewardSwitcher; // 0x2c8(0x08)
	struct UOverlay* SilverImage; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_3; // 0x2d8(0x08)
	struct UTextBlock* TierTextBlock; // 0x2e0(0x08)
	struct UTextBlock* TitleTextBlock; // 0x2e8(0x08)
	struct UUI_GradientMasked_Image_C* UI_GradientMasked_Image; // 0x2f0(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x2f8(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted_C_3; // 0x300(0x08)
	struct FText Title; // 0x308(0x18)
	int32_t TitleSize; // 0x320(0x04)
	char UnknownData_324[0x4]; // 0x324(0x04)
	struct FSlateBrush IconImage; // 0x328(0x88)
	struct UCommunityGoalFaction* Faction; // 0x3b0(0x08)
	struct FText ResultText; // 0x3b8(0x18)
	struct FText BronzeText; // 0x3d0(0x18)
	struct FText SilverText; // 0x3e8(0x18)
	struct FText GoldText; // 0x400(0x18)
	struct FVector2D TierIconSize; // 0x418(0x08)
	struct UCommunityGoal* CurrentGoal; // 0x420(0x08)
	struct FText ResultTextN; // 0x428(0x18)
	struct FSlateBrush FrameBrush; // 0x440(0x88)

	int32_t TotalTiers(); // Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.TotalTiers
	void SetGoalResultTier(int32_t Tier, struct UCommunityGoal* Goal); // Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetGoalResultTier
	void BuildResources(int32_t Tier); // Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.BuildResources
	void SetGoalResult(float Score, int32_t Members, struct UCommunityGoal* Goal); // Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetGoalResult
	void UpdateTitle(); // Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.UpdateTitle
	void UpdateIcon(); // Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.UpdateIcon
	void SetFaction(struct UCommunityGoalFaction* Faction); // Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetFaction
	void PreConstruct(bool IsDesignTime); // Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.PreConstruct
	void ExecuteUbergraph_ITM_CommunityGoalReward(int32_t EntryPoint); // Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.ExecuteUbergraph_ITM_CommunityGoalReward
};

