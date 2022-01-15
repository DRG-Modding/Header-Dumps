#ifndef UE4SS_SDK_ITM_CommunityGoal_HPP
#define UE4SS_SDK_ITM_CommunityGoal_HPP

class UITM_CommunityGoal_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* BackgroundButton;
    UTextBlock* BronzeGoalNumber;
    UButton* Button_Goal_0;
    UButton* Button_Goal_1;
    UButton* Button_Goal_2;
    UCheckBox* CheckBox_Goal_Bronze;
    UCheckBox* CheckBox_Goal_Gold;
    UCheckBox* CheckBox_Goal_Silver;
    USizeBox* CurrentSizebox;
    UTextBlock* CurrentTextBlock;
    UButton* FactionIconToolTip;
    UTextBlock* GoalText;
    UTextBlock* GoldGoalNumber;
    UImage* Icon;
    UImage* Image_Bronze;
    UImage* Image_Gold;
    UImage* Image_Silver;
    UProgressBar* ProgressBar_0;
    UProgressBar* ProgressBar_1;
    UProgressBar* ProgressBar_2;
    UTextBlock* SilverGoalNumber;
    UTextBlock* TitleText;
    UUI_GradientMasked_Image_C* UI_GradientMasked_Image;
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
    FITM_CommunityGoal_CHoverStarted HoverStarted;
    void HoverStarted(UCommunityGoalFaction* Faction, UCommunityGoal* Goal);
    FITM_CommunityGoal_CHoverEnded HoverEnded;
    void HoverEnded();
    UITM_CommunityGoalRewardToolTip_C* ToolTip;
    UITM_FactionToolTip_C* FactionToolTip;

    void DoFactionToolTip(bool CallFunc_IsValid_ReturnValue, UUserWidget* CallFunc_CreateToolTip_OutToolTip, UITM_FactionToolTip_C* K2Node_DynamicCast_AsITM_Faction_Tool_Tip, bool K2Node_DynamicCast_bSuccess);
    void DoToolTip(UWidget* ToolTipTarget, int32 Tier, UUserWidget* CallFunc_CreateToolTip_OutToolTip, bool CallFunc_IsValid_ReturnValue, UITM_CommunityGoalRewardToolTip_C* K2Node_DynamicCast_AsITM_Community_Goal_Reward_Tool_Tip, bool K2Node_DynamicCast_bSuccess);
    void UpdateTitle(bool CallFunc_TextIsEmpty_ReturnValue);
    void UpdateIcon(FSlateBrush K2Node_MakeStruct_SlateBrush, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void SetFaction(UCommunityGoalFaction* Faction, bool CallFunc_IsValid_ReturnValue, UUserWidget* CallFunc_CreateToolTip_OutToolTip, UITM_FactionToolTip_C* K2Node_DynamicCast_AsITM_Faction_Tool_Tip, bool K2Node_DynamicCast_bSuccess, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void ResetAnim();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetCommunityGoal(FText Goal, float Bronze Progress, float Silver Progress, float Gold Progress);
    void PreConstruct(bool IsDesignTime);
    void SetGoal(FString GoalID, float GoalValue, int32 Members, bool ForceRefresh);
    void BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void CheckFaction();
    void BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_CommunityGoal(int32 EntryPoint, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue_1, FLinearColor K2Node_MakeStruct_LinearColor, FText K2Node_CustomEvent_Goal, float K2Node_CustomEvent_Bronze_Progress, float K2Node_CustomEvent_Silver_Progress, float K2Node_CustomEvent_Gold_Progress, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, UCommunityGoalFaction* Temp_object_Variable, UCommunityGoalFaction* Temp_object_Variable_1, float CallFunc_FMin_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue_3, float CallFunc_Ease_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue_1, float CallFunc_FMin_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Ease_ReturnValue_2, float CallFunc_FMax_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue_3, FLinearColor K2Node_MakeStruct_LinearColor_1, float CallFunc_FMax_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FMin_ReturnValue_6, FLinearColor K2Node_MakeStruct_LinearColor_2, bool K2Node_Event_IsDesignTime, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, UCommunityGoalFaction* Temp_object_Variable_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_IntFloat_ReturnValue_1, FMargin K2Node_MakeStruct_Margin, float CallFunc_Multiply_IntFloat_ReturnValue_2, FString K2Node_CustomEvent_GoalID, float K2Node_CustomEvent_GoalValue, int32 K2Node_CustomEvent_Members, bool K2Node_CustomEvent_ForceRefresh, UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_IntInt_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, UGameData* CallFunc_GetFSDGameData_ReturnValue, UCommunityGoalFaction* Temp_object_Variable_3, UCommunityGoal* CallFunc_FindGoal_ReturnValue, EFSDFaction Temp_byte_Variable, bool CallFunc_NotEqual_StrStr_ReturnValue, UCommunityGoalFaction* Temp_object_Variable_4, UCommunityGoalFaction* Temp_object_Variable_5, bool CallFunc_IsValid_ReturnValue, float CallFunc_TierProgress_ReturnValue, float CallFunc_TierProgress_ReturnValue_1, UCommunityGoalFaction* Temp_object_Variable_6, float CallFunc_TierProgress_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_3, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, EFSDFaction CallFunc_GetFaction_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue_1, UCommunityGoalFaction* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_3, int32 CallFunc_FCeil_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_4, FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_FCeil_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue_1, UCommunityGoalFaction* Temp_object_Variable_7, float CallFunc_Multiply_IntFloat_ReturnValue_5, int32 CallFunc_FCeil_ReturnValue_2, FText CallFunc_Conv_IntToText_ReturnValue_2, EFSDFaction Temp_byte_Variable_1, UCommunityGoalFaction* K2Node_Select_Default_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void HoverEnded__DelegateSignature();
    void HoverStarted__DelegateSignature(UCommunityGoalFaction* Faction, UCommunityGoal* Goal);
}

#endif
