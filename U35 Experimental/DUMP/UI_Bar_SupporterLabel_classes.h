// WidgetBlueprintGeneratedClass UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_Bar_SupporterLabel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* SupporterBox; // 0x238(0x08)
	UTextBlock* SupporterHeader; // 0x240(0x08)
	UImage* SupportIconLeft; // 0x248(0x08)
	int32_t Font Size; // 0x250(0x04)
	float Icon Size; // 0x254(0x04)

	void SetDrinkable(UDrinkableDataAsset* Drinkable, bool IsSupporterEdition, UDrinkableDataAsset* OutDrinkable);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Bar_SupporterLabel(int32_t EntryPoint);
};

