// WidgetBlueprintGeneratedClass ITM_CommunityGoalReward.ITM_CommunityGoalReward_C
// Size: 0x4c8 (Inherited: 0x250)
struct UITM_CommunityGoalReward_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x258(0x08)
	UOverlay* BronzeImage; // 0x260(0x08)
	UUI_ImageTinted_C* Frame; // 0x268(0x08)
	UHorizontalBox* FreeBeerBox; // 0x270(0x08)
	UOverlay* GoldImage; // 0x278(0x08)
	UImage* Icon; // 0x280(0x08)
	UOverlay* IconBox; // 0x288(0x08)
	UHorizontalBox* NoReward; // 0x290(0x08)
	UTextBlock* NoRewardTextBlock; // 0x298(0x08)
	UImage* OuterImageB; // 0x2a0(0x08)
	UImage* OuterImageG; // 0x2a8(0x08)
	UImage* OuterImageS; // 0x2b0(0x08)
	UHorizontalBox* RewardAchieved; // 0x2b8(0x08)
	UVerticalBox* RewardMainBox; // 0x2c0(0x08)
	UWidgetSwitcher* RewardSwitcher; // 0x2c8(0x08)
	UOverlay* SilverImage; // 0x2d0(0x08)
	UTextBlock* TextBlock_3; // 0x2d8(0x08)
	UTextBlock* TierTextBlock; // 0x2e0(0x08)
	UTextBlock* TitleTextBlock; // 0x2e8(0x08)
	UUI_GradientMasked_Image_C* UI_GradientMasked_Image; // 0x2f0(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x2f8(0x08)
	UUI_ImageTinted_C* UI_ImageTinted_C_3; // 0x300(0x08)
	FText Title; // 0x308(0x18)
	int32_t TitleSize; // 0x320(0x04)
	FSlateBrush IconImage; // 0x328(0x88)
	UCommunityGoalFaction* Faction; // 0x3b0(0x08)
	FText ResultText; // 0x3b8(0x18)
	FText BronzeText; // 0x3d0(0x18)
	FText SilverText; // 0x3e8(0x18)
	FText GoldText; // 0x400(0x18)
	FVector2D TierIconSize; // 0x418(0x08)
	UCommunityGoal* CurrentGoal; // 0x420(0x08)
	FText ResultTextN; // 0x428(0x18)
	FSlateBrush FrameBrush; // 0x440(0x88)

	int32_t TotalTiers();
	void SetGoalResultTier(int32_t Tier, UCommunityGoal* Goal);
	void BuildResources(int32_t Tier);
	void SetGoalResult(float Score, int32_t Members, UCommunityGoal* Goal);
	void UpdateTitle();
	void UpdateIcon();
	void SetFaction(UCommunityGoalFaction* Faction);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_CommunityGoalReward(int32_t EntryPoint);
};

