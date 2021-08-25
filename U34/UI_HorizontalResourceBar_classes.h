// WidgetBlueprintGeneratedClass UI_HorizontalResourceBar.UI_HorizontalResourceBar_C
// Size: 0x368 (Inherited: 0x230)
struct UUI_HorizontalResourceBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* NoResourcesLabel; // 0x238(0x08)
	struct UHorizontalBox* ResourcesBox; // 0x240(0x08)
	bool IconsOnRight; // 0x248(0x01)
	char UnknownData_249[0x3]; // 0x249(0x03)
	int32_t IconSize; // 0x24c(0x04)
	bool ShowRequiredAmount; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)
	struct FText No Resources Text; // 0x258(0x18)
	struct FSlateFontInfo NoResourcesFont; // 0x270(0x50)
	char NoResourcesColor; // 0x2c0(0x01)
	char UnknownData_2C1[0x7]; // 0x2c1(0x07)
	struct TMap<struct UResourceData*, struct UITM_UpgGear_ResourceCounter_C*> ResourceWidgets; // 0x2c8(0x50)
	struct TMap<struct UResourceData*, int32_t> PreviewDict; // 0x318(0x50)

	void SetFromDict(struct TMap<struct UResourceData*, int32_t> InResources); // Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.SetFromDict
	void SetCraftingCost(struct TArray<struct FCraftingCost> Cost, bool OutCanAfford); // Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.SetCraftingCost
	void AddResource(struct UResourceData* InResource, float InAmount, float InRequiredAmount); // Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResource
	void Clear(); // Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.Clear
	void AddResourceCustom(struct UResourceData* InResource, float InAmount, float InRequiredAmount, bool IconOnRight, bool ShowRequiredAmount); // Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResourceCustom
	void PreConstruct(bool IsDesignTime); // Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.PreConstruct
	void ExecuteUbergraph_UI_HorizontalResourceBar(int32_t EntryPoint); // Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.ExecuteUbergraph_UI_HorizontalResourceBar
};

