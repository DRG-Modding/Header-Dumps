// WidgetBlueprintGeneratedClass ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C
// Size: 0x590 (Inherited: 0x250)
struct UITM_CommunityGoal_ConsoleScreenV2_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UButton* BackgroundButton; // 0x258(0x08)
	UCheckBox* CheckBox_Goal_Bronze; // 0x260(0x08)
	UCheckBox* CheckBox_Goal_Gold; // 0x268(0x08)
	UCheckBox* CheckBox_Goal_Silver; // 0x270(0x08)
	UTextBlock* GoalText; // 0x278(0x08)
	UImage* Icon; // 0x280(0x08)
	UImage* Image_Bronze; // 0x288(0x08)
	UImage* Image_Gold; // 0x290(0x08)
	UImage* Image_Silver; // 0x298(0x08)
	UProgressBar* ProgressBar_1; // 0x2a0(0x08)
	UProgressBar* ProgressBar_2; // 0x2a8(0x08)
	UProgressBar* ProgressBar_3; // 0x2b0(0x08)
	UTextBlock* TitleText; // 0x2b8(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x2c0(0x08)
	UUI_ImageTinted_C* UI_ImageTinted_268; // 0x2c8(0x08)
	FText Title; // 0x2d0(0x18)
	int32_t TitleSize; // 0x2e8(0x04)
	FSlateBrush IconImage; // 0x2f0(0x88)
	FProgressBarStyle BarStyle; // 0x378(0x1a0)
	float Progress0; // 0x518(0x04)
	float Progress1; // 0x51c(0x04)
	float Progress2; // 0x520(0x04)
	FLinearColor FillColor; // 0x524(0x10)
	float AnimTime; // 0x534(0x04)
	float TotalAnimTime; // 0x538(0x04)
	FString CurrentGoalID; // 0x540(0x10)
	UCommunityGoal* CurrentGoal; // 0x550(0x08)
	float CurrentValue; // 0x558(0x04)
	int32_t CurrentMembers; // 0x55c(0x04)
	UCommunityGoalFaction* Faction; // 0x560(0x08)
	bool IsShowingCurrentPlayerFaction; // 0x568(0x01)
	FMulticastInlineDelegate HoverStarted; // 0x570(0x10)
	FMulticastInlineDelegate HoverEnded; // 0x580(0x10)

	void UpdateTitle();
	void UpdateIcon();
	void SetFaction(UCommunityGoalFaction* Faction);
	void ResetAnim();
	void SetCommunityGoal(FText Goal, float Bronze Progress, float Silver Progress, float Gold Progress);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void SetGoal(FString GoalID, float GoalValue, int32_t Members);
	void BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void CheckFaction();
	void ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenV2(int32_t EntryPoint);
	void HoverEnded__DelegateSignature();
	void HoverStarted__DelegateSignature(UCommunityGoalFaction* Faction, UCommunityGoal* Goal);
};

