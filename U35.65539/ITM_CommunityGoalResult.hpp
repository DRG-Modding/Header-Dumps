#ifndef UE4SS_SDK_ITM_CommunityGoalResult_HPP
#define UE4SS_SDK_ITM_CommunityGoalResult_HPP

class UITM_CommunityGoalResult_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UOverlay* BronzeImage;
    USizeBox* CurrentSizebox;
    UTextBlock* CurrentTextBlock;
    UButton* FactionIconToolTip;
    UTextBlock* GoalText;
    UOverlay* GoldImage;
    UImage* Icon;
    UImage* ImageB;
    UImage* ImageG;
    UImage* ImageNT;
    UImage* Images;
    UOverlay* NoTierImage;
    UOverlay* SilverImage;
    UTextBlock* TierTextBlock;
    UTextBlock* TitleTextBlock;
    UTextBlock* TotalPointsTextBlock;
    UTextBlock* TotalScoreTextBlock;
    UUI_GradientMasked_Image_C* UI_GradientMasked_Image;
    UUI_ImageTinted_C* UI_ImageTinted;
    UUI_ImageTinted_C* UI_ImageTinted_267;
    FText Title;
    int32 TitleSize;
    FSlateBrush IconImage;
    UCommunityGoalFaction* Faction;
    FVector2D TierIconSize;
    UITM_FactionToolTip_C* FactionToolTip;

    void DoFactionToolTip(bool CallFunc_IsValid_ReturnValue, UUserWidget* CallFunc_CreateToolTip_OutToolTip, UITM_FactionToolTip_C* K2Node_DynamicCast_AsITM_Faction_Tool_Tip, bool K2Node_DynamicCast_bSuccess);
    void UpdateTitle(bool CallFunc_TextIsEmpty_ReturnValue);
    void UpdateIcon(bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void SetFaction(UCommunityGoalFaction* Faction, bool CallFunc_IsValid_ReturnValue, UUserWidget* CallFunc_CreateToolTip_OutToolTip, UITM_FactionToolTip_C* K2Node_DynamicCast_AsITM_Faction_Tool_Tip, bool K2Node_DynamicCast_bSuccess, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void PreConstruct(bool IsDesignTime);
    void SetResult(int32 Score, int32 Tier, const FText& GoalName);
    void CheckFaction();
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_CommunityGoalResult(int32 EntryPoint, UCommunityGoalFaction* Temp_object_Variable, UCommunityGoalFaction* Temp_object_Variable_1, UCommunityGoalFaction* Temp_object_Variable_2, int32 Temp_int_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, bool K2Node_Event_IsDesignTime, UCommunityGoalFaction* Temp_object_Variable_3, int32 CallFunc_Subtract_IntInt_ReturnValue, UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_IntFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin, bool CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_Score, int32 K2Node_CustomEvent_Tier, const FText K2Node_CustomEvent_GoalName, bool CallFunc_Less_IntInt_ReturnValue, FText K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, EFSDFaction Temp_byte_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, UOverlay* K2Node_Select_Default_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, EFSDFaction CallFunc_GetFaction_ReturnValue, UCommunityGoalFaction* K2Node_Select_Default_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
}

#endif
