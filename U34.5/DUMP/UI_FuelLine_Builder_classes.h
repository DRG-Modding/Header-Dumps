// WidgetBlueprintGeneratedClass UI_FuelLine_Builder.UI_FuelLine_Builder_C
// Size: 0x250 (Inherited: 0x230)
struct UUI_FuelLine_Builder_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UUI_AdvancedLabel_C* CancelLabel; // 0x238(0x08)
	UProgressBar* DistanceProgress; // 0x240(0x08)
	UUI_AdvancedLabel_C* FireLabel; // 0x248(0x08)

	void SetProgress(float InPercent);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_FuelLine_Builder(int32_t EntryPoint);
};

