#ifndef UE4SS_SDK_ITM_BaseUpgradeIcon_HPP
#define UE4SS_SDK_ITM_BaseUpgradeIcon_HPP

class UITM_BaseUpgradeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Unlock;
    class UWidgetAnimation* AnimHover;
    class UImage* BG;
    class UImage* Icon;
    class UImage* Icon_Lock;
    class UWidgetSwitcher* IconSwitch;
    class UHorizontalBox* LockBar;
    class UTextBlock* LockRequirementText;
    class UImage* outline;
    class UOverlay* Overlay_2;
    class UImage* SelectionOutline;
    class USizeBox* SizeBox_0;
    class UButton* WidgetButton;
    class UTexture2D* PreviewIcon;
    EItemUpgradeStatus PreviewStatus;
    int32 PreviewLockRequirement;
    bool PreviewShowEquippedAsBorder;
    bool PreviewShowLockIcon;
    bool PreviewShowLockRequirement;
    FITM_BaseUpgradeIcon_COnHoverBegin OnHoverBegin;
    void OnHoverBegin(class UITM_BaseUpgradeIcon_C* Widget);
    FITM_BaseUpgradeIcon_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(class UITM_BaseUpgradeIcon_C* Widget);
    FITM_BaseUpgradeIcon_COnClicked OnClicked;
    void OnClicked(class UITM_BaseUpgradeIcon_C* Widget);
    bool Hovered;
    bool PreviewTierLocked;

    bool IsInteractable();
    void Update(class UTexture2D* InIcon, EItemUpgradeStatus InStatus, int32 InLockRequirement, class UTexture2D* LockTexture, TEnumAsByte<ENUM_MenuColors::Type> LockTint, bool InShowEquippedAsBorder, bool InShowLockIcon, bool InShowLockRequirement, bool InTierLocked);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_BaseUpgradeIcon(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
    void OnHoverEnd__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
    void OnHoverBegin__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget);
};

#endif
