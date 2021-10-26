// WidgetBlueprintGeneratedClass ITM_CommunityGoalResult.ITM_CommunityGoalResult_C
// Size: 0x3b8 (Inherited: 0x250)
struct UITM_CommunityGoalResult_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UOverlay* BronzeImage; // 0x258(0x08)
	USizeBox* CurrentSizebox; // 0x260(0x08)
	UTextBlock* CurrentTextBlock; // 0x268(0x08)
	UButton* FactionIconToolTip; // 0x270(0x08)
	UTextBlock* GoalText; // 0x278(0x08)
	UOverlay* GoldImage; // 0x280(0x08)
	UImage* Icon; // 0x288(0x08)
	UImage* ImageB; // 0x290(0x08)
	UImage* ImageG; // 0x298(0x08)
	UImage* ImageNT; // 0x2a0(0x08)
	UImage* Images; // 0x2a8(0x08)
	UOverlay* NoTierImage; // 0x2b0(0x08)
	UOverlay* SilverImage; // 0x2b8(0x08)
	UTextBlock* TierTextBlock; // 0x2c0(0x08)
	UTextBlock* TitleTextBlock; // 0x2c8(0x08)
	UTextBlock* TotalPointsTextBlock; // 0x2d0(0x08)
	UTextBlock* TotalScoreTextBlock; // 0x2d8(0x08)
	UUI_GradientMasked_Image_C* UI_GradientMasked_Image; // 0x2e0(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x2e8(0x08)
	UUI_ImageTinted_C* UI_ImageTinted_268; // 0x2f0(0x08)
	FText Title; // 0x2f8(0x18)
	int32_t TitleSize; // 0x310(0x04)
	FSlateBrush IconImage; // 0x318(0x88)
	UCommunityGoalFaction* Faction; // 0x3a0(0x08)
	FVector2D TierIconSize; // 0x3a8(0x08)
	UITM_FactionToolTip_C* FactionToolTip; // 0x3b0(0x08)

	void DoFactionToolTip();
	void UpdateTitle();
	void UpdateIcon();
	void SetFaction(UCommunityGoalFaction* Faction);
	void PreConstruct(bool IsDesignTime);
	void SetResult(int32_t Score, int32_t Tier, FText GoalName);
	void CheckFaction();
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_CommunityGoalResult(int32_t EntryPoint);
};

