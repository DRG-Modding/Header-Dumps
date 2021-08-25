// WidgetBlueprintGeneratedClass UI_Perks_Column_Items.UI_Perks_Column_Items_C
// Size: 0x281 (Inherited: 0x230)
struct UUI_Perks_Column_Items_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UUniformGridPanel* PerksGrid; // 0x238(0x08)
	struct UBorder* TierBorder; // 0x240(0x08)
	struct UUI_Perks_Column_Unlocks_C* UI_Perks_Column_Unlocks; // 0x248(0x08)
	int32_t Tier; // 0x250(0x04)
	char UnknownData_254[0x4]; // 0x254(0x04)
	struct TArray<struct UUI_Perks_Item_C*> PerkWidgets; // 0x258(0x10)
	int32_t PerkRows; // 0x268(0x04)
	char UnknownData_26C[0x4]; // 0x26c(0x04)
	struct FMulticastInlineDelegate OnPerkClicked; // 0x270(0x10)
	bool TierUnLocked; // 0x280(0x01)

	bool IsInteractable(); // Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.IsInteractable
	void RefreshTier(); // Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.RefreshTier
	void AddPerk(struct UPerkAsset* Perk, struct UPerkAsset* OutPerk, struct UUI_Perks_Item_C* OutWidget); // Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.AddPerk
	void PreConstruct(bool IsDesignTime); // Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.PreConstruct
	void Construct(); // Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.Construct
	void OnPerkClicked_Event(struct UUI_Perks_Item_C* Widget); // Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked_Event
	void OnPerkClaimed_Event(struct UPerkAsset* Perk, int32_t ClaimedTier); // Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClaimed_Event
	void SetPerks(struct TArray<struct UPerkAsset*> Array); // Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.SetPerks
	void ExecuteUbergraph_UI_Perks_Column_Items(int32_t EntryPoint); // Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.ExecuteUbergraph_UI_Perks_Column_Items
	void OnPerkClicked__DelegateSignature(struct UUI_Perks_Item_C* PerkWidget); // Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked__DelegateSignature
};

