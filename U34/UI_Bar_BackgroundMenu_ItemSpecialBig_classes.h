// WidgetBlueprintGeneratedClass UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C
// Size: 0x280 (Inherited: 0x230)
struct UUI_Bar_BackgroundMenu_ItemSpecialBig_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* DrinkIconIdle; // 0x238(0x08)
	struct UImage* DrinkIcon; // 0x240(0x08)
	struct UTextBlock* DrinkNameLabel; // 0x248(0x08)
	struct UImage* Image_224; // 0x250(0x08)
	struct UImage* Image_226; // 0x258(0x08)
	struct UScaleBox* Name; // 0x260(0x08)
	struct UTextBlock* TextBlock_1; // 0x268(0x08)
	struct UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost; // 0x270(0x08)
	struct UDrinkableDataAsset* Drinkable; // 0x278(0x08)

	void Set Drinkable shown price(); // Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.Set Drinkable shown price
	void SetDrinkable(struct UDrinkableDataAsset* InDrinkable); // Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.SetDrinkable
	void Construct(); // Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.Construct
	void PreConstruct(bool IsDesignTime); // Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.PreConstruct
	void ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig(int32_t EntryPoint); // Function UI_Bar_BackgroundMenu_ItemSpecialBig.UI_Bar_BackgroundMenu_ItemSpecialBig_C.ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig
};

