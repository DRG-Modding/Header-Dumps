#ifndef UE4SS_SDK_ITM_CommunityGoalInformation_HPP
#define UE4SS_SDK_ITM_CommunityGoalInformation_HPP

class UITM_CommunityGoalInformation_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    UUI_ImageTinted_C* Border;
    UButton* FactionIconToolTip;
    UTextBlock* GoalText;
    UImage* Icon;
    UVerticalBox* InfoBox;
    UTextBlock* TextBlock_0;
    UTextBlock* TitleText;
    UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar;
    UUI_ImageTinted_C* UI_ImageTinted_267;
    FText Title;
    FSlateBrush IconImage;
    UCommunityGoal* CurrentGoal;
    UCommunityGoalFaction* Faction;
    bool IsShowingCurrentPlayerFaction;
    UITM_FactionToolTip_C* FactionToolTip;

    void DoFactionToolTip(bool CallFunc_IsValid_ReturnValue, UUserWidget* CallFunc_CreateToolTip_OutToolTip, UITM_FactionToolTip_C* K2Node_DynamicCast_AsITM_Faction_Tool_Tip, bool K2Node_DynamicCast_bSuccess);
    void SetResourceBox(int32 Tier, TMap<UResourceData*, int32> ResourceMap, TMap<UResourceData*, int32> CallFunc_GetResourcesReward_ReturnValue);
    void UpdateIcon(FSlateBrush K2Node_MakeStruct_SlateBrush, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void SetFaction(UCommunityGoalFaction* Faction, bool CallFunc_IsValid_ReturnValue, UUserWidget* CallFunc_CreateToolTip_OutToolTip, UITM_FactionToolTip_C* K2Node_DynamicCast_AsITM_Faction_Tool_Tip, bool K2Node_DynamicCast_bSuccess, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void ResetAnim();
    void PreConstruct(bool IsDesignTime);
    void SetGoal(UCommunityGoal* Goal);
    void CheckFaction();
    void SetFactionAndGoal(UCommunityGoalFaction* Faction, UCommunityGoal* Goal);
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_CommunityGoalInformation(int32 EntryPoint, UCommunityGoalFaction* Temp_object_Variable, UCommunityGoalFaction* Temp_object_Variable_1, EFSDFaction Temp_byte_Variable, UCommunityGoalFaction* Temp_object_Variable_2, UCommunityGoalFaction* Temp_object_Variable_3, UCommunityGoalFaction* Temp_object_Variable_4, UCommunityGoalFaction* Temp_object_Variable_5, UCommunityGoalFaction* Temp_object_Variable_6, UCommunityGoalFaction* Temp_object_Variable_7, bool K2Node_Event_IsDesignTime, UCommunityGoal* K2Node_CustomEvent_Goal_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, EFSDFaction CallFunc_GetFaction_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, EFSDFaction CallFunc_GetFaction_ReturnValue_1, UCommunityGoalFaction* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UCommunityGoalFaction* K2Node_CustomEvent_Faction, UCommunityGoal* K2Node_CustomEvent_Goal, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, EFSDFaction Temp_byte_Variable_1, UCommunityGoalFaction* K2Node_Select_Default_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1);
}

#endif
