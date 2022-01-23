#ifndef UE4SS_SDK_ITM_CommunityGoal_ConsoleScreenV2_HPP
#define UE4SS_SDK_ITM_CommunityGoal_ConsoleScreenV2_HPP

class UITM_CommunityGoal_ConsoleScreenV2_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* BackgroundButton;
    class UCheckBox* CheckBox_Goal_Bronze;
    class UCheckBox* CheckBox_Goal_Gold;
    class UCheckBox* CheckBox_Goal_Silver;
    class UTextBlock* GoalText;
    class UImage* Icon;
    class UImage* Image_Bronze;
    class UImage* Image_Gold;
    class UImage* Image_Silver;
    class UProgressBar* ProgressBar_0;
    class UProgressBar* ProgressBar_1;
    class UProgressBar* ProgressBar_2;
    class UTextBlock* TitleText;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UUI_ImageTinted_C* UI_ImageTinted_267;
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
    class UCommunityGoal* CurrentGoal;
    float CurrentValue;
    int32 CurrentMembers;
    class UCommunityGoalFaction* Faction;
    bool IsShowingCurrentPlayerFaction;
    FITM_CommunityGoal_ConsoleScreenV2_CHoverStarted HoverStarted;
    void HoverStarted(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
    FITM_CommunityGoal_ConsoleScreenV2_CHoverEnded HoverEnded;
    void HoverEnded();

    void UpdateTitle(bool CallFunc_TextIsEmpty_ReturnValue);
    void UpdateIcon(FSlateBrush K2Node_MakeStruct_SlateBrush, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void SetFaction(class UCommunityGoalFaction* Faction, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void ResetAnim();
    void SetCommunityGoal(FText Goal, float Bronze Progress, float Silver Progress, float Gold Progress);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void SetGoal(FString GoalID, float GoalValue, int32 Members);
    void BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void CheckFaction();
    void ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenV2(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor, FText K2Node_CustomEvent_Goal, float K2Node_CustomEvent_Bronze_Progress, float K2Node_CustomEvent_Silver_Progress, float K2Node_CustomEvent_Gold_Progress, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class UCommunityGoalFaction* Temp_object_Variable, class UCommunityGoalFaction* Temp_object_Variable_1, class UCommunityGoalFaction* Temp_object_Variable_2, float CallFunc_FMin_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue_2, float CallFunc_Ease_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue_1, float CallFunc_FMin_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Ease_ReturnValue_2, float CallFunc_FMax_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_3, FLinearColor K2Node_MakeStruct_LinearColor_1, float CallFunc_FMax_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FMin_ReturnValue_5, FLinearColor K2Node_MakeStruct_LinearColor_2, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue_6, float CallFunc_Multiply_IntFloat_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_FTrunc_ReturnValue, class UCommunityGoalFaction* Temp_object_Variable_3, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FString K2Node_CustomEvent_GoalID, float K2Node_CustomEvent_GoalValue, int32 K2Node_CustomEvent_Members, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UCommunityGoal* CallFunc_FindGoal_ReturnValue, EFSDFaction Temp_byte_Variable, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_TierProgress_ReturnValue, float CallFunc_TierProgress_ReturnValue_1, float CallFunc_TierProgress_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_3, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue, class UCommunityGoalFaction* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void HoverEnded__DelegateSignature();
    void HoverStarted__DelegateSignature(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
};

#endif
