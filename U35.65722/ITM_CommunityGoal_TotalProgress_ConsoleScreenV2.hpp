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

    FLinearColor Get_Image_Goal_8_ColorAndOpacity_0(bool CallFunc_IsChecked_ReturnValue);
    FLinearColor Get_Image_Goal_7_ColorAndOpacity_0(bool CallFunc_IsChecked_ReturnValue);
    FLinearColor Get_Image_Goal_6_ColorAndOpacity_0(bool CallFunc_IsChecked_ReturnValue);
    FLinearColor Get_Image_Goal_5_ColorAndOpacity_0(bool CallFunc_IsChecked_ReturnValue);
    FLinearColor Get_Image_Goal_4_ColorAndOpacity_0(bool CallFunc_IsChecked_ReturnValue);
    FLinearColor Get_Image_Goal_3_ColorAndOpacity_0(bool CallFunc_IsChecked_ReturnValue);
    FLinearColor Get_Image_Goal_2_ColorAndOpacity_0(bool CallFunc_IsChecked_ReturnValue);
    FLinearColor Get_Image_Goal_1_ColorAndOpacity_0(bool CallFunc_IsChecked_ReturnValue);
    FLinearColor Get_Image_Goal_0_ColorAndOpacity_0(bool CallFunc_IsChecked_ReturnValue);
    void IncreaseTotalGoalsProgressByGoal(class UCommunityGoal* Goal, float Value, int32 memberCount, float ThisGoalProgress, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_TierProgress_ReturnValue, float CallFunc_TierProgress_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_TierProgress_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, float CallFunc_FClamp_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4);
    float ProgressBar_8_Percent_0(bool Temp_bool_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, TEnumAsByte<EEasingFunc::Type> K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_FMin_ReturnValue_1, float CallFunc_Ease_ReturnValue, float CallFunc_FMin_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    float ProgressBar_7_Percent_0(bool Temp_bool_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, TEnumAsByte<EEasingFunc::Type> K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_FMin_ReturnValue_1, float CallFunc_Ease_ReturnValue, float CallFunc_FMin_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    float ProgressBar_6_Percent_0(bool Temp_bool_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, TEnumAsByte<EEasingFunc::Type> K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_FMin_ReturnValue_1, float CallFunc_Ease_ReturnValue, float CallFunc_FMin_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    float ProgressBar_5_Percent_0(bool Temp_bool_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, TEnumAsByte<EEasingFunc::Type> K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_FMin_ReturnValue_1, float CallFunc_Ease_ReturnValue, float CallFunc_FMin_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    float ProgressBar_4_Percent_0(bool Temp_bool_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, TEnumAsByte<EEasingFunc::Type> K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_FMin_ReturnValue_1, float CallFunc_Ease_ReturnValue, float CallFunc_FMin_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    float ProgressBar_3_Percent_0(bool Temp_bool_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, TEnumAsByte<EEasingFunc::Type> K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_FMin_ReturnValue_1, float CallFunc_Ease_ReturnValue, float CallFunc_FMin_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    float ProgressBar_2_Percent_0(bool Temp_bool_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, TEnumAsByte<EEasingFunc::Type> K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_FMin_ReturnValue_1, float CallFunc_Ease_ReturnValue, float CallFunc_FMin_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    float ProgressBar_1_Percent_0(bool Temp_bool_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, TEnumAsByte<EEasingFunc::Type> K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_FMin_ReturnValue_1, float CallFunc_Ease_ReturnValue, float CallFunc_FMin_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    float ProgressBar_0_Percent_0(bool Temp_bool_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable, TEnumAsByte<EEasingFunc::Type> Temp_byte_Variable_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, TEnumAsByte<EEasingFunc::Type> K2Node_Select_Default, float CallFunc_FMin_ReturnValue_1, float CallFunc_Ease_ReturnValue, float CallFunc_FMin_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    void ResetAnim();
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetGoals(const TArray<FString>& GoalID, const TArray<float>& GoalValue, const TArray<int32>& Members);
    void SetGoalsTier(float TierProgress);
    void ExecuteUbergraph_ITM_CommunityGoal_TotalProgress_ConsoleScreenV2(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const TArray<FString>& K2Node_CustomEvent_GoalID, const TArray<float>& K2Node_CustomEvent_GoalValue, const TArray<int32>& K2Node_CustomEvent_Members, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Min_ReturnValue_1, class UCommunityGoal* CallFunc_FindGoal_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, float K2Node_CustomEvent_TierProgress, float CallFunc_FMin_ReturnValue);
};

#endif
