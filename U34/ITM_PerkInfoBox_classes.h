// WidgetBlueprintGeneratedClass ITM_PerkInfoBox.ITM_PerkInfoBox_C
// Size: 0x290 (Inherited: 0x230)
struct UITM_PerkInfoBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Window_CutCorner_C* Basic_Window_CutCorner_166; // 0x238(0x08)
	struct UHorizontalBox* HorizontalBox_ActrivePerks; // 0x240(0x08)
	struct UHorizontalBox* HorizontalBox_PassivePerks; // 0x248(0x08)
	struct UImage* Image_467; // 0x250(0x08)
	struct UTextBlock* TextBlock_ItemName; // 0x258(0x08)
	struct UUpgradableGearComponent* Upgradable; // 0x260(0x08)
	enum class EItemCategory WeaponSlot; // 0x268(0x01)
	char UnknownData_269[0x7]; // 0x269(0x07)
	struct UPlayerCharacterID* Character; // 0x270(0x08)
	int32_t PerkIndex; // 0x278(0x04)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	struct TArray<struct UITM_StatusScreen_PerkItem_C*> PerkItems; // 0x280(0x10)

	void GetEquippedPerkAt(int32_t Idx, struct TArray<struct UPerkAsset*> perks, struct UPerkAsset* Perk); // Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.GetEquippedPerkAt
	void CreateSlots(struct UPanelWidget* InSlotsBox, enum class EPerkUsageType InType); // Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.CreateSlots
	void GetEquippedPerksByType(struct UPlayerCharacterID* InCharacter, enum class EPerkUsageType InType, struct TArray<struct UPerkAsset*> perks); // Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.GetEquippedPerksByType
	void Construct(); // Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.Construct
	void PreConstruct(bool IsDesignTime); // Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.PreConstruct
	void Update(); // Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.Update
	void ExecuteUbergraph_ITM_PerkInfoBox(int32_t EntryPoint); // Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.ExecuteUbergraph_ITM_PerkInfoBox
};

