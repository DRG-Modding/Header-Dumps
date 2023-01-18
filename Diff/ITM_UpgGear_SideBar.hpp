#ifndef UE4SS_SDK_ITM_UpgGear_SideBar_HPP
#define UE4SS_SDK_ITM_UpgGear_SideBar_HPP

class UITM_UpgGear_SideBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* BuyBox;
    class UITM_Overclocks_Equip_C* ITM_Loadout_Overclocks_Equip;
    class UITM_MasteryBar_C* ITM_MasteryBar_0;
    class UBasic_FlatButton_C* PurchaseButton;
    class UTextBlock* PurchaseDescription;
    class UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar;
    class UVerticalBox* UnlockBox;
    class UVerticalBox* UpgradeBox;
    class UWidgetSwitcher* UpgradeBuySwitcher;
    class UVerticalBox* UpgradeGearRows;
    TSubclassOf<class APlayerCharacter> CharacterClass;
    TSubclassOf<class AActor> itemClass;
    class UUpgradableGearComponent* Upgradable;
    class UBasic_Popup_YesNoPrompt_C* YesNoPrompt;
    EItemCategory Category;
    FITM_UpgGear_SideBar_COnItemPurchased OnItemPurchased;
    void OnItemPurchased();
    class UDialogDataAsset* ShoutUpgradePurchased;

    void SetUpgradePurchasedShout(class UDialogDataAsset* ShoutUpgradePurchased);
    void SetItem(TSubclassOf<class APlayerCharacter>& InCharacterClass, TSubclassOf<class AActor>& InItemClass, EItemCategory& InCategory);
    void SetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C* Prompt);
    void BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button);
    void BuyConfirmation(bool Yes);
    void UpgradePurchased(class UITM_UpgGear_TierRow_C* Row);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_UpgGear_SideBar(int32 EntryPoint);
    void OnItemPurchased__DelegateSignature();
};

#endif
