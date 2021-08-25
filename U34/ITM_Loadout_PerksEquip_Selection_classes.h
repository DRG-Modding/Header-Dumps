// WidgetBlueprintGeneratedClass ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C
// Size: 0x268 (Inherited: 0x230)
struct UITM_Loadout_PerksEquip_Selection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UWrapBox* ItemsBox; // 0x240(0x08)
	struct UTextBlock* SelectionTitle; // 0x248(0x08)
	struct FMulticastInlineDelegate OnPerkClicked; // 0x250(0x10)
	struct UPlayerCharacterID* CharacterClass; // 0x260(0x08)

	void PreConstruct(bool IsDesignTime); // Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.PreConstruct
	void Refresh(struct UPlayerCharacterID* characterID, enum class EPerkUsageType PerkType); // Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Refresh
	void Add Perk(struct UPerkAsset* Perk); // Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Add Perk
	void OnClicked_Event(struct UITM_LoadOut_PerksEquip_Item_C* Item); // Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnClicked_Event
	void Add None(); // Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Add None
	void OnNoneClicked_Event(); // Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnNoneClicked_Event
	void ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection(int32_t EntryPoint); // Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection
	void OnPerkClicked__DelegateSignature(struct UPerkAsset* PerkAsset); // Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnPerkClicked__DelegateSignature
};

