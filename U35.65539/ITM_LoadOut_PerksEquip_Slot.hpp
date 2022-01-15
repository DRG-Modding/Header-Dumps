#ifndef UE4SS_SDK_ITM_LoadOut_PerksEquip_Slot_HPP
#define UE4SS_SDK_ITM_LoadOut_PerksEquip_Slot_HPP

class UITM_LoadOut_PerksEquip_Slot_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetSwitcher* ContentSwitcher;
    UUI_ImageTinted_C* LockedIcon;
    UBorder* SelectionBorder;
    UButton* SlotButton;
    UUI_PerkBackground_C* UI_PerkBackground;
    UUI_PerkIcon_C* UI_PerkIcon;
    EPerkUsageType SlotType;
    UPerkAsset* PerkAsset;
    bool IsLocked;
    bool Hovered;
    bool IsSelected;
    UTexture2D* OverrideLockIcon;
    FITM_LoadOut_PerksEquip_Slot_COnClicked OnClicked;
    void OnClicked(UITM_LoadOut_PerksEquip_Slot_C* SlotWidget);
    FText LockedToolTip;
    UUI_Perk_ToolTip_C* PerkToolTip;

    UWidget* GetPerkToolTip(UBasic_ToolTip_C* BasicToolTip, bool CallFunc_IsValid_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, UBasic_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetCurrentRank_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated_1, UUI_Perk_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue_1);
    void GetIsSelected(bool& IsSelected);
    void UpdateSelectionBorder(bool Temp_bool_Variable, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable, float Temp_float_Variable_1, UTexture2D* K2Node_Select_Default, uint8 K2Node_Select_Default_1, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Select_Default_2, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
    void SetSelected(bool inSelected, bool CallFunc_IsValid_ReturnValue);
    void SetHovered(bool Hovered);
    void GetIsLocked(bool& IsLocked);
    void GetSlotType(EPerkUsageType& SlotType);
    void GetPerkAsset(UPerkAsset*& PerkAsset, bool Temp_bool_Variable, UPerkAsset* Temp_object_Variable, UPerkAsset* K2Node_Select_Default);
    void SetPerkAsset(UPerkAsset* PerkAsset);
    void SetLocked(bool IsLocked);
    void SetLockedIcon(UTexture2D* InTexture, bool Temp_bool_Variable, UTexture2D* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, UTexture2D* K2Node_Select_Default);
    void UpdateIconAndBackground(EPerkUsageType ActualSlotType, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, EPerkUsageType CallFunc_GetUsageType_ReturnValue, EPerkTierState Temp_byte_Variable, EPerkTierState Temp_byte_Variable_1, bool Temp_bool_Variable_1, EPerkTierState Temp_byte_Variable_2, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, int32 CallFunc_GetCurrentRank_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, EPerkTierState K2Node_Select_Default, EPerkTierState K2Node_Select_Default_1, UWidget* K2Node_Select_Default_2);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue_1);
    void OnClicked__DelegateSignature(UITM_LoadOut_PerksEquip_Slot_C* SlotWidget);
}

#endif
