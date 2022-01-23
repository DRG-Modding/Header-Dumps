#ifndef UE4SS_SDK_ITM_StatusScreen_PerkItem_HPP
#define UE4SS_SDK_ITM_StatusScreen_PerkItem_HPP

class UITM_StatusScreen_PerkItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* ItemButton;
    class UBorder* SelectionBorder;
    class UUI_PerkBackground_C* UI_PerkBackground;
    class UUI_PerkIcon_C* UI_PerkIcon;
    bool ItemHovered;
    bool ItemSelected;
    class UPerkAsset* PerkAsset;
    FITM_StatusScreen_PerkItem_COnClicked OnClicked;
    void OnClicked(class UITM_StatusScreen_PerkItem_C* Item);
    class USoundBase* ClickAudio;

    class UWidget* Get_ItemButton_ToolTipWidget(class UUI_Perk_ToolTip_C* ToolTip, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UUI_Perk_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, int32 CallFunc_GetCurrentRank_ReturnValue);
    void GetPerkAsset(class UPerkAsset*& PerkAsset);
    void Set Perk(class UPerkAsset* PerkAsset);
    void Set Selected(bool IsSelected);
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void Refresh();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_StatusScreen_PerkItem(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, class UPerkAsset* K2Node_CustomEvent_PerkAsset, bool K2Node_CustomEvent_IsSelected, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, int32 CallFunc_GetCurrentRank_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1);
    void OnClicked__DelegateSignature(class UITM_StatusScreen_PerkItem_C* Item);
};

#endif
