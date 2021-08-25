// WidgetBlueprintGeneratedClass ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C
// Size: 0x378 (Inherited: 0x230)
struct UITM_UpgGear_GearStat_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* DATA_StatAmount; // 0x238(0x08)
	struct UTextBlock* DATA_StatName; // 0x240(0x08)
	struct UTextBlock* DATA_StatUpgrade; // 0x248(0x08)
	struct UImage* Image_Background; // 0x250(0x08)
	struct FText StatName; // 0x258(0x18)
	struct FText StatValue; // 0x270(0x18)
	struct FText StatBaseValue; // 0x288(0x18)
	struct FText StatUpgradeValue; // 0x2a0(0x18)
	enum class EItemPreviewStatus ItemPreviewStatus; // 0x2b8(0x01)
	char UnknownData_2B9[0x7]; // 0x2b9(0x07)
	struct FSlateFontInfo SpecialFont; // 0x2c0(0x50)
	struct FGearStatEntry GearStat; // 0x310(0x68)

	void SetGearStat(struct FGearStatEntry InStat); // Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetGearStat
	void SetData(struct FText InStatName, struct FText InStatValue, struct FText InStatBaseValue, struct FText InStatUpgradeValue, enum class EItemPreviewStatus InItemPreviewStatus); // Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetData
	void PreConstruct(bool IsDesignTime); // Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.PreConstruct
	void ExecuteUbergraph_ITM_UpgGear_GearStat(int32_t EntryPoint); // Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.ExecuteUbergraph_ITM_UpgGear_GearStat
};

