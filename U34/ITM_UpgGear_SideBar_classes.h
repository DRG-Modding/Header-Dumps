// WidgetBlueprintGeneratedClass ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C
// Size: 0x2c8 (Inherited: 0x230)
struct UITM_UpgGear_SideBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UVerticalBox* BuyBox; // 0x238(0x08)
	struct UITM_Overclocks_Equip_C* ITM_Loadout_Overclocks_Equip; // 0x240(0x08)
	struct UITM_MasteryBar_C* ITM_MasteryBar_1; // 0x248(0x08)
	struct UBasic_FlatButton_C* PurchaseButton; // 0x250(0x08)
	struct UTextBlock* PurchaseDescription; // 0x258(0x08)
	struct UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar; // 0x260(0x08)
	struct UVerticalBox* UnlockBox; // 0x268(0x08)
	struct UVerticalBox* UpgradeBox; // 0x270(0x08)
	struct UWidgetSwitcher* UpgradeBuySwitcher; // 0x278(0x08)
	struct UVerticalBox* UpgradeGearRows; // 0x280(0x08)
	struct APlayerCharacter* CharacterClass; // 0x288(0x08)
	struct AActor* itemClass; // 0x290(0x08)
	struct UUpgradableGearComponent* Upgradable; // 0x298(0x08)
	struct UBasic_Popup_YesNoPrompt_C* YesNoPrompt; // 0x2a0(0x08)
	enum class EItemCategory Category; // 0x2a8(0x01)
	char UnknownData_2A9[0x7]; // 0x2a9(0x07)
	struct FMulticastInlineDelegate OnItemPurchased; // 0x2b0(0x10)
	struct UDialogDataAsset* ShoutUpgradePurchased; // 0x2c0(0x08)

	void SetUpgradePurchasedShout(struct UDialogDataAsset* ShoutUpgradePurchased); // Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetUpgradePurchasedShout
	void SetItem(struct APlayerCharacter* InCharacterClass, struct AActor* InItemClass, enum class EItemCategory InCategory); // Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetItem
	void SetYesNoPrompt(struct UBasic_Popup_YesNoPrompt_C* Prompt); // Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetYesNoPrompt
	void BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UBasic_FlatButton_C* Button); // Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BuyConfirmation(bool Yes); // Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BuyConfirmation
	void UpgradePurchased(struct UITM_UpgGear_TierRow_C* Row); // Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.UpgradePurchased
	void PreConstruct(bool IsDesignTime); // Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.PreConstruct
	void ExecuteUbergraph_ITM_UpgGear_SideBar(int32_t EntryPoint); // Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.ExecuteUbergraph_ITM_UpgGear_SideBar
	void OnItemPurchased__DelegateSignature(); // Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.OnItemPurchased__DelegateSignature
};

