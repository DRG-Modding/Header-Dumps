#ifndef UE4SS_SDK_ITM_CommunityGoal_ConsoleScreenV2_HPP
#define UE4SS_SDK_ITM_CommunityGoal_ConsoleScreenV2_HPP

class UITM_CommunityGoal_ConsoleScreenV2_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* BackgroundButton;
    UCheckBox* CheckBox_Goal_Bronze;
    UCheckBox* CheckBox_Goal_Gold;
    UCheckBox* CheckBox_Goal_Silver;
    UTextBlock* GoalText;
    UImage* Icon;
    UImage* Image_Bronze;
    UImage* Image_Gold;
    UImage* Image_Silver;
    UProgressBar* ProgressBar_0;
    UProgressBar* ProgressBar_1;
    UProgressBar* ProgressBar_2;
    UTextBlock* TitleText;
    UUI_ImageTinted_C* UI_ImageTinted;
    UUI_ImageTinted_C* UI_ImageTinted_267;
    FText Title;
    int32 TitleSize;
    FSlateBrush IconImage;
    FProgressBarStyle BarStyle;
    float Progress0;
    float Progress1;
    float Progress2;
    FLinearColor FillColor;
    float AnimTime;
    float TotalAnimTime;
    FString CurrentGoalID;
    UCommunityGoal* CurrentGoal;
    float CurrentValue;
    int32 CurrentMembers;
    UCommunityGoalFaction* Faction;
    bool IsShowingCurrentPlayerFaction;
    FITM_CommunityGoal_ConsoleScreenV2_CHoverStarted HoverStarted;
    void HoverStarted(UCommunityGoalFaction* Faction, UCommunityGoal* Goal);
    FITM_CommunityGoal_ConsoleScreenV2_CHoverEnded HoverEnded;
    void HoverEnded();

    void UpdateTitle(bool CallFunc_TextIsEmpty_ReturnValue);
    void UpdateIcon(FSlateBrush K2Node_MakeStruct_SlateBrush, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void SetFaction(UCommunityGoalFaction* Faction, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void ResetAnim();
    void SetCommunityGoal(FText Goal, float Bronze Progress, float Silver Progress, float Gold Progress);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void SetGoal(FString GoalID, float GoalValue, int32 Members);
    void BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void CheckFaction();
    void ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenV2(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor, FText K2Node_CustomEvent_Goal, float K2Node_CustomEvent_Bronze_Progress, float K2Node_CustomEvent_Silver_Progress, float K2Node_CustomEvent_Gold_Progress, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, UCommunityGoalFaction* Temp_object_Variable, UCommunityGoalFaction* Temp_object_Variable_1, UCommunityGoalFaction* Temp_object_Variable_2, float CallFunc_FMin_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue_2, float CallFunc_Ease_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue_1, float CallFunc_FMin_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Ease_ReturnValue_2, float CallFunc_FMax_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_3, FLinearColor K2Node_MakeStruct_LinearColor_1, float CallFunc_FMax_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FMin_ReturnValue_5, FLinearColor K2Node_MakeStruct_LinearColor_2, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue_6, float CallFunc_Multiply_IntFloat_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_FTrunc_ReturnValue, UCommunityGoalFaction* Temp_object_Variable_3, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FString K2Node_CustomEvent_GoalID, float K2Node_CustomEvent_GoalValue, int32 K2Node_CustomEvent_Members, UGameData* CallFunc_GetFSDGameData_ReturnValue, UCommunityGoal* CallFunc_FindGoal_ReturnValue, EFSDFaction Temp_byte_Variable, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_TierProgress_ReturnValue, float CallFunc_TierProgress_ReturnValue_1, float CallFunc_TierProgress_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_3, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue, UCommunityGoalFaction* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void HoverEnded__DelegateSignature();
    void HoverStarted__DelegateSignature(UCommunityGoalFaction* Faction, UCommunityGoal* Goal);
}

#endif
