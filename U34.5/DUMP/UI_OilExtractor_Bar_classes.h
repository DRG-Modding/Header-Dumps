// WidgetBlueprintGeneratedClass UI_OilExtractor_Bar.UI_OilExtractor_Bar_C
// Size: 0x250 (Inherited: 0x230)
struct UUI_OilExtractor_Bar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Full; // 0x238(0x08)
	UProgressBar* ProgressBar_42; // 0x240(0x08)
	UTextBlock* TextBlock_71; // 0x248(0x08)

	void SetFilledPercentage(float PercentFull);
	void Construct();
	void ExecuteUbergraph_UI_OilExtractor_Bar(int32_t EntryPoint);
};

