// WidgetBlueprintGeneratedClass UI_Bar_DrinkCost.UI_Bar_DrinkCost_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_Bar_DrinkCost_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* HorizontalBox_14; // 0x238(0x08)
	struct UTextBlock* TXT_Free; // 0x240(0x08)
	struct UDrinkableDataAsset* Drinkable; // 0x248(0x08)
	bool ShowUnlockCost; // 0x250(0x01)
	char UnknownData_251[0x3]; // 0x251(0x03)
	float Height; // 0x254(0x04)

	void SetCostWidgets(struct TMap<struct UResourceData*, int32_t> TargetMap); // Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.SetCostWidgets
	void ShowCost(struct UDrinkableDataAsset* Drinkable, bool ShowUnlockPrice); // Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ShowCost
	void Construct(); // Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.Construct
	void OnFreeBeerRewardChanged(bool IsBeersFree); // Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.OnFreeBeerRewardChanged
	void ShowFixedCost(struct TMap<struct UResourceData*, int32_t> Cost); // Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ShowFixedCost
	void ExecuteUbergraph_UI_Bar_DrinkCost(int32_t EntryPoint); // Function UI_Bar_DrinkCost.UI_Bar_DrinkCost_C.ExecuteUbergraph_UI_Bar_DrinkCost
};

