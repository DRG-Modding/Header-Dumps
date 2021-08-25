// WidgetBlueprintGeneratedClass ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C
// Size: 0x2d8 (Inherited: 0x230)
struct UITM_UpgGear_TierRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* BackBar; // 0x238(0x08)
	struct UTextBlock* DATA_Level; // 0x240(0x08)
	struct UBorder* IconColorer; // 0x248(0x08)
	struct UHorizontalBox* IconsHolder; // 0x250(0x08)
	struct UImage* LevelIcon; // 0x258(0x08)
	struct UBorder* LevelLock_BG; // 0x260(0x08)
	struct UOverlay* LevelLock_Holder; // 0x268(0x08)
	struct UITM_UpgGear_UpgIconSingle_C* TierIcon; // 0x270(0x08)
	struct FUpgradeTier Tier; // 0x278(0x18)
	int32_t Index; // 0x290(0x04)
	char UnknownData_294[0x4]; // 0x294(0x04)
	struct APlayerCharacter* CharacterClass; // 0x298(0x08)
	struct AActor* itemClass; // 0x2a0(0x08)
	bool IsRowLocked; // 0x2a8(0x01)
	char UnknownData_2A9[0x7]; // 0x2a9(0x07)
	struct TArray<struct UITM_UpgGear_UpgIconSingle_C*> UpgradeWidgets; // 0x2b0(0x10)
	struct UITM_UpgGear_SideBar_C* UpgradesMenu; // 0x2c0(0x08)
	struct UITM_UpgGear_UpgIconSingle_C* PurchaseUpgradeWidget; // 0x2c8(0x08)
	struct UDialogDataAsset* ShoutUpgradePurchased; // 0x2d0(0x08)

	void UpdateBackBar(); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.UpdateBackBar
	void SetPurchasedShout(struct UDialogDataAsset* InShout); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.SetPurchasedShout
	bool GetIsRowLocked(); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.GetIsRowLocked
	void PreConstruct(bool IsDesignTime); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PreConstruct
	void Construct(); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Construct
	void Initialize Upgrade Widget(struct UITM_UpgGear_UpgIconSingle_C* Widget); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Initialize Upgrade Widget
	void Refresh(); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh
	void EquipUpgrade(struct UITM_UpgGear_UpgIconSingle_C* UpgradeWidget); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.EquipUpgrade
	void PurchaseUpgrade(struct UITM_UpgGear_UpgIconSingle_C* UpgradeWidget); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PurchaseUpgrade
	void OnPurchaseConfirmation(bool Yes); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnPurchaseConfirmation
	void Refresh Tier Icon(); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh Tier Icon
	void Unequip Upgrade(struct UITM_UpgGear_UpgIconSingle_C* Upgrade); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Unequip Upgrade
	void OnUpgradeHovered(struct UITM_UpgGear_UpgIconSingle_C* Widget); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeHovered
	void OnUpgradeUnhovered(struct UITM_UpgGear_UpgIconSingle_C* Widget); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeUnhovered
	void OnUpgrade Clicked(struct UITM_UpgGear_UpgIconSingle_C* Widget); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgrade Clicked
	void ExecuteUbergraph_ITM_UpgGear_TierRow(int32_t EntryPoint); // Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.ExecuteUbergraph_ITM_UpgGear_TierRow
};

