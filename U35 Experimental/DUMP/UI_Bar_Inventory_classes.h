// WidgetBlueprintGeneratedClass UI_Bar_Inventory.UI_Bar_Inventory_C
// Size: 0x250 (Inherited: 0x230)
struct UUI_Bar_Inventory_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* InventoryBox; // 0x238(0x08)
	TArray<UResourceData*> Resources; // 0x240(0x10)

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Bar_Inventory(int32_t EntryPoint);
};

