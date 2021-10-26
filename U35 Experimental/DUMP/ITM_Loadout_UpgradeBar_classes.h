// WidgetBlueprintGeneratedClass ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C
// Size: 0x270 (Inherited: 0x230)
struct UITM_Loadout_UpgradeBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle; // 0x238(0x08)
	UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_1; // 0x240(0x08)
	UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_2; // 0x248(0x08)
	UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_3; // 0x250(0x08)
	UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_4; // 0x258(0x08)
	TArray<UITM_UpgGear_UpgIconSingle_C*> UpgradeWidgets; // 0x260(0x10)

	void ShowItemUpgrades(UPlayerCharacterID* InCharacterID, AActor* InItemClass, AFSDPlayerState* InPlayerState, bool EnableHoverTooltip);
	void GetUpgradeFromList(int32_t Index, TArray<UItemUpgrade*> upgrades, UItemUpgrade* Output);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_Loadout_UpgradeBar(int32_t EntryPoint);
};

