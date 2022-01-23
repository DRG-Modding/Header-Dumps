#ifndef UE4SS_SDK_UI_Perks_Item_HPP
#define UE4SS_SDK_UI_Perks_Item_HPP

class UUI_Perks_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Ping;
    class UButton* ClickButton;
    class UBorder* SelectionBorder;
    class UUI_PerkBackground_C* UI_PerkBackground;
    class UUI_PerkIcon_C* UI_PerkIcon;
    class UPerkAsset* PerkAsset;
    int32 Tier;
    FUI_Perks_Item_COnHoverEnter OnHoverEnter;
    void OnHoverEnter(class UUI_Perks_Item_C* Widget);
    FUI_Perks_Item_COnHoverLeave OnHoverLeave;
    void OnHoverLeave(class UUI_Perks_Item_C* Widget);
    FUI_Perks_Item_COnClick OnClick;
    void OnClick(class UUI_Perks_Item_C* Widget);
    EPerkTierState PreviewState;
    bool PreviewHovered;
    bool PreviewSelected;
    bool ItemHovered;
    bool ItemSelected;
    bool ItemHighlighted;
    bool PreviewHighlighted;
    int32 Size;

    void SetIconSize(int32 InSize, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
    void Set Selected(bool inSelected);
    void ShowAs(class UPerkAsset* InPerkAsset, int32 InRank, EPerkTierState InState, bool InHovered, bool InPerkHighlighted, bool inSelected, EPerkUsageType UsageType, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, FLinearColor CallFunc_PerkColorByState_OutBackground, FLinearColor CallFunc_PerkColorByState_OutBorder, FLinearColor CallFunc_PerkColorByState_OutIcon, bool CallFunc_IsValid_ReturnValue, EPerkUsageType CallFunc_GetUsageType_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1);
    class UWidget* CreateToolTipWidget(class UUI_Perk_ToolTip_C* ToolTip, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UUI_Perk_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, int32 CallFunc_GetRankAtTier_Rank, bool CallFunc_GetRankAtTier_ReturnValue);
    void GetPerkAsset(class UPerkAsset*& PerkAsset, EPerkTierState& State, int32& Tier, EPerkTierState CallFunc_GetStateAtTier_ReturnValue);
    void Refresh();
    void OnPerkClaimed(class UPerkAsset* Perk, int32 ClaimedTier);
    void Set Hovered(bool Hovered);
    void Construct();
    void OnPerkHighlighted_Event(class UPerkAsset* Perk, bool IsHighlighted);
    void PreConstruct(bool IsDesignTime);
    void OnPerkPointsChanged(int32 PerkPoints, int32 Change);
    void OnPingFinished();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Perks_Item(int32 EntryPoint, FExecuteUbergraph_UI_Perks_ItemK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_UI_Perks_ItemK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_UI_Perks_ItemK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UPerkAsset* K2Node_CustomEvent_Perk_1, int32 K2Node_CustomEvent_ClaimedTier, EPerkTierState CallFunc_GetStateAtTier_ReturnValue, bool K2Node_CustomEvent_Hovered, class UPerkAsset* K2Node_CustomEvent_Perk, bool K2Node_CustomEvent_IsHighlighted, bool K2Node_Event_IsDesignTime, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 K2Node_CustomEvent_PerkPoints, int32 K2Node_CustomEvent_Change, FExecuteUbergraph_UI_Perks_ItemK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_GetRankAtTier_Rank, bool CallFunc_GetRankAtTier_ReturnValue, class UPerkDelegateItem* CallFunc_GetDelegates_ReturnValue, class UPerkDelegateItem* CallFunc_GetDelegates_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void OnClick__DelegateSignature(class UUI_Perks_Item_C* Widget);
    void OnHoverLeave__DelegateSignature(class UUI_Perks_Item_C* Widget);
    void OnHoverEnter__DelegateSignature(class UUI_Perks_Item_C* Widget);
};

#endif
