#ifndef UE4SS_SDK_TOOLTIP_UpgradeIcon_HPP
#define UE4SS_SDK_TOOLTIP_UpgradeIcon_HPP

class UTOOLTIP_UpgradeIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* ActionBorder;
    UUI_AdvancedLabel_C* ActionLabel;
    UTextBlock* CategoryDescHeader;
    UTextBlock* CategoryDescription;
    UBorder* CategoryDescriptionBorder;
    UUI_HorizontalResourceBar_C* CostBar;
    UTextBlock* PreviewCategory;
    UTextBlock* PreviewDescription;
    UITM_BaseUpgradeIcon_C* PreviewIcon;
    UTextBlock* PreviewName;
    UUI_AdvancedLabel_C* ToggleDetailLabel;

    void UpdateDetailVisibility(bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, FText K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, FText CallFunc_GetText_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void Update(UItemUpgradeCategory* Category, FText InUpgradeName, FText InUpgradeDescription, EItemUpgradeStatus InStatus, TArray<FCraftingCost>& InCost, bool InCanUnequip, bool ShowUpgradeStatus, bool CallFunc_IsValid_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue_2, FLinearColor CallFunc_SelectMenuColor_OutputColor, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_SetCraftingCost_OutCanAfford);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnShowUpgradeExtraDetailsChanged(bool NewValue);
    void ExecuteUbergraph_TOOLTIP_UpgradeIcon(int32 EntryPoint, BoolConfigChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool K2Node_CustomEvent_NewValue);
}

#endif
