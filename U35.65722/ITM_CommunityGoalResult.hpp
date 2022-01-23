#ifndef UE4SS_SDK_ITM_CommunityGoalResult_HPP
#define UE4SS_SDK_ITM_CommunityGoalResult_HPP

class UITM_CommunityGoalResult_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* BronzeImage;
    class USizeBox* CurrentSizebox;
    class UTextBlock* CurrentTextBlock;
    class UButton* FactionIconToolTip;
    class UTextBlock* GoalText;
    class UOverlay* GoldImage;
    class UImage* Icon;
    class UImage* ImageB;
    class UImage* ImageG;
    class UImage* ImageNT;
    class UImage* Images;
    class UOverlay* NoTierImage;
    class UOverlay* SilverImage;
    class UTextBlock* TierTextBlock;
    class UTextBlock* TitleTextBlock;
    class UTextBlock* TotalPointsTextBlock;
    class UTextBlock* TotalScoreTextBlock;
    class UUI_GradientMasked_Image_C* UI_GradientMasked_Image;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UUI_ImageTinted_C* UI_ImageTinted_267;
    FText Title;
    int32 TitleSize;
    FSlateBrush IconImage;
    class UCommunityGoalFaction* Faction;
    FVector2D TierIconSize;
    class UITM_FactionToolTip_C* FactionToolTip;

    void DoFactionToolTip(bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_CreateToolTip_OutToolTip, class UITM_FactionToolTip_C* K2Node_DynamicCast_AsITM_Faction_Tool_Tip, bool K2Node_DynamicCast_bSuccess);
    void UpdateTitle(bool CallFunc_TextIsEmpty_ReturnValue);
    void UpdateIcon(bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void SetFaction(class UCommunityGoalFaction* Faction, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_CreateToolTip_OutToolTip, class UITM_FactionToolTip_C* K2Node_DynamicCast_AsITM_Faction_Tool_Tip, bool K2Node_DynamicCast_bSuccess, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void PreConstruct(bool IsDesignTime);
    void SetResult(int32 Score, int32 Tier, const FText& GoalName);
    void CheckFaction();
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_CommunityGoalResult(int32 EntryPoint, class UCommunityGoalFaction* Temp_object_Variable, class UCommunityGoalFaction* Temp_object_Variable_1, class UCommunityGoalFaction* Temp_object_Variable_2, int32 Temp_int_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, bool K2Node_Event_IsDesignTime, class UCommunityGoalFaction* Temp_object_Variable_3, int32 CallFunc_Subtract_IntInt_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_IntFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin, bool CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_Score, int32 K2Node_CustomEvent_Tier, const FText K2Node_CustomEvent_GoalName, bool CallFunc_Less_IntInt_ReturnValue, FText K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, EFSDFaction Temp_byte_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UOverlay* K2Node_Select_Default_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, EFSDFaction CallFunc_GetFaction_ReturnValue, class UCommunityGoalFaction* K2Node_Select_Default_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

#endif
