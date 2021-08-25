// WidgetBlueprintGeneratedClass ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C
// Size: 0x460 (Inherited: 0x250)
struct UITM_CommunityGoal_TotalProgress_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UButton* BackgroundButton; // 0x258(0x08)
	struct UButton* Button_Goal_1; // 0x260(0x08)
	struct UButton* Button_Goal_2; // 0x268(0x08)
	struct UButton* Button_Goal_3; // 0x270(0x08)
	struct UButton* Button_Goal_4; // 0x278(0x08)
	struct UButton* Button_Goal_5; // 0x280(0x08)
	struct UButton* Button_Goal_6; // 0x288(0x08)
	struct UButton* Button_Goal_7; // 0x290(0x08)
	struct UButton* Button_Goal_8; // 0x298(0x08)
	struct UButton* Button_Goal_9; // 0x2a0(0x08)
	struct UCheckBox* CheckBox_Goal_1; // 0x2a8(0x08)
	struct UCheckBox* CheckBox_Goal_2; // 0x2b0(0x08)
	struct UCheckBox* CheckBox_Goal_3; // 0x2b8(0x08)
	struct UCheckBox* CheckBox_Goal_4; // 0x2c0(0x08)
	struct UCheckBox* CheckBox_Goal_5; // 0x2c8(0x08)
	struct UCheckBox* CheckBox_Goal_6; // 0x2d0(0x08)
	struct UCheckBox* CheckBox_Goal_7; // 0x2d8(0x08)
	struct UCheckBox* CheckBox_Goal_8; // 0x2e0(0x08)
	struct UCheckBox* CheckBox_Goal_9; // 0x2e8(0x08)
	struct UButton* FactionIconToolTip; // 0x2f0(0x08)
	struct UImage* Image_133; // 0x2f8(0x08)
	struct UImage* Image_525; // 0x300(0x08)
	struct UImage* Image_Goal_1; // 0x308(0x08)
	struct UImage* Image_Goal_2; // 0x310(0x08)
	struct UImage* Image_Goal_3; // 0x318(0x08)
	struct UImage* Image_Goal_4; // 0x320(0x08)
	struct UImage* Image_Goal_5; // 0x328(0x08)
	struct UImage* Image_Goal_6; // 0x330(0x08)
	struct UImage* Image_Goal_7; // 0x338(0x08)
	struct UImage* Image_Goal_8; // 0x340(0x08)
	struct UImage* Image_Goal_9; // 0x348(0x08)
	struct UProgressBar* ProgressBar_1; // 0x350(0x08)
	struct UProgressBar* ProgressBar_2; // 0x358(0x08)
	struct UProgressBar* ProgressBar_3; // 0x360(0x08)
	struct UProgressBar* ProgressBar_4; // 0x368(0x08)
	struct UProgressBar* ProgressBar_5; // 0x370(0x08)
	struct UProgressBar* ProgressBar_6; // 0x378(0x08)
	struct UProgressBar* ProgressBar_7; // 0x380(0x08)
	struct UProgressBar* ProgressBar_8; // 0x388(0x08)
	struct UProgressBar* ProgressBar_9; // 0x390(0x08)
	struct UTextBlock* Title_Text; // 0x398(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x3a0(0x08)
	float AnimTime; // 0x3a8(0x04)
	float TotalAnimTime; // 0x3ac(0x04)
	float CurrentProgress; // 0x3b0(0x04)
	float CurrentlyTopGoalProgress; // 0x3b4(0x04)
	float ProgressBarAnimSpeed; // 0x3b8(0x04)
	bool Show_Title; // 0x3bc(0x01)
	char UnknownData_3BD[0x3]; // 0x3bd(0x03)
	struct FLinearColor CheckColorTier1; // 0x3c0(0x10)
	struct FLinearColor UnCheckColorTier1; // 0x3d0(0x10)
	struct FLinearColor CheckColorTier2; // 0x3e0(0x10)
	struct FLinearColor UnCheckColorTier2; // 0x3f0(0x10)
	struct FLinearColor CheckColorTier3; // 0x400(0x10)
	struct FLinearColor UnCheckColorTier3; // 0x410(0x10)
	struct FLinearColor BarColor; // 0x420(0x10)
	struct FMulticastInlineDelegate HoverStarted; // 0x430(0x10)
	struct FMulticastInlineDelegate HoverEnded; // 0x440(0x10)
	struct UITM_CommunityGoalRewardToolTip_C* ToolTip; // 0x450(0x08)
	struct UITM_FactionToolTip_C* FactionToolTip; // 0x458(0x08)

	void DoFactionToolTip(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.DoFactionToolTip
	void SendButtonToolTipOpen(struct UWidget* Button, int32_t Tier); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.SendButtonToolTipOpen
	struct FLinearColor Get_Image_Goal_8_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_8_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_7_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_7_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_6_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_6_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_5_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_5_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_4_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_4_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_3_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_3_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_2_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_2_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_1_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_1_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_0_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Get_Image_Goal_0_ColorAndOpacity_1
	void IncreaseTotalGoalsProgressByGoal(struct UCommunityGoal* Goal, float Value, int32_t memberCount); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.IncreaseTotalGoalsProgressByGoal
	float ProgressBar_8_Percent_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_8_Percent_1
	float ProgressBar_7_Percent_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_7_Percent_1
	float ProgressBar_6_Percent_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_6_Percent_1
	float ProgressBar_5_Percent_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_5_Percent_1
	float ProgressBar_4_Percent_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_4_Percent_1
	float ProgressBar_3_Percent_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_3_Percent_1
	float ProgressBar_2_Percent_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_2_Percent_1
	float ProgressBar_1_Percent_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_1_Percent_1
	float ProgressBar_0_Percent_1(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ProgressBar_0_Percent_1
	void ResetAnim(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ResetAnim
	void PreConstruct(bool IsDesignTime); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.PreConstruct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Tick
	void SetGoals(struct TArray<struct FString> GoalID, struct TArray<float> GoalValue, struct TArray<int32_t> Members); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.SetGoals
	void SetGoalsTier(float TierProgress); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.SetGoalsTier
	void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_4_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_3_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_5_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_6_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_7_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__Button_Goal_8_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
	void Construct(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.Construct
	void ExecuteUbergraph_ITM_CommunityGoal_TotalProgress(int32_t EntryPoint); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.ExecuteUbergraph_ITM_CommunityGoal_TotalProgress
	void HoverEnded__DelegateSignature(); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.HoverEnded__DelegateSignature
	void HoverStarted__DelegateSignature(struct UCommunityGoalFaction* Faction, struct UCommunityGoal* Goal); // Function ITM_CommunityGoal_TotalProgress.ITM_CommunityGoal_TotalProgress_C.HoverStarted__DelegateSignature
};

