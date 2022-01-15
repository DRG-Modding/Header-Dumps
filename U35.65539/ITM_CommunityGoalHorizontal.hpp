#ifndef UE4SS_SDK_ITM_CommunityGoalHorizontal_HPP
#define UE4SS_SDK_ITM_CommunityGoalHorizontal_HPP

class UITM_CommunityGoalHorizontal_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ShowGoalInfoBox_Large;
    UWidgetAnimation* ShowGoalInfoBox;
    UButton* BackgroundButton;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_172;
    UCheckBox* CheckBox_Goal_Bronze;
    UCheckBox* CheckBox_Goal_Gold;
    UCheckBox* CheckBox_Goal_Silver;
    UTextBlock* GoalInformationExpansion;
    UTextBlock* GoalText;
    UImage* Icon;
    UImage* Image_Bronze;
    UImage* Image_Gold;
    UImage* Image_Silver;
    UProgressBar* ProgressBar_0;
    UProgressBar* ProgressBar_1;
    UProgressBar* ProgressBar_2;
    UBorder* Selected_Border;
    UImage* Selected_Fading_Background;
    UTextBlock* TitleText;
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
    bool UseLargeAnimation;
    bool HoverAnimation;

    void ShowAnimation(UWidgetAnimation*& Animation, bool Temp_bool_Variable, UWidgetAnimation* K2Node_Select_Default);
    void UpdateTitle(bool CallFunc_TextIsEmpty_ReturnValue);
    void UpdateIcon(bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void SetFaction(UCommunityGoalFaction* Faction, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void ResetAnim();
    void AdjustImageSize(float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void SetCommunityGoal(FText Goal, float Bronze Progress, float Silver Progress, float Gold Progress);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void SetGoal(FString GoalID, float GoalValue, int32 Members);
    void BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void CheckFaction();
    void ExecuteUbergraph_ITM_CommunityGoalHorizontal(int32 EntryPoint, UCommunityGoalFaction* Temp_object_Variable, UCommunityGoalFaction* Temp_object_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, UCommunityGoalFaction* Temp_object_Variable_2, FLinearColor K2Node_MakeStruct_LinearColor, UCommunityGoalFaction* Temp_object_Variable_3, EFSDFaction Temp_byte_Variable, FText K2Node_CustomEvent_Goal, float K2Node_CustomEvent_Bronze_Progress, float K2Node_CustomEvent_Silver_Progress, float K2Node_CustomEvent_Gold_Progress, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, UCommunityGoalFaction* Temp_object_Variable_4, UCommunityGoalFaction* Temp_object_Variable_5, UCommunityGoalFaction* Temp_object_Variable_6, UCommunityGoalFaction* Temp_object_Variable_7, float CallFunc_FMin_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue_2, float CallFunc_Ease_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue_1, float CallFunc_FMin_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Ease_ReturnValue_2, float CallFunc_FMax_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_3, FLinearColor K2Node_MakeStruct_LinearColor_1, float CallFunc_FMax_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FMin_ReturnValue_5, FLinearColor K2Node_MakeStruct_LinearColor_2, EFSDFaction Temp_byte_Variable_1, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_FMin_ReturnValue_6, bool K2Node_Event_IsDesignTime, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_2, FMargin K2Node_MakeStruct_Margin, FString K2Node_CustomEvent_GoalID, float K2Node_CustomEvent_GoalValue, int32 K2Node_CustomEvent_Members, UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot_1, bool K2Node_DynamicCast_bSuccess_1, FMargin K2Node_MakeStruct_Margin_1, UGameData* CallFunc_GetFSDGameData_ReturnValue, UCommunityGoal* CallFunc_FindGoal_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_TierProgress_ReturnValue, float CallFunc_TierProgress_ReturnValue_1, float CallFunc_TierProgress_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_3, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, EFSDFaction CallFunc_GetFaction_ReturnValue_1, UCommunityGoalFaction* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UCommunityGoalFaction* K2Node_Select_Default_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, UWidgetAnimation* CallFunc_ShowAnimation_Animation, UWidgetAnimation* CallFunc_ShowAnimation_Animation_1, bool CallFunc_IsAnimationPlaying_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UWidgetAnimation* CallFunc_ShowAnimation_Animation_2, UWidgetAnimation* CallFunc_ShowAnimation_Animation_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UWidgetAnimation* CallFunc_ShowAnimation_Animation_4, UWidgetAnimation* CallFunc_ShowAnimation_Animation_5, bool CallFunc_IsAnimationPlaying_ReturnValue_1);
}

#endif
