// WidgetBlueprintGeneratedClass ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C
// Size: 0x3cc (Inherited: 0x250)
struct UITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UCheckBox* CheckBox_Goal_1; // 0x258(0x08)
	UCheckBox* CheckBox_Goal_2; // 0x260(0x08)
	UCheckBox* CheckBox_Goal_3; // 0x268(0x08)
	UCheckBox* CheckBox_Goal_4; // 0x270(0x08)
	UCheckBox* CheckBox_Goal_5; // 0x278(0x08)
	UCheckBox* CheckBox_Goal_6; // 0x280(0x08)
	UCheckBox* CheckBox_Goal_7; // 0x288(0x08)
	UCheckBox* CheckBox_Goal_8; // 0x290(0x08)
	UCheckBox* CheckBox_Goal_9; // 0x298(0x08)
	UImage* Image_133; // 0x2a0(0x08)
	UImage* Image_525; // 0x2a8(0x08)
	UImage* Image_Goal_1; // 0x2b0(0x08)
	UImage* Image_Goal_2; // 0x2b8(0x08)
	UImage* Image_Goal_3; // 0x2c0(0x08)
	UImage* Image_Goal_4; // 0x2c8(0x08)
	UImage* Image_Goal_5; // 0x2d0(0x08)
	UImage* Image_Goal_6; // 0x2d8(0x08)
	UImage* Image_Goal_7; // 0x2e0(0x08)
	UImage* Image_Goal_8; // 0x2e8(0x08)
	UImage* Image_Goal_9; // 0x2f0(0x08)
	UProgressBar* ProgressBar_1; // 0x2f8(0x08)
	UProgressBar* ProgressBar_2; // 0x300(0x08)
	UProgressBar* ProgressBar_3; // 0x308(0x08)
	UProgressBar* ProgressBar_4; // 0x310(0x08)
	UProgressBar* ProgressBar_5; // 0x318(0x08)
	UProgressBar* ProgressBar_6; // 0x320(0x08)
	UProgressBar* ProgressBar_7; // 0x328(0x08)
	UProgressBar* ProgressBar_8; // 0x330(0x08)
	UProgressBar* ProgressBar_9; // 0x338(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x340(0x08)
	float AnimTime; // 0x348(0x04)
	float TotalAnimTime; // 0x34c(0x04)
	float CurrentProgress; // 0x350(0x04)
	float CurrentlyTopGoalProgress; // 0x354(0x04)
	float ProgressBarAnimSpeed; // 0x358(0x04)
	FLinearColor CheckColorTier1; // 0x35c(0x10)
	FLinearColor UnCheckColorTier1; // 0x36c(0x10)
	FLinearColor CheckColorTier2; // 0x37c(0x10)
	FLinearColor UnCheckColorTier2; // 0x38c(0x10)
	FLinearColor CheckColorTier3; // 0x39c(0x10)
	FLinearColor UnCheckColorTier3; // 0x3ac(0x10)
	FLinearColor BarColor; // 0x3bc(0x10)

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
	void ExecuteUbergraph_ITM_CommunityGoal_TotalProgress_ConsoleScreenV2(int32_t EntryPoint);
};

