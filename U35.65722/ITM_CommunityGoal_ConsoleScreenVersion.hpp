#ifndef UE4SS_SDK_ITM_CommunityGoal_ConsoleScreenVersion_HPP
#define UE4SS_SDK_ITM_CommunityGoal_ConsoleScreenVersion_HPP

class UITM_CommunityGoal_ConsoleScreenVersion_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShowGoalInfoBox;
    class UCheckBox* CheckBox_Goal_Bronze;
    class UCheckBox* CheckBox_Goal_Gold;
    class UCheckBox* CheckBox_Goal_Silver;
    class USizeBox* CurrentSizebox;
    class UTextBlock* CurrentTextBlock;
    class UTextBlock* GoalText;
    class UImage* Icon;
    class UImage* Image_Bronze;
    class UImage* Image_Gold;
    class UImage* Image_Silver;
    class UProgressBar* ProgressBar_0;
    class UProgressBar* ProgressBar_1;
    class UProgressBar* ProgressBar_2;
    class UTextBlock* TitleText;
    class UUI_GradientMasked_Image_C* UI_GradientMasked_Image;
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

    void UpdateTitle(bool CallFunc_TextIsEmpty_ReturnValue);
    void UpdateIcon(bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void SetFaction(class UCommunityGoalFaction* Faction, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void ResetAnim();
    void AdjustImageSize(float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetCommunityGoal(FText Goal, float Bronze Progress, float Silver Progress, float Gold Progress);
    void PreConstruct(bool IsDesignTime);
    void SetGoal(FString GoalID, float GoalValue, int32 Members);
    void BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void CheckFaction();
    void ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenVersion(int32 EntryPoint, class UCommunityGoalFaction* Temp_object_Variable, class UCommunityGoalFaction* Temp_object_Variable_1, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCommunityGoalFaction* Temp_object_Variable_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_FMin_ReturnValue_1, class UCommunityGoalFaction* Temp_object_Variable_3, FLinearColor K2Node_MakeStruct_LinearColor, EFSDFaction Temp_byte_Variable, class UCommunityGoalFaction* Temp_object_Variable_4, FText K2Node_CustomEvent_Goal, float K2Node_CustomEvent_Bronze_Progress, float K2Node_CustomEvent_Silver_Progress, float K2Node_CustomEvent_Gold_Progress, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class UCommunityGoalFaction* Temp_object_Variable_5, class UCommunityGoalFaction* Temp_object_Variable_6, class UCommunityGoalFaction* Temp_object_Variable_7, EFSDFaction Temp_byte_Variable_1, float CallFunc_FMin_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue_3, float CallFunc_Ease_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue_1, float CallFunc_FMin_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Ease_ReturnValue_2, float CallFunc_FMax_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue_3, FLinearColor K2Node_MakeStruct_LinearColor_1, float CallFunc_FMax_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FMin_ReturnValue_6, FLinearColor K2Node_MakeStruct_LinearColor_2, bool K2Node_Event_IsDesignTime, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_2, FMargin K2Node_MakeStruct_Margin, FString K2Node_CustomEvent_GoalID, float K2Node_CustomEvent_GoalValue, int32 K2Node_CustomEvent_Members, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot_1, bool K2Node_DynamicCast_bSuccess_1, FMargin K2Node_MakeStruct_Margin_1, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UCommunityGoal* CallFunc_FindGoal_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_TierProgress_ReturnValue, float CallFunc_TierProgress_ReturnValue_1, float CallFunc_TierProgress_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_3, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UCommunityGoalFaction* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, EFSDFaction CallFunc_GetFaction_ReturnValue_1, class UCommunityGoalFaction* K2Node_Select_Default_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1);
};

#endif
