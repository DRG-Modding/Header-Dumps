#ifndef UE4SS_SDK_ITM_CommunityGoalInformation_HPP
#define UE4SS_SDK_ITM_CommunityGoalInformation_HPP

class UITM_CommunityGoalInformation_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    class UUI_ImageTinted_C* Border;
    class UButton* FactionIconToolTip;
    class UTextBlock* GoalText;
    class UImage* Icon;
    class UVerticalBox* InfoBox;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TitleText;
    class UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar;
    class UUI_ImageTinted_C* UI_ImageTinted_267;
    FText Title;
    FSlateBrush IconImage;
    class UCommunityGoal* CurrentGoal;
    class UCommunityGoalFaction* Faction;
    bool IsShowingCurrentPlayerFaction;
    class UITM_FactionToolTip_C* FactionToolTip;

    void DoFactionToolTip(bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_CreateToolTip_OutToolTip, class UITM_FactionToolTip_C* K2Node_DynamicCast_AsITM_Faction_Tool_Tip, bool K2Node_DynamicCast_bSuccess);
    void SetResourceBox(int32 Tier, TMap<UResourceData*, int32> ResourceMap, TMap<UResourceData*, int32> CallFunc_GetResourcesReward_ReturnValue);
    void UpdateIcon(FSlateBrush K2Node_MakeStruct_SlateBrush, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void SetFaction(class UCommunityGoalFaction* Faction, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_CreateToolTip_OutToolTip, class UITM_FactionToolTip_C* K2Node_DynamicCast_AsITM_Faction_Tool_Tip, bool K2Node_DynamicCast_bSuccess, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void ResetAnim();
    void PreConstruct(bool IsDesignTime);
    void SetGoal(class UCommunityGoal* Goal);
    void CheckFaction();
    void SetFactionAndGoal(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal);
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_CommunityGoalInformation(int32 EntryPoint, class UCommunityGoalFaction* Temp_object_Variable, class UCommunityGoalFaction* Temp_object_Variable_1, EFSDFaction Temp_byte_Variable, class UCommunityGoalFaction* Temp_object_Variable_2, class UCommunityGoalFaction* Temp_object_Variable_3, class UCommunityGoalFaction* Temp_object_Variable_4, class UCommunityGoalFaction* Temp_object_Variable_5, class UCommunityGoalFaction* Temp_object_Variable_6, class UCommunityGoalFaction* Temp_object_Variable_7, bool K2Node_Event_IsDesignTime, class UCommunityGoal* K2Node_CustomEvent_Goal_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, EFSDFaction CallFunc_GetFaction_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, EFSDFaction CallFunc_GetFaction_ReturnValue_1, class UCommunityGoalFaction* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UCommunityGoalFaction* K2Node_CustomEvent_Faction, class UCommunityGoal* K2Node_CustomEvent_Goal, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, EFSDFaction Temp_byte_Variable_1, class UCommunityGoalFaction* K2Node_Select_Default_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1);
};

#endif
