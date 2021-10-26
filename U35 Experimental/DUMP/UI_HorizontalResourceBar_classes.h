// WidgetBlueprintGeneratedClass UI_HorizontalResourceBar.UI_HorizontalResourceBar_C
// Size: 0x368 (Inherited: 0x230)
struct UUI_HorizontalResourceBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* NoResourcesLabel; // 0x238(0x08)
	UHorizontalBox* ResourcesBox; // 0x240(0x08)
	bool IconsOnRight; // 0x248(0x01)
	int32_t IconSize; // 0x24c(0x04)
	bool ShowRequiredAmount; // 0x250(0x01)
	FText No Resources Text; // 0x258(0x18)
	FSlateFontInfo NoResourcesFont; // 0x270(0x50)
	enum class ENUM_MenuColors NoResourcesColor; // 0x2c0(0x01)
	TMap<UResourceData*, UITM_UpgGear_ResourceCounter_C*> ResourceWidgets; // 0x2c8(0x50)
	TMap<UResourceData*, int32_t> PreviewDict; // 0x318(0x50)

	void SetFromDict(TMap<UResourceData*, int32_t> InResources);
	void SetCraftingCost(TArray<FCraftingCost> Cost, bool OutCanAfford);
	void AddResource(UResourceData* InResource, float InAmount, float InRequiredAmount);
	void Clear();
	void AddResourceCustom(UResourceData* InResource, float InAmount, float InRequiredAmount, bool IconOnRight, bool ShowRequiredAmount);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_HorizontalResourceBar(int32_t EntryPoint);
};

