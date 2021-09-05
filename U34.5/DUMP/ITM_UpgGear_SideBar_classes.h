// WidgetBlueprintGeneratedClass ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C
// Size: 0x2c8 (Inherited: 0x230)
struct UITM_UpgGear_SideBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UVerticalBox* BuyBox; // 0x238(0x08)
	UITM_Overclocks_Equip_C* ITM_Loadout_Overclocks_Equip; // 0x240(0x08)
	UITM_MasteryBar_C* ITM_MasteryBar_1; // 0x248(0x08)
	UBasic_FlatButton_C* PurchaseButton; // 0x250(0x08)
	UTextBlock* PurchaseDescription; // 0x258(0x08)
	UUI_HorizontalResourceBar_C* UI_HorizontalResourceBar; // 0x260(0x08)
	UVerticalBox* UnlockBox; // 0x268(0x08)
	UVerticalBox* UpgradeBox; // 0x270(0x08)
	UWidgetSwitcher* UpgradeBuySwitcher; // 0x278(0x08)
	UVerticalBox* UpgradeGearRows; // 0x280(0x08)
	APlayerCharacter* CharacterClass; // 0x288(0x08)
	AActor* itemClass; // 0x290(0x08)
	UUpgradableGearComponent* Upgradable; // 0x298(0x08)
	UBasic_Popup_YesNoPrompt_C* YesNoPrompt; // 0x2a0(0x08)
	enum class EItemCategory Category; // 0x2a8(0x01)
	FMulticastInlineDelegate OnItemPurchased; // 0x2b0(0x10)
	UDialogDataAsset* ShoutUpgradePurchased; // 0x2c0(0x08)

	void SetUpgradePurchasedShout(UDialogDataAsset* ShoutUpgradePurchased);
	void SetItem(APlayerCharacter* InCharacterClass, AActor* InItemClass, enum class EItemCategory InCategory);
	void SetYesNoPrompt(UBasic_Popup_YesNoPrompt_C* Prompt);
	void BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UBasic_FlatButton_C* Button);
	void BuyConfirmation(bool Yes);
	void UpgradePurchased(UITM_UpgGear_TierRow_C* Row);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_UpgGear_SideBar(int32_t EntryPoint);
	void OnItemPurchased__DelegateSignature();
};

