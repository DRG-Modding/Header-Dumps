// WidgetBlueprintGeneratedClass ITM_CommunityGoal.ITM_CommunityGoal_C
// Size: 0x5f0 (Inherited: 0x250)
struct UITM_CommunityGoal_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UButton* BackgroundButton; // 0x258(0x08)
	struct UTextBlock* BronzeGoalNumber; // 0x260(0x08)
	struct UButton* Button_Goal_1; // 0x268(0x08)
	struct UButton* Button_Goal_2; // 0x270(0x08)
	struct UButton* Button_Goal_3; // 0x278(0x08)
	struct UCheckBox* CheckBox_Goal_Bronze; // 0x280(0x08)
	struct UCheckBox* CheckBox_Goal_Gold; // 0x288(0x08)
	struct UCheckBox* CheckBox_Goal_Silver; // 0x290(0x08)
	struct USizeBox* CurrentSizebox; // 0x298(0x08)
	struct UTextBlock* CurrentTextBlock; // 0x2a0(0x08)
	struct UButton* FactionIconToolTip; // 0x2a8(0x08)
	struct UTextBlock* GoalText; // 0x2b0(0x08)
	struct UTextBlock* GoldGoalNumber; // 0x2b8(0x08)
	struct UImage* Icon; // 0x2c0(0x08)
	struct UImage* Image_Bronze; // 0x2c8(0x08)
	struct UImage* Image_Gold; // 0x2d0(0x08)
	struct UImage* Image_Silver; // 0x2d8(0x08)
	struct UProgressBar* ProgressBar_1; // 0x2e0(0x08)
	struct UProgressBar* ProgressBar_2; // 0x2e8(0x08)
	struct UProgressBar* ProgressBar_3; // 0x2f0(0x08)
	struct UTextBlock* SilverGoalNumber; // 0x2f8(0x08)
	struct UTextBlock* TitleText; // 0x300(0x08)
	struct UUI_GradientMasked_Image_C* UI_GradientMasked_Image; // 0x308(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x310(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted_268; // 0x318(0x08)
	struct FText Title; // 0x320(0x18)
	int32_t TitleSize; // 0x338(0x04)
	char UnknownData_33C[0x4]; // 0x33c(0x04)
	struct FSlateBrush IconImage; // 0x340(0x88)
	struct FProgressBarStyle BarStyle; // 0x3c8(0x1a0)
	float Progress0; // 0x568(0x04)
	float Progress1; // 0x56c(0x04)
	float Progress2; // 0x570(0x04)
	struct FLinearColor FillColor; // 0x574(0x10)
	float AnimTime; // 0x584(0x04)
	float TotalAnimTime; // 0x588(0x04)
	char UnknownData_58C[0x4]; // 0x58c(0x04)
	struct FString CurrentGoalID; // 0x590(0x10)
	struct UCommunityGoal* CurrentGoal; // 0x5a0(0x08)
	float CurrentValue; // 0x5a8(0x04)
	int32_t CurrentMembers; // 0x5ac(0x04)
	struct UCommunityGoalFaction* Faction; // 0x5b0(0x08)
	bool IsShowingCurrentPlayerFaction; // 0x5b8(0x01)
	char UnknownData_5B9[0x7]; // 0x5b9(0x07)
	struct FMulticastInlineDelegate HoverStarted; // 0x5c0(0x10)
	struct FMulticastInlineDelegate HoverEnded; // 0x5d0(0x10)
	struct UITM_CommunityGoalRewardToolTip_C* ToolTip; // 0x5e0(0x08)
	struct UITM_FactionToolTip_C* FactionToolTip; // 0x5e8(0x08)

	void DoFactionToolTip(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.DoFactionToolTip
	void DoToolTip(struct UWidget* ToolTipTarget, int32_t Tier); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.DoToolTip
	void UpdateTitle(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.UpdateTitle
	void UpdateIcon(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.UpdateIcon
	void SetFaction(struct UCommunityGoalFaction* Faction); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetFaction
	void ResetAnim(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.ResetAnim
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.Tick
	void SetCommunityGoal(struct FText Goal, float Bronze Progress, float Silver Progress, float Gold Progress); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetCommunityGoal
	void PreConstruct(bool IsDesignTime); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.PreConstruct
	void SetGoal(struct FString GoalID, float GoalValue, int32_t Members, bool ForceRefresh); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetGoal
	void BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void CheckFaction(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.CheckFaction
	void BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_ITM_CommunityGoal(int32_t EntryPoint); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.ExecuteUbergraph_ITM_CommunityGoal
	void HoverEnded__DelegateSignature(); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.HoverEnded__DelegateSignature
	void HoverStarted__DelegateSignature(struct UCommunityGoalFaction* Faction, struct UCommunityGoal* Goal); // Function ITM_CommunityGoal.ITM_CommunityGoal_C.HoverStarted__DelegateSignature
};

