// WidgetBlueprintGeneratedClass UI_Perks_Column_Items.UI_Perks_Column_Items_C
// Size: 0x281 (Inherited: 0x230)
struct UUI_Perks_Column_Items_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UUniformGridPanel* PerksGrid; // 0x238(0x08)
	UBorder* TierBorder; // 0x240(0x08)
	UUI_Perks_Column_Unlocks_C* UI_Perks_Column_Unlocks; // 0x248(0x08)
	int32_t Tier; // 0x250(0x04)
	TArray<UUI_Perks_Item_C*> PerkWidgets; // 0x258(0x10)
	int32_t PerkRows; // 0x268(0x04)
	FMulticastInlineDelegate OnPerkClicked; // 0x270(0x10)
	bool TierUnLocked; // 0x280(0x01)

	bool IsInteractable();
	void RefreshTier();
	void AddPerk(UPerkAsset* Perk, UPerkAsset* OutPerk, UUI_Perks_Item_C* OutWidget);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnPerkClicked_Event(UUI_Perks_Item_C* Widget);
	void OnPerkClaimed_Event(UPerkAsset* Perk, int32_t ClaimedTier);
	void SetPerks(TArray<UPerkAsset*> Array);
	void ExecuteUbergraph_UI_Perks_Column_Items(int32_t EntryPoint);
	void OnPerkClicked__DelegateSignature(UUI_Perks_Item_C* PerkWidget);
};

