// WidgetBlueprintGeneratedClass ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C
// Size: 0x270 (Inherited: 0x230)
struct UITM_Loadout_UpgradeBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle; // 0x238(0x08)
	struct UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_1; // 0x240(0x08)
	struct UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_2; // 0x248(0x08)
	struct UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_3; // 0x250(0x08)
	struct UITM_UpgGear_UpgIconSingle_C* ITM_UpgGear_UpgIconSingle_4; // 0x258(0x08)
	struct TArray<struct UITM_UpgGear_UpgIconSingle_C*> UpgradeWidgets; // 0x260(0x10)

	void ShowItemUpgrades(struct UPlayerCharacterID* InCharacterID, struct AActor* InItemClass, struct AFSDPlayerState* InPlayerState, bool EnableHoverTooltip); // Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ShowItemUpgrades
	void GetUpgradeFromList(int32_t Index, struct TArray<struct UItemUpgrade*> Upgrades, struct UItemUpgrade* Output); // Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.GetUpgradeFromList
	void Construct(); // Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.Construct
	void PreConstruct(bool IsDesignTime); // Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.PreConstruct
	void ExecuteUbergraph_ITM_Loadout_UpgradeBar(int32_t EntryPoint); // Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ExecuteUbergraph_ITM_Loadout_UpgradeBar
};

