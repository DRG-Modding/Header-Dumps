// WidgetBlueprintGeneratedClass TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C
// Size: 0x290 (Inherited: 0x230)
struct UTOOLTIP_UpgradeIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* ActionBorder; // 0x238(0x08)
	struct UUI_AdvancedLabel_C* ActionLabel; // 0x240(0x08)
	struct UTextBlock* CategoryDescHeader; // 0x248(0x08)
	struct UTextBlock* CategoryDescription; // 0x250(0x08)
	struct UBorder* CategoryDescriptionBorder; // 0x258(0x08)
	struct UUI_HorizontalResourceBar_C* CostBar; // 0x260(0x08)
	struct UTextBlock* PreviewCategory; // 0x268(0x08)
	struct UTextBlock* PreviewDescription; // 0x270(0x08)
	struct UITM_BaseUpgradeIcon_C* PreviewIcon; // 0x278(0x08)
	struct UTextBlock* PreviewName; // 0x280(0x08)
	struct UUI_AdvancedLabel_C* ToggleDetailLabel; // 0x288(0x08)

	void UpdateDetailVisibility(); // Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.UpdateDetailVisibility
	void Update(struct UItemUpgradeCategory* Category, struct FText InUpgradeName, struct FText InUpgradeDescription, enum class EItemUpgradeStatus InStatus, struct TArray<struct FCraftingCost> InCost, bool InCanUnequip, bool ShowUpgradeStatus); // Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Update
	void PreConstruct(bool IsDesignTime); // Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.PreConstruct
	void Construct(); // Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Construct
	void OnShowUpgradeExtraDetailsChanged(bool NewValue); // Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.OnShowUpgradeExtraDetailsChanged
	void ExecuteUbergraph_TOOLTIP_UpgradeIcon(int32_t EntryPoint); // Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.ExecuteUbergraph_TOOLTIP_UpgradeIcon
};

