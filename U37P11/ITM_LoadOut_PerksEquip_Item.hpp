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

    class UWidget* CreateToolTip();
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
    void ExecuteUbergraph_ITM_LoadOut_PerksEquip_Item(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UITM_LoadOut_PerksEquip_Item_C* Item);
};

#endif
