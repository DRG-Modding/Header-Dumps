// WidgetBlueprintGeneratedClass ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C
// Size: 0x2a8 (Inherited: 0x230)
struct UITM_UpgGear_SideBar_GrenadeSelect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UVerticalBox* ItemBox; // 0x238(0x08)
	struct UWidgetSwitcher* UpgradeBuySwitcher; // 0x240(0x08)
	struct APlayerCharacter* CharacterClass; // 0x248(0x08)
	struct AActor* itemClass; // 0x250(0x08)
	struct UUpgradableGearComponent* Upgradable; // 0x258(0x08)
	struct UBasic_Popup_YesNoPrompt_C* YesNoPrompt; // 0x260(0x08)
	enum class EItemCategory Category; // 0x268(0x01)
	char UnknownData_269[0x7]; // 0x269(0x07)
	struct TArray<struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C*> Grenades; // 0x270(0x10)
	struct FMulticastInlineDelegate OnItemSelected; // 0x280(0x10)
	struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* PurchaseWidget; // 0x290(0x08)
	struct UPlayerCharacterID* PlayerId; // 0x298(0x08)
	struct AActor* ActiveClass; // 0x2a0(0x08)

	void SetActiveGrenade(struct AActor* NewClass, bool InEquip, bool IsUnlocked, struct AActor* itemClass); // Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetActiveGrenade
	void SetItem(struct UPlayerCharacterID* characterID); // Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetItem
	void OnWidgetCreated(struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget); // Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnWidgetCreated
	void SetYesNoPrompt(struct UBasic_Popup_YesNoPrompt_C* YesNoPrompt); // Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.SetYesNoPrompt
	void RefreshItems(); // Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.RefreshItems
	void Reset Grenade Preview(); // Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.Reset Grenade Preview
	void ItemEquipped_Event(struct AActor* itemClass); // Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.ItemEquipped_Event
	void OnYesNo(bool Yes); // Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnYesNo
	void OnItemTryPurchase(struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* GrenadeWidget); // Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemTryPurchase
	void OnItemUnhovered(struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget); // Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemUnhovered
	void OnItemHovered(struct UITM_UpgGear_SideBar_GrenadeSelect_GrenadeIcon_C* Widget, bool IsUnlocked); // Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemHovered
	void ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect(int32_t EntryPoint); // Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.ExecuteUbergraph_ITM_UpgGear_SideBar_GrenadeSelect
	void OnItemSelected__DelegateSignature(struct AActor* itemClass, bool Equip, bool IsUnlocked); // Function ITM_UpgGear_SideBar_GrenadeSelect.ITM_UpgGear_SideBar_GrenadeSelect_C.OnItemSelected__DelegateSignature
};

