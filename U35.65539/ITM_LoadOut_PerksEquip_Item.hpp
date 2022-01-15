#ifndef UE4SS_SDK_ITM_LoadOut_PerksEquip_Item_HPP
#define UE4SS_SDK_ITM_LoadOut_PerksEquip_Item_HPP

class UITM_LoadOut_PerksEquip_Item_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* Background;
    UBorder* FrameBorder;
    UImage* IconLocked;
    UWidgetSwitcher* IconSwitcher;
    UButton* ItemButton;
    UBorder* SelectionBorder;
    UUI_PerkIcon_C* UI_PerkIcon;
    bool ItemHovered;
    bool ItemSelected;
    bool ItemLocked;
    UPerkAsset* PerkAsset;
    FITM_LoadOut_PerksEquip_Item_COnClicked OnClicked;
    void OnClicked(UITM_LoadOut_PerksEquip_Item_C* Item);
    bool ShowBorder;
    USoundBase* ClickAudio;
    bool IsRetirementIcon;
    UPlayerCharacterID* CharacterClass;

    UWidget* CreateToolTip(UUI_Perk_ToolTip_C* ToolTip, bool CallFunc_IsValid_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, UUI_Perk_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, FText CallFunc_Select_Character_Class_Text_OutText, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UBasic_ToolTip_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetCurrentRank_ReturnValue);
    void IsItemLocked(bool& ItemLocked);
    void GetPerkAsset(UPerkAsset*& PerkAsset);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Refresh();
    void Set Perk(UPerkAsset* PerkAsset);
    void Set Selected(bool IsSelected);
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_LoadOut_PerksEquip_Item(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UPerkAsset* K2Node_CustomEvent_PerkAsset, uint8 K2Node_Select_Default, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, bool K2Node_CustomEvent_IsSelected, UWidget* K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2, FLinearColor CallFunc_MenuColors_OutputColor_1, bool Temp_bool_Variable_4, ESlateVisibility K2Node_Select_Default_3, UTexture2D* K2Node_Select_Default_4, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetCurrentRank_ReturnValue, EPerkUsageType CallFunc_GetUsageType_ReturnValue, FLinearColor CallFunc_PerkColorFromType_OutColor, bool CallFunc_Not_PreBool_ReturnValue);
    void OnClicked__DelegateSignature(UITM_LoadOut_PerksEquip_Item_C* Item);
}

#endif
