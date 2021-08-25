// WidgetBlueprintGeneratedClass ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C
// Size: 0x3cc (Inherited: 0x250)
struct UITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UCheckBox* CheckBox_Goal_1; // 0x258(0x08)
	struct UCheckBox* CheckBox_Goal_2; // 0x260(0x08)
	struct UCheckBox* CheckBox_Goal_3; // 0x268(0x08)
	struct UCheckBox* CheckBox_Goal_4; // 0x270(0x08)
	struct UCheckBox* CheckBox_Goal_5; // 0x278(0x08)
	struct UCheckBox* CheckBox_Goal_6; // 0x280(0x08)
	struct UCheckBox* CheckBox_Goal_7; // 0x288(0x08)
	struct UCheckBox* CheckBox_Goal_8; // 0x290(0x08)
	struct UCheckBox* CheckBox_Goal_9; // 0x298(0x08)
	struct UImage* Image_133; // 0x2a0(0x08)
	struct UImage* Image_525; // 0x2a8(0x08)
	struct UImage* Image_Goal_1; // 0x2b0(0x08)
	struct UImage* Image_Goal_2; // 0x2b8(0x08)
	struct UImage* Image_Goal_3; // 0x2c0(0x08)
	struct UImage* Image_Goal_4; // 0x2c8(0x08)
	struct UImage* Image_Goal_5; // 0x2d0(0x08)
	struct UImage* Image_Goal_6; // 0x2d8(0x08)
	struct UImage* Image_Goal_7; // 0x2e0(0x08)
	struct UImage* Image_Goal_8; // 0x2e8(0x08)
	struct UImage* Image_Goal_9; // 0x2f0(0x08)
	struct UProgressBar* ProgressBar_1; // 0x2f8(0x08)
	struct UProgressBar* ProgressBar_2; // 0x300(0x08)
	struct UProgressBar* ProgressBar_3; // 0x308(0x08)
	struct UProgressBar* ProgressBar_4; // 0x310(0x08)
	struct UProgressBar* ProgressBar_5; // 0x318(0x08)
	struct UProgressBar* ProgressBar_6; // 0x320(0x08)
	struct UProgressBar* ProgressBar_7; // 0x328(0x08)
	struct UProgressBar* ProgressBar_8; // 0x330(0x08)
	struct UProgressBar* ProgressBar_9; // 0x338(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x340(0x08)
	float AnimTime; // 0x348(0x04)
	float TotalAnimTime; // 0x34c(0x04)
	float CurrentProgress; // 0x350(0x04)
	float CurrentlyTopGoalProgress; // 0x354(0x04)
	float ProgressBarAnimSpeed; // 0x358(0x04)
	struct FLinearColor CheckColorTier1; // 0x35c(0x10)
	struct FLinearColor UnCheckColorTier1; // 0x36c(0x10)
	struct FLinearColor CheckColorTier2; // 0x37c(0x10)
	struct FLinearColor UnCheckColorTier2; // 0x38c(0x10)
	struct FLinearColor CheckColorTier3; // 0x39c(0x10)
	struct FLinearColor UnCheckColorTier3; // 0x3ac(0x10)
	struct FLinearColor BarColor; // 0x3bc(0x10)

	struct FLinearColor Get_Image_Goal_8_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.Get_Image_Goal_8_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_7_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.Get_Image_Goal_7_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_6_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.Get_Image_Goal_6_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_5_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.Get_Image_Goal_5_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_4_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.Get_Image_Goal_4_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_3_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.Get_Image_Goal_3_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_2_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.Get_Image_Goal_2_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_1_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.Get_Image_Goal_1_ColorAndOpacity_1
	struct FLinearColor Get_Image_Goal_0_ColorAndOpacity_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.Get_Image_Goal_0_ColorAndOpacity_1
	void IncreaseTotalGoalsProgressByGoal(struct UCommunityGoal* Goal, float Value, int32_t memberCount); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.IncreaseTotalGoalsProgressByGoal
	float ProgressBar_8_Percent_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.ProgressBar_8_Percent_1
	float ProgressBar_7_Percent_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.ProgressBar_7_Percent_1
	float ProgressBar_6_Percent_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.ProgressBar_6_Percent_1
	float ProgressBar_5_Percent_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.ProgressBar_5_Percent_1
	float ProgressBar_4_Percent_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.ProgressBar_4_Percent_1
	float ProgressBar_3_Percent_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.ProgressBar_3_Percent_1
	float ProgressBar_2_Percent_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.ProgressBar_2_Percent_1
	float ProgressBar_1_Percent_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.ProgressBar_1_Percent_1
	float ProgressBar_0_Percent_1(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.ProgressBar_0_Percent_1
	void ResetAnim(); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.ResetAnim
	void PreConstruct(bool IsDesignTime); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.PreConstruct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.Tick
	void SetGoals(struct TArray<struct FString> GoalID, struct TArray<float> GoalValue, struct TArray<int32_t> Members); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.SetGoals
	void SetGoalsTier(float TierProgress); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.SetGoalsTier
	void ExecuteUbergraph_ITM_CommunityGoal_TotalProgress_ConsoleScreenV2(int32_t EntryPoint); // Function ITM_CommunityGoal_TotalProgress_ConsoleScreenV2.ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C.ExecuteUbergraph_ITM_CommunityGoal_TotalProgress_ConsoleScreenV2
};

