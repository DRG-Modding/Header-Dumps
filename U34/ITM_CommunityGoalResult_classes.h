// WidgetBlueprintGeneratedClass ITM_CommunityGoalResult.ITM_CommunityGoalResult_C
// Size: 0x3b8 (Inherited: 0x250)
struct UITM_CommunityGoalResult_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UOverlay* BronzeImage; // 0x258(0x08)
	struct USizeBox* CurrentSizebox; // 0x260(0x08)
	struct UTextBlock* CurrentTextBlock; // 0x268(0x08)
	struct UButton* FactionIconToolTip; // 0x270(0x08)
	struct UTextBlock* GoalText; // 0x278(0x08)
	struct UOverlay* GoldImage; // 0x280(0x08)
	struct UImage* Icon; // 0x288(0x08)
	struct UImage* ImageB; // 0x290(0x08)
	struct UImage* ImageG; // 0x298(0x08)
	struct UImage* ImageNT; // 0x2a0(0x08)
	struct UImage* Images; // 0x2a8(0x08)
	struct UOverlay* NoTierImage; // 0x2b0(0x08)
	struct UOverlay* SilverImage; // 0x2b8(0x08)
	struct UTextBlock* TierTextBlock; // 0x2c0(0x08)
	struct UTextBlock* TitleTextBlock; // 0x2c8(0x08)
	struct UTextBlock* TotalPointsTextBlock; // 0x2d0(0x08)
	struct UTextBlock* TotalScoreTextBlock; // 0x2d8(0x08)
	struct UUI_GradientMasked_Image_C* UI_GradientMasked_Image; // 0x2e0(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x2e8(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted_268; // 0x2f0(0x08)
	struct FText Title; // 0x2f8(0x18)
	int32_t TitleSize; // 0x310(0x04)
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct FSlateBrush IconImage; // 0x318(0x88)
	struct UCommunityGoalFaction* Faction; // 0x3a0(0x08)
	struct FVector2D TierIconSize; // 0x3a8(0x08)
	struct UITM_FactionToolTip_C* FactionToolTip; // 0x3b0(0x08)

	void DoFactionToolTip(); // Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.DoFactionToolTip
	void UpdateTitle(); // Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.UpdateTitle
	void UpdateIcon(); // Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.UpdateIcon
	void SetFaction(struct UCommunityGoalFaction* Faction); // Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.SetFaction
	void PreConstruct(bool IsDesignTime); // Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.PreConstruct
	void SetResult(int32_t Score, int32_t Tier, struct FText GoalName); // Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.SetResult
	void CheckFaction(); // Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.CheckFaction
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_ITM_CommunityGoalResult(int32_t EntryPoint); // Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.ExecuteUbergraph_ITM_CommunityGoalResult
};

