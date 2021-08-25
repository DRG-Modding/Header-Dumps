// WidgetBlueprintGeneratedClass ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C
// Size: 0x590 (Inherited: 0x250)
struct UITM_CommunityGoal_ConsoleScreenV2_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UButton* BackgroundButton; // 0x258(0x08)
	struct UCheckBox* CheckBox_Goal_Bronze; // 0x260(0x08)
	struct UCheckBox* CheckBox_Goal_Gold; // 0x268(0x08)
	struct UCheckBox* CheckBox_Goal_Silver; // 0x270(0x08)
	struct UTextBlock* GoalText; // 0x278(0x08)
	struct UImage* Icon; // 0x280(0x08)
	struct UImage* Image_Bronze; // 0x288(0x08)
	struct UImage* Image_Gold; // 0x290(0x08)
	struct UImage* Image_Silver; // 0x298(0x08)
	struct UProgressBar* ProgressBar_1; // 0x2a0(0x08)
	struct UProgressBar* ProgressBar_2; // 0x2a8(0x08)
	struct UProgressBar* ProgressBar_3; // 0x2b0(0x08)
	struct UTextBlock* TitleText; // 0x2b8(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x2c0(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted_268; // 0x2c8(0x08)
	struct FText Title; // 0x2d0(0x18)
	int32_t TitleSize; // 0x2e8(0x04)
	char UnknownData_2EC[0x4]; // 0x2ec(0x04)
	struct FSlateBrush IconImage; // 0x2f0(0x88)
	struct FProgressBarStyle BarStyle; // 0x378(0x1a0)
	float Progress0; // 0x518(0x04)
	float Progress1; // 0x51c(0x04)
	float Progress2; // 0x520(0x04)
	struct FLinearColor FillColor; // 0x524(0x10)
	float AnimTime; // 0x534(0x04)
	float TotalAnimTime; // 0x538(0x04)
	char UnknownData_53C[0x4]; // 0x53c(0x04)
	struct FString CurrentGoalID; // 0x540(0x10)
	struct UCommunityGoal* CurrentGoal; // 0x550(0x08)
	float CurrentValue; // 0x558(0x04)
	int32_t CurrentMembers; // 0x55c(0x04)
	struct UCommunityGoalFaction* Faction; // 0x560(0x08)
	bool IsShowingCurrentPlayerFaction; // 0x568(0x01)
	char UnknownData_569[0x7]; // 0x569(0x07)
	struct FMulticastInlineDelegate HoverStarted; // 0x570(0x10)
	struct FMulticastInlineDelegate HoverEnded; // 0x580(0x10)

	void UpdateTitle(); // Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.UpdateTitle
	void UpdateIcon(); // Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.UpdateIcon
	void SetFaction(struct UCommunityGoalFaction* Faction); // Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetFaction
	void ResetAnim(); // Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.ResetAnim
	void SetCommunityGoal(struct FText Goal, float Bronze Progress, float Silver Progress, float Gold Progress); // Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetCommunityGoal
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.Tick
	void PreConstruct(bool IsDesignTime); // Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.PreConstruct
	void SetGoal(struct FString GoalID, float GoalValue, int32_t Members); // Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetGoal
	void BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void CheckFaction(); // Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.CheckFaction
	void ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenV2(int32_t EntryPoint); // Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenV2
	void HoverEnded__DelegateSignature(); // Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.HoverEnded__DelegateSignature
	void HoverStarted__DelegateSignature(struct UCommunityGoalFaction* Faction, struct UCommunityGoal* Goal); // Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.HoverStarted__DelegateSignature
};

