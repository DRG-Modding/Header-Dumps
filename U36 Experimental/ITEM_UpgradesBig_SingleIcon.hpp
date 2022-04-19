#ifndef UE4SS_SDK_ITEM_UpgradesBig_SingleIcon_HPP
#define UE4SS_SDK_ITEM_UpgradesBig_SingleIcon_HPP

class UITEM_UpgradesBig_SingleIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Unhover;
    class UWidgetAnimation* Hover;
    class UImage* BG;
    class UButton* Button_0;
    class UOverlay* GFXholder;
    class UImage* Icon_Lock;
    class UImage* IconLeft;
    class UImage* IconRight;
    class UImage* outline;
    FITEM_UpgradesBig_SingleIcon_COnClicked OnClicked;
    void OnClicked(class UItemUpgrade* Upgrade);
    class UItemUpgrade* Upgrade;
    FITEM_UpgradesBig_SingleIcon_COnHoverStart OnHoverStart;
    void OnHoverStart(class UItemUpgrade* Upgrade);
    FITEM_UpgradesBig_SingleIcon_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(class UItemUpgrade* Upgrade);

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Show(class UItemUpgrade* Upgrade, TSubclassOf<class AActor> Item);
    void ExecuteUbergraph_ITEM_UpgradesBig_SingleIcon(int32 EntryPoint);
    void OnHoverEnd__DelegateSignature(class UItemUpgrade* Upgrade);
    void OnHoverStart__DelegateSignature(class UItemUpgrade* Upgrade);
    void OnClicked__DelegateSignature(class UItemUpgrade* Upgrade);
};

#endif
