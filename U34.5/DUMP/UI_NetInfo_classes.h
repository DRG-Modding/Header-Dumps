// WidgetBlueprintGeneratedClass UI_NetInfo.UI_NetInfo_C
// Size: 0x291 (Inherited: 0x230)
struct UUI_NetInfo_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* TextBlock_FPS; // 0x238(0x08)
	FSlateFontInfo Font; // 0x240(0x50)
	enum class ETextJustify Justification; // 0x290(0x01)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnShowNetInfoChanged(bool NewValue);
	void SlowTick();
	void ExecuteUbergraph_UI_NetInfo(int32_t EntryPoint);
};

