#ifndef UE4SS_SDK_ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_HPP
#define UE4SS_SDK_ITM_CommunityGoal_TotalProgress_ConsoleScreenV2_HPP

class UITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheckBox* CheckBox_Goal_0;
    class UCheckBox* CheckBox_Goal_1;
    class UCheckBox* CheckBox_Goal_2;
    class UCheckBox* CheckBox_Goal_3;
    class UCheckBox* CheckBox_Goal_4;
    class UCheckBox* CheckBox_Goal_5;
    class UCheckBox* CheckBox_Goal_6;
    class UCheckBox* CheckBox_Goal_7;
    class UCheckBox* CheckBox_Goal_8;
    class UImage* Image_132;
    class UImage* Image_524;
    class UImage* Image_Goal_0;
    class UImage* Image_Goal_1;
    class UImage* Image_Goal_2;
    class UImage* Image_Goal_3;
    class UImage* Image_Goal_4;
    class UImage* Image_Goal_5;
    class UImage* Image_Goal_6;
    class UImage* Image_Goal_7;
    class UImage* Image_Goal_8;
    class UProgressBar* ProgressBar_0;
    class UProgressBar* ProgressBar_1;
    class UProgressBar* ProgressBar_2;
    class UProgressBar* ProgressBar_3;
    class UProgressBar* ProgressBar_4;
    class UProgressBar* ProgressBar_5;
    class UProgressBar* ProgressBar_6;
    class UProgressBar* ProgressBar_7;
    class UProgressBar* ProgressBar_8;
    class UUI_ImageTinted_C* UI_ImageTinted;
    float AnimTime;
    float TotalAnimTime;
    float CurrentProgress;
    float CurrentlyTopGoalProgress;
    float ProgressBarAnimSpeed;
    FLinearColor CheckColorTier1;
    FLinearColor UnCheckColorTier1;
    FLinearColor CheckColorTier2;
    FLinearColor UnCheckColorTier2;
    FLinearColor CheckColorTier3;
    FLinearColor UnCheckColorTier3;
    FLinearColor BarColor;

    FLinearColor Get_Image_Goal_8_ColorAndOpacity_0();
    FLinearColor Get_Image_Goal_7_ColorAndOpacity_0();
    FLinearColor Get_Image_Goal_6_ColorAndOpacity_0();
    FLinearColor Get_Image_Goal_5_ColorAndOpacity_0();
    FLinearColor Get_Image_Goal_4_ColorAndOpacity_0();
    FLinearColor Get_Image_Goal_3_ColorAndOpacity_0();
    FLinearColor Get_Image_Goal_2_ColorAndOpacity_0();
    FLinearColor Get_Image_Goal_1_ColorAndOpacity_0();
    FLinearColor Get_Image_Goal_0_ColorAndOpacity_0();
    void IncreaseTotalGoalsProgressByGoal(class UCommunityGoal* Goal, float Value, int32 memberCount);
    float ProgressBar_8_Percent_0();
    float ProgressBar_7_Percent_0();
    float ProgressBar_6_Percent_0();
    float ProgressBar_5_Percent_0();
    float ProgressBar_4_Percent_0();
    float ProgressBar_3_Percent_0();
    float ProgressBar_2_Percent_0();
    float ProgressBar_1_Percent_0();
    float ProgressBar_0_Percent_0();
    void ResetAnim();
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetGoals(const TArray<FString>& GoalID, const TArray<float>& GoalValue, const TArray<int32>& Members);
    void SetGoalsTier(float TierProgress);
    void ExecuteUbergraph_ITM_CommunityGoal_TotalProgress_ConsoleScreenV2(int32 EntryPoint);
};

#endif
