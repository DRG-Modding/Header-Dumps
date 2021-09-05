// WidgetBlueprintGeneratedClass ITM_PerkInfoBox.ITM_PerkInfoBox_C
// Size: 0x290 (Inherited: 0x230)
struct UITM_PerkInfoBox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Window_CutCorner_C* Basic_Window_CutCorner_166; // 0x238(0x08)
	UHorizontalBox* HorizontalBox_ActrivePerks; // 0x240(0x08)
	UHorizontalBox* HorizontalBox_PassivePerks; // 0x248(0x08)
	UImage* Image_467; // 0x250(0x08)
	UTextBlock* TextBlock_ItemName; // 0x258(0x08)
	UUpgradableGearComponent* Upgradable; // 0x260(0x08)
	enum class EItemCategory WeaponSlot; // 0x268(0x01)
	UPlayerCharacterID* Character; // 0x270(0x08)
	int32_t PerkIndex; // 0x278(0x04)
	TArray<UITM_StatusScreen_PerkItem_C*> PerkItems; // 0x280(0x10)

	void GetEquippedPerkAt(int32_t Idx, TArray<UPerkAsset*> perks, UPerkAsset* Perk);
	void CreateSlots(UPanelWidget* InSlotsBox, enum class EPerkUsageType InType);
	void GetEquippedPerksByType(UPlayerCharacterID* InCharacter, enum class EPerkUsageType InType, TArray<UPerkAsset*> perks);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Update();
	void ExecuteUbergraph_ITM_PerkInfoBox(int32_t EntryPoint);
};

