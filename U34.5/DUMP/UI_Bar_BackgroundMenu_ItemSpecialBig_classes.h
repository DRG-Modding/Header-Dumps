// WidgetBlueprintGeneratedClass UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C
// Size: 0x280 (Inherited: 0x230)
struct UUI_Bar_BackgroundMenu_ItemSpecialBig_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* DrinkIconIdle; // 0x238(0x08)
	UImage* DrinkIcon; // 0x240(0x08)
	UTextBlock* DrinkNameLabel; // 0x248(0x08)
	UImage* Image_224; // 0x250(0x08)
	UImage* Image_226; // 0x258(0x08)
	UScaleBox* Name; // 0x260(0x08)
	UTextBlock* TextBlock_1; // 0x268(0x08)
	UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost; // 0x270(0x08)
	UDrinkableDataAsset* Drinkable; // 0x278(0x08)

	void Set Drinkable shown price();
	void SetDrinkable(UDrinkableDataAsset* InDrinkable);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig(int32_t EntryPoint);
};

