// WidgetBlueprintGeneratedClass ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C
// Size: 0x2d8 (Inherited: 0x230)
struct UITM_UpgGear_TierRow_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* BackBar; // 0x238(0x08)
	UTextBlock* DATA_Level; // 0x240(0x08)
	UBorder* IconColorer; // 0x248(0x08)
	UHorizontalBox* IconsHolder; // 0x250(0x08)
	UImage* LevelIcon; // 0x258(0x08)
	UBorder* LevelLock_BG; // 0x260(0x08)
	UOverlay* LevelLock_Holder; // 0x268(0x08)
	UITM_UpgGear_UpgIconSingle_C* TierIcon; // 0x270(0x08)
	FUpgradeTier Tier; // 0x278(0x18)
	int32_t Index; // 0x290(0x04)
	APlayerCharacter* CharacterClass; // 0x298(0x08)
	AActor* itemClass; // 0x2a0(0x08)
	bool IsRowLocked; // 0x2a8(0x01)
	TArray<UITM_UpgGear_UpgIconSingle_C*> UpgradeWidgets; // 0x2b0(0x10)
	UITM_UpgGear_SideBar_C* UpgradesMenu; // 0x2c0(0x08)
	UITM_UpgGear_UpgIconSingle_C* PurchaseUpgradeWidget; // 0x2c8(0x08)
	UDialogDataAsset* ShoutUpgradePurchased; // 0x2d0(0x08)

	void UpdateBackBar();
	void SetPurchasedShout(UDialogDataAsset* InShout);
	bool GetIsRowLocked();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Initialize Upgrade Widget(UITM_UpgGear_UpgIconSingle_C* Widget);
	void Refresh();
	void EquipUpgrade(UITM_UpgGear_UpgIconSingle_C* UpgradeWidget);
	void PurchaseUpgrade(UITM_UpgGear_UpgIconSingle_C* UpgradeWidget);
	void OnPurchaseConfirmation(bool Yes);
	void Refresh Tier Icon();
	void Unequip Upgrade(UITM_UpgGear_UpgIconSingle_C* Upgrade);
	void OnUpgradeHovered(UITM_UpgGear_UpgIconSingle_C* Widget);
	void OnUpgradeUnhovered(UITM_UpgGear_UpgIconSingle_C* Widget);
	void OnUpgrade Clicked(UITM_UpgGear_UpgIconSingle_C* Widget);
	void ExecuteUbergraph_ITM_UpgGear_TierRow(int32_t EntryPoint);
};

