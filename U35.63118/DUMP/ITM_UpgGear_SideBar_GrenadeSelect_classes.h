// WidgetBlueprintGeneratedClass ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C
// Size: 0x2b8 (Inherited: 0x230)
struct UITM_UpgGear_SideBar_GrenadeSelect_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UVerticalBox* ItemBox; // 0x238(0x08)
	UWidgetSwitcher* UpgradeBuySwitcher; // 0x240(0x08)
	APlayerCharacter* CharacterClass; // 0x248(0x08)
	AActor* itemClass; // 0x250(0x08)
	UUpgradableGearComponent* Upgradable; // 0x258(0x08)
	UBasic_Popup_YesNoPrompt_C* YesNoPrompt; // 0x260(0x08)
	enum class EItemCategory Category; // 0x268(0x01)
	TArray<UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C*> Grenades; // 0x270(0x10)
	FMulticastInlineDelegate OnItemSelected; // 0x280(0x10)
	UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* PurchaseWidget; // 0x290(0x08)
	UPlayerCharacterID* PlayerId; // 0x298(0x08)
	AActor* ActiveClass; // 0x2a0(0x08)
	FMulticastInlineDelegate OnGrenadePurchased; // 0x2a8(0x10)

	void SetActiveGrenade(AActor* NewClass, bool InEquip, bool IsUnlocked, AActor* itemClass);
	void SetItem(UPlayerCharacterID* characterID);
	void OnWidgetCreated(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget);
	void SetYesNoPrompt(UBasic_Popup_YesNoPrompt_C* YesNoPrompt);
	void RefreshItems();
	void Reset Grenade Preview();
	void ItemEquipped_Event(AActor* itemClass);
	void OnYesNo(bool Yes);
	void OnItemTryPurchase(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* GrenadeWidget);
	void OnItemUnhovered(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget);
	void OnItemHovered(UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget, bool IsUnlocked);
	void ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect(int32_t EntryPoint);
	void OnGrenadePurchased__DelegateSignature();
	void OnItemSelected__DelegateSignature(AActor* itemClass, bool Equip, bool IsUnlocked);
};

