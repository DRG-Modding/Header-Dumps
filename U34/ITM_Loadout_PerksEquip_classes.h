// WidgetBlueprintGeneratedClass ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C
// Size: 0x268 (Inherited: 0x230)
struct UITM_Loadout_PerksEquip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UVerticalBox* ActiveSlotsBox; // 0x238(0x08)
	struct UITM_Loadout_PerksEquip_Selection_C* ITM_Loadout_PerksEquip_Selection; // 0x240(0x08)
	struct UVerticalBox* PassiveSlotsBox; // 0x248(0x08)
	struct UImage* PerkStar; // 0x250(0x08)
	struct UPlayerCharacterID* CharacterClass; // 0x258(0x08)
	struct UITM_LoadOut_PerksEquip_Slot_C* SelectedSlot; // 0x260(0x08)

	void GetEquippedPerksByType(struct UPlayerCharacterID* InCharacterClass, enum class EPerkUsageType InType, struct TArray<struct UPerkAsset*> OutPerks); // Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerksByType
	void SelectSlot(struct UITM_LoadOut_PerksEquip_Slot_C* InSlot); // Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.SelectSlot
	void CreateSlots(struct UVerticalBox* InSlotsBox, struct UPlayerCharacterID* InCharacter, enum class EPerkUsageType InType); // Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.CreateSlots
	void UpdateSlots(); // Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateSlots
	struct UWidget* Get_PerkStar_ToolTipWidget_1(); // Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Get_PerkStar_ToolTipWidget_1
	void GetEquippedPerkAt(int32_t Index, struct TArray<struct UPerkAsset*> TargetArray, struct UPerkAsset* Perk); // Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerkAt
	void UpdateEquippedPerks(); // Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateEquippedPerks
	void Set Character Class(struct UPlayerCharacterID* characterID); // Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Set Character Class
	void BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature(struct UPerkAsset* PerkAsset); // Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature
	void Construct(); // Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Construct
	void PreConstruct(bool IsDesignTime); // Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.PreConstruct
	void ExecuteUbergraph_ITM_Loadout_PerksEquip(int32_t EntryPoint); // Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.ExecuteUbergraph_ITM_Loadout_PerksEquip
};

