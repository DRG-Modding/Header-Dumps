#ifndef UE4SS_SDK_ITM_StatusScreen_PerkItem_HPP
#define UE4SS_SDK_ITM_StatusScreen_PerkItem_HPP

class UITM_StatusScreen_PerkItem_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* ItemButton;
    UBorder* SelectionBorder;
    UUI_PerkBackground_C* UI_PerkBackground;
    UUI_PerkIcon_C* UI_PerkIcon;
    bool ItemHovered;
    bool ItemSelected;
    UPerkAsset* PerkAsset;
    FITM_StatusScreen_PerkItem_COnClicked OnClicked;
    void OnClicked(UITM_StatusScreen_PerkItem_C* Item);
    USoundBase* ClickAudio;

    UWidget* Get_ItemButton_ToolTipWidget(UUI_Perk_ToolTip_C* ToolTip, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, UUI_Perk_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, int32 CallFunc_GetCurrentRank_ReturnValue);
    void GetPerkAsset(UPerkAsset*& PerkAsset);
    void Set Perk(UPerkAsset* PerkAsset);
    void Set Selected(bool IsSelected);
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void Refresh();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_StatusScreen_PerkItem(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, UPerkAsset* K2Node_CustomEvent_PerkAsset, bool K2Node_CustomEvent_IsSelected, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, int32 CallFunc_GetCurrentRank_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1);
    void OnClicked__DelegateSignature(UITM_StatusScreen_PerkItem_C* Item);
}

#endif
