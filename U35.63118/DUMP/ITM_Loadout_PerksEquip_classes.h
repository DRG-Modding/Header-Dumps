// WidgetBlueprintGeneratedClass ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C
// Size: 0x268 (Inherited: 0x230)
struct UITM_Loadout_PerksEquip_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UVerticalBox* ActiveSlotsBox; // 0x238(0x08)
	UITM_Loadout_PerksEquip_Selection_C* ITM_Loadout_PerksEquip_Selection; // 0x240(0x08)
	UVerticalBox* PassiveSlotsBox; // 0x248(0x08)
	UImage* PerkStar; // 0x250(0x08)
	UPlayerCharacterID* CharacterClass; // 0x258(0x08)
	UITM_LoadOut_PerksEquip_Slot_C* SelectedSlot; // 0x260(0x08)

	void GetEquippedPerksByType(UPlayerCharacterID* InCharacterClass, enum class EPerkUsageType InType, TArray<UPerkAsset*> OutPerks);
	void SelectSlot(UITM_LoadOut_PerksEquip_Slot_C* InSlot);
	void CreateSlots(UVerticalBox* InSlotsBox, UPlayerCharacterID* InCharacter, enum class EPerkUsageType InType);
	void UpdateSlots();
	UWidget* Get_PerkStar_ToolTipWidget_1();
	void GetEquippedPerkAt(int32_t Index, TArray<UPerkAsset*> TargetArray, UPerkAsset* Perk);
	void UpdateEquippedPerks();
	void Set Character Class(UPlayerCharacterID* characterID);
	void BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature(UPerkAsset* PerkAsset);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_Loadout_PerksEquip(int32_t EntryPoint);
};

