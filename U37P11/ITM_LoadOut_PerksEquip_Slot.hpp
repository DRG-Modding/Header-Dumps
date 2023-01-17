#ifndef UE4SS_SDK_ITM_LoadOut_PerksEquip_Slot_HPP
#define UE4SS_SDK_ITM_LoadOut_PerksEquip_Slot_HPP

class UITM_LoadOut_PerksEquip_Slot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetSwitcher* ContentSwitcher;
    class UUI_ImageTinted_C* LockedIcon;
    class UBorder* SelectionBorder;
    class UButton* SlotButton;
    class UUI_PerkBackground_C* UI_PerkBackground;
    class UUI_PerkIcon_C* UI_PerkIcon;
    EPerkUsageType SlotType;
    class UPerkAsset* PerkAsset;
    bool IsLocked;
    bool Hovered;
    bool IsSelected;
    class UTexture2D* OverrideLockIcon;
    FITM_LoadOut_PerksEquip_Slot_COnClicked OnClicked;
    void OnClicked(class UITM_LoadOut_PerksEquip_Slot_C* SlotWidget);
    FText LockedToolTip;
    class UUI_Perk_ToolTip_C* PerkToolTip;

    class UWidget* GetPerkToolTip();
    void GetIsSelected(bool& IsSelected);
    void UpdateSelectionBorder();
    void SetSelected(bool InSelected);
    void SetHovered(bool Hovered);
    void GetIsLocked(bool& IsLocked);
    void GetSlotType(EPerkUsageType& SlotType);
    void GetPerkAsset(class UPerkAsset*& PerkAsset);
    void SetPerkAsset(class UPerkAsset* PerkAsset);
    void SetLocked(bool IsLocked);
    void SetLockedIcon(class UTexture2D* InTexture);
    void UpdateIconAndBackground();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UITM_LoadOut_PerksEquip_Slot_C* SlotWidget);
};

#endif
