// WidgetBlueprintGeneratedClass ITM_CommunityGoal.ITM_CommunityGoal_C
// Size: 0x5f0 (Inherited: 0x250)
struct UITM_CommunityGoal_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UButton* BackgroundButton; // 0x258(0x08)
	UTextBlock* BronzeGoalNumber; // 0x260(0x08)
	UButton* Button_Goal_1; // 0x268(0x08)
	UButton* Button_Goal_2; // 0x270(0x08)
	UButton* Button_Goal_3; // 0x278(0x08)
	UCheckBox* CheckBox_Goal_Bronze; // 0x280(0x08)
	UCheckBox* CheckBox_Goal_Gold; // 0x288(0x08)
	UCheckBox* CheckBox_Goal_Silver; // 0x290(0x08)
	USizeBox* CurrentSizebox; // 0x298(0x08)
	UTextBlock* CurrentTextBlock; // 0x2a0(0x08)
	UButton* FactionIconToolTip; // 0x2a8(0x08)
	UTextBlock* GoalText; // 0x2b0(0x08)
	UTextBlock* GoldGoalNumber; // 0x2b8(0x08)
	UImage* Icon; // 0x2c0(0x08)
	UImage* Image_Bronze; // 0x2c8(0x08)
	UImage* Image_Gold; // 0x2d0(0x08)
	UImage* Image_Silver; // 0x2d8(0x08)
	UProgressBar* ProgressBar_1; // 0x2e0(0x08)
	UProgressBar* ProgressBar_2; // 0x2e8(0x08)
	UProgressBar* ProgressBar_3; // 0x2f0(0x08)
	UTextBlock* SilverGoalNumber; // 0x2f8(0x08)
	UTextBlock* TitleText; // 0x300(0x08)
	UUI_GradientMasked_Image_C* UI_GradientMasked_Image; // 0x308(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x310(0x08)
	UUI_ImageTinted_C* UI_ImageTinted_268; // 0x318(0x08)
	FText Title; // 0x320(0x18)
	int32_t TitleSize; // 0x338(0x04)
	FSlateBrush IconImage; // 0x340(0x88)
	FProgressBarStyle BarStyle; // 0x3c8(0x1a0)
	float Progress0; // 0x568(0x04)
	float Progress1; // 0x56c(0x04)
	float Progress2; // 0x570(0x04)
	FLinearColor FillColor; // 0x574(0x10)
	float AnimTime; // 0x584(0x04)
	float TotalAnimTime; // 0x588(0x04)
	FString CurrentGoalID; // 0x590(0x10)
	UCommunityGoal* CurrentGoal; // 0x5a0(0x08)
	float CurrentValue; // 0x5a8(0x04)
	int32_t CurrentMembers; // 0x5ac(0x04)
	UCommunityGoalFaction* Faction; // 0x5b0(0x08)
	bool IsShowingCurrentPlayerFaction; // 0x5b8(0x01)
	FMulticastInlineDelegate HoverStarted; // 0x5c0(0x10)
	FMulticastInlineDelegate HoverEnded; // 0x5d0(0x10)
	UITM_CommunityGoalRewardToolTip_C* ToolTip; // 0x5e0(0x08)
	UITM_FactionToolTip_C* FactionToolTip; // 0x5e8(0x08)

	void DoFactionToolTip();
	void DoToolTip(UWidget* ToolTipTarget, int32_t Tier);
	void UpdateTitle();
	void UpdateIcon();
	void SetFaction(UCommunityGoalFaction* Faction);
	void ResetAnim();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void SetCommunityGoal(FText Goal, float Bronze Progress, float Silver Progress, float Gold Progress);
	void PreConstruct(bool IsDesignTime);
	void SetGoal(FString GoalID, float GoalValue, int32_t Members, bool ForceRefresh);
	void BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void CheckFaction();
	void BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_CommunityGoal(int32_t EntryPoint);
	void HoverEnded__DelegateSignature();
	void HoverStarted__DelegateSignature(UCommunityGoalFaction* Faction, UCommunityGoal* Goal);
};

