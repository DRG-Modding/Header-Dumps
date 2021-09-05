// WidgetBlueprintGeneratedClass ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C
// Size: 0x378 (Inherited: 0x230)
struct UITM_UpgGear_GearStat_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* DATA_StatAmount; // 0x238(0x08)
	UTextBlock* DATA_StatName; // 0x240(0x08)
	UTextBlock* DATA_StatUpgrade; // 0x248(0x08)
	UImage* Image_Background; // 0x250(0x08)
	FText StatName; // 0x258(0x18)
	FText StatValue; // 0x270(0x18)
	FText StatBaseValue; // 0x288(0x18)
	FText StatUpgradeValue; // 0x2a0(0x18)
	enum class EItemPreviewStatus ItemPreviewStatus; // 0x2b8(0x01)
	FSlateFontInfo SpecialFont; // 0x2c0(0x50)
	FGearStatEntry GearStat; // 0x310(0x68)

	void SetGearStat(FGearStatEntry InStat);
	void SetData(FText InStatName, FText InStatValue, FText InStatBaseValue, FText InStatUpgradeValue, enum class EItemPreviewStatus InItemPreviewStatus);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_UpgGear_GearStat(int32_t EntryPoint);
};

