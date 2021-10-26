// WidgetBlueprintGeneratedClass ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C
// Size: 0x460 (Inherited: 0x250)
struct UITM_CommunityGoal_TotalProgress_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UButton* BackgroundButton; // 0x258(0x08)
	UButton* Button_Goal_1; // 0x260(0x08)
	UButton* Button_Goal_2; // 0x268(0x08)
	UButton* Button_Goal_3; // 0x270(0x08)
	UButton* Button_Goal_4; // 0x278(0x08)
	UButton* Button_Goal_5; // 0x280(0x08)
	UButton* Button_Goal_6; // 0x288(0x08)
	UButton* Button_Goal_7; // 0x290(0x08)
	UButton* Button_Goal_8; // 0x298(0x08)
	UButton* Button_Goal_9; // 0x2a0(0x08)
	UCheckBox* CheckBox_Goal_1; // 0x2a8(0x08)
	UCheckBox* CheckBox_Goal_2; // 0x2b0(0x08)
	UCheckBox* CheckBox_Goal_3; // 0x2b8(0x08)
	UCheckBox* CheckBox_Goal_4; // 0x2c0(0x08)
	UCheckBox* CheckBox_Goal_5; // 0x2c8(0x08)
	UCheckBox* CheckBox_Goal_6; // 0x2d0(0x08)
	UCheckBox* CheckBox_Goal_7; // 0x2d8(0x08)
	UCheckBox* CheckBox_Goal_8; // 0x2e0(0x08)
	UCheckBox* CheckBox_Goal_9; // 0x2e8(0x08)
	UButton* FactionIconToolTip; // 0x2f0(0x08)
	UImage* Image_133; // 0x2f8(0x08)
	UImage* Image_525; // 0x300(0x08)
	UImage* Image_Goal_1; // 0x308(0x08)
	UImage* Image_Goal_2; // 0x310(0x08)
	UImage* Image_Goal_3; // 0x318(0x08)
	UImage* Image_Goal_4; // 0x320(0x08)
	UImage* Image_Goal_5; // 0x328(0x08)
	UImage* Image_Goal_6; // 0x330(0x08)
	UImage* Image_Goal_7; // 0x338(0x08)
	UImage* Image_Goal_8; // 0x340(0x08)
	UImage* Image_Goal_9; // 0x348(0x08)
	UProgressBar* ProgressBar_1; // 0x350(0x08)
	UProgressBar* ProgressBar_2; // 0x358(0x08)
	UProgressBar* ProgressBar_3; // 0x360(0x08)
	UProgressBar* ProgressBar_4; // 0x368(0x08)
	UProgressBar* ProgressBar_5; // 0x370(0x08)
	UProgressBar* ProgressBar_6; // 0x378(0x08)
	UProgressBar* ProgressBar_7; // 0x380(0x08)
	UProgressBar* ProgressBar_8; // 0x388(0x08)
	UProgressBar* ProgressBar_9; // 0x390(0x08)
	UTextBlock* Title_Text; // 0x398(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x3a0(0x08)
	float AnimTime; // 0x3a8(0x04)
	float TotalAnimTime; // 0x3ac(0x04)
	float CurrentProgress; // 0x3b0(0x04)
	float CurrentlyTopGoalProgress; // 0x3b4(0x04)
	float ProgressBarAnimSpeed; // 0x3b8(0x04)
	bool Show_Title; // 0x3bc(0x01)
	FLinearColor CheckColorTier1; // 0x3c0(0x10)
	FLinearColor UnCheckColorTier1; // 0x3d0(0x10)
	FLinearColor CheckColorTier2; // 0x3e0(0x10)
	FLinearColor UnCheckColorTier2; // 0x3f0(0x10)
	FLinearColor CheckColorTier3; // 0x400(0x10)
	FLinearColor UnCheckColorTier3; // 0x410(0x10)
	FLinearColor BarColor; // 0x420(0x10)
	FMulticastInlineDelegate HoverStarted; // 0x430(0x10)
	FMulticastInlineDelegate HoverEnded; // 0x440(0x10)
	UITM_CommunityGoalRewardToolTip_C* ToolTip; // 0x450(0x08)
	UITM_FactionToolTip_C* FactionToolTip; // 0x458(0x08)

	void DoFactionToolTip();
	void SendButtonToolTipOpen(UWidget* Button, int32_t Tier);
	FLinearColor Get_Image_Goal_8_ColorAndOpacity_1();
	FLinearColor Get_Image_Goal_7_ColorAndOpacity_1();
	FLinearColor Get_Image_Goal_6_ColorAndOpacity_1();
	FLinearColor Get_Image_Goal_5_ColorAndOpacity_1();
	FLinearColor Get_Image_Goal_4_ColorAndOpacity_1();
	FLinearColor Get_Image_Goal_3_ColorAndOpacity_1();
	FLinearColor Get_Image_Goal_2_ColorAndOpacity_1();
	FLinearColor Get_Image_Goal_1_ColorAndOpacity_1();
	FLinearColor Get_Image_Goal_0_ColorAndOpacity_1();
	void IncreaseTotalGoalsProgressByGoal(UCommunityGoal* Goal, float Value, int32_t memberCount);
	float ProgressBar_8_Percent_1();
	float ProgressBar_7_Percent_1();
	float ProgressBar_6_Percent_1();
	float ProgressBar_5_Percent_1();
	float ProgressBar_4_Percent_1();
	float ProgressBar_3_Percent_1();
	float ProgressBar_2_Percent_1();
	float ProgressBar_1_Percent_1();
	float ProgressBar_0_Percent_1();
	void ResetAnim();
	void PreConstruct(bool IsDesignTime);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void SetGoals(TArray<FString> GoalID, TArray<float> GoalValue, TArray<int32_t> Members);
	void SetGoalsTier(float TierProgress);
	void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_ITM_CommunityGoal_TotalProgress(int32_t EntryPoint);
	void HoverEnded__DelegateSignature();
	void HoverStarted__DelegateSignature(UCommunityGoalFaction* Faction, UCommunityGoal* Goal);
};

