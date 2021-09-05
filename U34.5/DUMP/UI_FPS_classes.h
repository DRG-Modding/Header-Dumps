// WidgetBlueprintGeneratedClass UI_FPS.UI_FPS_C
// Size: 0x298 (Inherited: 0x230)
struct UUI_FPS_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* TextBlock_FPS; // 0x238(0x08)
	FSlateFontInfo Font; // 0x240(0x50)
	enum class ETextJustify Justification; // 0x290(0x01)
	float SmoothedDeltaT; // 0x294(0x04)

	void PreConstruct(bool IsDesignTime);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void Construct();
	void OnShowFPSChanged(bool NewValue);
	void ExecuteUbergraph_UI_FPS(int32_t EntryPoint);
};

