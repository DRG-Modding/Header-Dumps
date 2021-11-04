// WidgetBlueprintGeneratedClass ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C
// Size: 0x268 (Inherited: 0x230)
struct UITM_Loadout_PerksEquip_Selection_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UWrapBox* ItemsBox; // 0x240(0x08)
	UTextBlock* SelectionTitle; // 0x248(0x08)
	FMulticastInlineDelegate OnPerkClicked; // 0x250(0x10)
	UPlayerCharacterID* CharacterClass; // 0x260(0x08)

	void PreConstruct(bool IsDesignTime);
	void Refresh(UPlayerCharacterID* characterID, enum class EPerkUsageType PerkType);
	void Add Perk(UPerkAsset* Perk);
	void OnClicked_Event(UITM_LoadOut_PerksEquip_Item_C* Item);
	void Add None();
	void OnNoneClicked_Event();
	void ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection(int32_t EntryPoint);
	void OnPerkClicked__DelegateSignature(UPerkAsset* PerkAsset);
};

