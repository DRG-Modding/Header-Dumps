// WidgetBlueprintGeneratedClass UI_FuelLine_Builder.UI_FuelLine_Builder_C
// Size: 0x250 (Inherited: 0x230)
struct UUI_FuelLine_Builder_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UUI_AdvancedLabel_C* CancelLabel; // 0x238(0x08)
	struct UProgressBar* DistanceProgress; // 0x240(0x08)
	struct UUI_AdvancedLabel_C* FireLabel; // 0x248(0x08)

	void SetProgress(float InPercent); // Function UI_FuelLine_Builder.UI_FuelLine_Builder_C.SetProgress
	void PreConstruct(bool IsDesignTime); // Function UI_FuelLine_Builder.UI_FuelLine_Builder_C.PreConstruct
	void ExecuteUbergraph_UI_FuelLine_Builder(int32_t EntryPoint); // Function UI_FuelLine_Builder.UI_FuelLine_Builder_C.ExecuteUbergraph_UI_FuelLine_Builder
};

