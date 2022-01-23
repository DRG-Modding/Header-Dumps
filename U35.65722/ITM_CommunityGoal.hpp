#ifndef UE4SS_SDK_ITM_CommunityGoal_HPP
#define UE4SS_SDK_ITM_CommunityGoal_HPP

class UITM_CommunityGoal_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* BackgroundButton;
    class UTextBlock* BronzeGoalNumber;
    class UButton* Button_Goal_0;
    class UButton* Button_Goal_1;
    class UButton* Button_Goal_2;
    class UCheckBox* CheckBox_Goal_Bronze;
    class UCheckBox* CheckBox_Goal_Gold;
    class UCheckBox* CheckBox_Goal_Silver;
    class USizeBox* CurrentSizebox;
    class UTextBlock* CurrentTextBlock;
    class UButton* FactionIconToolTip;
    class UTextBlock* GoalText;
    class UTextBlock* GoldGoalNumber;
    class UImage* Icon;
    class UImage* Image_Bronze;
    class UImage* Image_Gold;
    class UImage* Image_Silver;
    class UProgressBar* ProgressBar_0;
    class UProgressBar* ProgressBar_1;
    class UProgressBar* ProgressBar_2;
    class UTextBlock* SilverGoalNumber;
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
    FITM_CommunityGoal_CHoverStarted HoverStarted;
    void HoverStarted(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
    FITM_CommunityGoal_CHoverEnded HoverEnded;
    void HoverEnded();
    class UITM_CommunityGoalRewardToolTip_C* ToolTip;
    class UITM_FactionToolTip_C* FactionToolTip;

    void DoFactionToolTip(bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_CreateToolTip_OutToolTip, class UITM_FactionToolTip_C* K2Node_DynamicCast_AsITM_Faction_Tool_Tip, bool K2Node_DynamicCast_bSuccess);
    void DoToolTip(class UWidget* ToolTipTarget, int32 Tier, class UUserWidget* CallFunc_CreateToolTip_OutToolTip, bool CallFunc_IsValid_ReturnValue, class UITM_CommunityGoalRewardToolTip_C* K2Node_DynamicCast_AsITM_Community_Goal_Reward_Tool_Tip, bool K2Node_DynamicCast_bSuccess);
    void UpdateTitle(bool CallFunc_TextIsEmpty_ReturnValue);
    void UpdateIcon(FSlateBrush K2Node_MakeStruct_SlateBrush, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void SetFaction(class UCommunityGoalFaction* Faction, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_CreateToolTip_OutToolTip, class UITM_FactionToolTip_C* K2Node_DynamicCast_AsITM_Faction_Tool_Tip, bool K2Node_DynamicCast_bSuccess, FSlateBrush K2Node_MakeStruct_SlateBrush);
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
    void ExecuteUbergraph_ITM_CommunityGoal(int32 EntryPoint, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue_1, FLinearColor K2Node_MakeStruct_LinearColor, FText K2Node_CustomEvent_Goal, float K2Node_CustomEvent_Bronze_Progress, float K2Node_CustomEvent_Silver_Progress, float K2Node_CustomEvent_Gold_Progress, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class UCommunityGoalFaction* Temp_object_Variable, class UCommunityGoalFaction* Temp_object_Variable_1, float CallFunc_FMin_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue_3, float CallFunc_Ease_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue_1, float CallFunc_FMin_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Ease_ReturnValue_2, float CallFunc_FMax_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue_3, FLinearColor K2Node_MakeStruct_LinearColor_1, float CallFunc_FMax_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FMin_ReturnValue_6, FLinearColor K2Node_MakeStruct_LinearColor_2, bool K2Node_Event_IsDesignTime, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, class UCommunityGoalFaction* Temp_object_Variable_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_IntFloat_ReturnValue_1, FMargin K2Node_MakeStruct_Margin, float CallFunc_Multiply_IntFloat_ReturnValue_2, FString K2Node_CustomEvent_GoalID, float K2Node_CustomEvent_GoalValue, int32 K2Node_CustomEvent_Members, bool K2Node_CustomEvent_ForceRefresh, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_IntInt_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UCommunityGoalFaction* Temp_object_Variable_3, class UCommunityGoal* CallFunc_FindGoal_ReturnValue, EFSDFaction Temp_byte_Variable, bool CallFunc_NotEqual_StrStr_ReturnValue, class UCommunityGoalFaction* Temp_object_Variable_4, class UCommunityGoalFaction* Temp_object_Variable_5, bool CallFunc_IsValid_ReturnValue, float CallFunc_TierProgress_ReturnValue, float CallFunc_TierProgress_ReturnValue_1, class UCommunityGoalFaction* Temp_object_Variable_6, float CallFunc_TierProgress_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_3, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, EFSDFaction CallFunc_GetFaction_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue_1, class UCommunityGoalFaction* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_3, int32 CallFunc_FCeil_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_4, FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_FCeil_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue_1, class UCommunityGoalFaction* Temp_object_Variable_7, float CallFunc_Multiply_IntFloat_ReturnValue_5, int32 CallFunc_FCeil_ReturnValue_2, FText CallFunc_Conv_IntToText_ReturnValue_2, EFSDFaction Temp_byte_Variable_1, class UCommunityGoalFaction* K2Node_Select_Default_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void HoverEnded__DelegateSignature();
    void HoverStarted__DelegateSignature(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
};

#endif
