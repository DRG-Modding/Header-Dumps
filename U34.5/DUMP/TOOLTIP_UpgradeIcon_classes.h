// WidgetBlueprintGeneratedClass TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C
// Size: 0x290 (Inherited: 0x230)
struct UTOOLTIP_UpgradeIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* ActionBorder; // 0x238(0x08)
	UUI_AdvancedLabel_C* ActionLabel; // 0x240(0x08)
	UTextBlock* CategoryDescHeader; // 0x248(0x08)
	UTextBlock* CategoryDescription; // 0x250(0x08)
	UBorder* CategoryDescriptionBorder; // 0x258(0x08)
	UUI_HorizontalResourceBar_C* CostBar; // 0x260(0x08)
	UTextBlock* PreviewCategory; // 0x268(0x08)
	UTextBlock* PreviewDescription; // 0x270(0x08)
	UITM_BaseUpgradeIcon_C* PreviewIcon; // 0x278(0x08)
	UTextBlock* PreviewName; // 0x280(0x08)
	UUI_AdvancedLabel_C* ToggleDetailLabel; // 0x288(0x08)

	void UpdateDetailVisibility();
	void Update(UItemUpgradeCategory* Category, FText InUpgradeName, FText InUpgradeDescription, enum class EItemUpgradeStatus InStatus, TArray<FCraftingCost> InCost, bool InCanUnequip, bool ShowUpgradeStatus);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnShowUpgradeExtraDetailsChanged(bool NewValue);
	void ExecuteUbergraph_TOOLTIP_UpgradeIcon(int32_t EntryPoint);
};

