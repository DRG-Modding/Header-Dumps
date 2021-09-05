// WidgetBlueprintGeneratedClass UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C
// Size: 0x2a0 (Inherited: 0x278)
struct UUI_Bar_BackgroundMenu_Item_C : UBarMenuWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	UImage* ImgIcon; // 0x280(0x08)
	UTextBlock* LabelName; // 0x288(0x08)
	UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost; // 0x290(0x08)
	UDrinkableDataAsset* Drinkable; // 0x298(0x08)

	void Set Drinkable shown price();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Bar_BackgroundMenu_Item(int32_t EntryPoint);
};

