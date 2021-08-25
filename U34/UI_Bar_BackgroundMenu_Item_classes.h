// WidgetBlueprintGeneratedClass UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C
// Size: 0x2a0 (Inherited: 0x278)
struct UUI_Bar_BackgroundMenu_Item_C : UBarMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UImage* ImgIcon; // 0x280(0x08)
	struct UTextBlock* LabelName; // 0x288(0x08)
	struct UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost; // 0x290(0x08)
	struct UDrinkableDataAsset* Drinkable; // 0x298(0x08)

	void Set Drinkable shown price(); // Function UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C.Set Drinkable shown price
	void PreConstruct(bool IsDesignTime); // Function UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C.PreConstruct
	void ExecuteUbergraph_UI_Bar_BackgroundMenu_Item(int32_t EntryPoint); // Function UI_Bar_BackgroundMenu_Item.UI_Bar_BackgroundMenu_Item_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_Item
};

