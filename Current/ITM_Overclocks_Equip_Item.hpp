#ifndef UE4SS_SDK_ITM_Overclocks_Equip_Item_HPP
#define UE4SS_SDK_ITM_Overclocks_Equip_Item_HPP

class UITM_Overclocks_Equip_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimHover;
    class UButton* ClickButton;
    class UImage* HoveringImg;
    class USizeBox* ItemSizer;
    class UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    class UITM_ItemUnlockedIcon_C* Notification_NewOverclock;
    class UImage* SelectionImg;
    int32 IconSize;
    FITM_Overclocks_Equip_Item_COnHovered OnHovered;
    void OnHovered(class UITM_Overclocks_Equip_Item_C* Item);
    FITM_Overclocks_Equip_Item_COnUnhovered OnUnhovered;
    void OnUnhovered(class UITM_Overclocks_Equip_Item_C* Item);
    FITM_Overclocks_Equip_Item_COnClicked OnClicked;
    void OnClicked(class UITM_Overclocks_Equip_Item_C* Item);
    class UItemUpgrade* Overclock;
    EItemUpgradeStatus State;

    class UWidget* GetToolTipWidget();
    void SetState(EItemUpgradeStatus InState);
    void GetOverClock(class UItemUpgrade*& Overclock);
    void SetOverclock(class UItemUpgrade* InOverclock);
    void SetIconSize(int32 NewSize);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_Overclocks_Equip_Item(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UITM_Overclocks_Equip_Item_C* Item);
    void OnUnhovered__DelegateSignature(class UITM_Overclocks_Equip_Item_C* Item);
    void OnHovered__DelegateSignature(class UITM_Overclocks_Equip_Item_C* Item);
};

#endif
