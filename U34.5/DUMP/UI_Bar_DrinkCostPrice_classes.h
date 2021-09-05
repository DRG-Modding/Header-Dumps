// WidgetBlueprintGeneratedClass UI_Bar_DrinkCostPrice.UI_Bar_DrinkCostPrice_C
// Size: 0x260 (Inherited: 0x230)
struct UUI_Bar_DrinkCostPrice_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x238(0x08)
	UTextBlock* DATAAmount; // 0x240(0x08)
	USizeBox* SizeBox_Height; // 0x248(0x08)
	UResourceData* Resource; // 0x250(0x08)
	float amount; // 0x258(0x04)
	float Height; // 0x25c(0x04)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UI_Bar_DrinkCostPrice(int32_t EntryPoint);
};

