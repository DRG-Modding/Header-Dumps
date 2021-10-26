// WidgetBlueprintGeneratedClass UI_Bar_DrinkCost.UI_Bar_DrinkCost_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_Bar_DrinkCost_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* HorizontalBox_14; // 0x238(0x08)
	UTextBlock* TXT_Free; // 0x240(0x08)
	UDrinkableDataAsset* Drinkable; // 0x248(0x08)
	bool ShowUnlockCost; // 0x250(0x01)
	float Height; // 0x254(0x04)

	void SetCostWidgets(TMap<UResourceData*, int32_t> TargetMap);
	void ShowCost(UDrinkableDataAsset* Drinkable, bool ShowUnlockPrice);
	void Construct();
	void OnFreeBeerRewardChanged(bool IsBeersFree);
	void ShowFixedCost(TMap<UResourceData*, int32_t> Cost);
	void ExecuteUbergraph_UI_Bar_DrinkCost(int32_t EntryPoint);
};

