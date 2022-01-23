#ifndef UE4SS_SDK_ITM_LoadOut_PerksEquip_Item_HPP
#define UE4SS_SDK_ITM_LoadOut_PerksEquip_Item_HPP

class UITM_LoadOut_PerksEquip_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Background;
    class UBorder* FrameBorder;
    class UImage* IconLocked;
    class UWidgetSwitcher* IconSwitcher;
    class UButton* ItemButton;
    class UBorder* SelectionBorder;
    class UUI_PerkIcon_C* UI_PerkIcon;
    bool ItemHovered;
    bool ItemSelected;
    bool ItemLocked;
    class UPerkAsset* PerkAsset;
    FITM_LoadOut_PerksEquip_Item_COnClicked OnClicked;
    void OnClicked(class UITM_LoadOut_PerksEquip_Item_C* Item);
    bool ShowBorder;
    class USoundBase* ClickAudio;
    bool IsRetirementIcon;
    class UPlayerCharacterID* CharacterClass;

    class UWidget* CreateToolTip(class UUI_Perk_ToolTip_C* ToolTip, bool CallFunc_IsValid_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UUI_Perk_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, FText CallFunc_Select_Character_Class_Text_OutText, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBasic_ToolTip_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetCurrentRank_ReturnValue);
    void IsItemLocked(bool& ItemLocked);
    void GetPerkAsset(class UPerkAsset*& PerkAsset);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Refresh();
    void Set Perk(class UPerkAsset* PerkAsset);
    void Set Selected(bool IsSelected);
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_LoadOut_PerksEquip_Item(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_2, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_3, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class UPerkAsset* K2Node_CustomEvent_PerkAsset, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, bool K2Node_CustomEvent_IsSelected, class UWidget* K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2, FLinearColor CallFunc_MenuColors_OutputColor_1, bool Temp_bool_Variable_4, ESlateVisibility K2Node_Select_Default_3, class UTexture2D* K2Node_Select_Default_4, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetCurrentRank_ReturnValue, EPerkUsageType CallFunc_GetUsageType_ReturnValue, FLinearColor CallFunc_PerkColorFromType_OutColor, bool CallFunc_Not_PreBool_ReturnValue);
    void OnClicked__DelegateSignature(class UITM_LoadOut_PerksEquip_Item_C* Item);
};

#endif
