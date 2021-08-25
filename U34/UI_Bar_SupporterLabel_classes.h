// WidgetBlueprintGeneratedClass UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_Bar_SupporterLabel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* SupporterBox; // 0x238(0x08)
	struct UTextBlock* SupporterHeader; // 0x240(0x08)
	struct UImage* SupportIconLeft; // 0x248(0x08)
	int32_t Font Size; // 0x250(0x04)
	float Icon Size; // 0x254(0x04)

	void SetDrinkable(struct UDrinkableDataAsset* Drinkable, bool IsSupporterEdition, struct UDrinkableDataAsset* OutDrinkable); // Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.SetDrinkable
	void PreConstruct(bool IsDesignTime); // Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.PreConstruct
	void ExecuteUbergraph_UI_Bar_SupporterLabel(int32_t EntryPoint); // Function UI_Bar_SupporterLabel.UI_Bar_SupporterLabel_C.ExecuteUbergraph_UI_Bar_SupporterLabel
};

