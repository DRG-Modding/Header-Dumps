// WidgetBlueprintGeneratedClass UI_TickerText.UI_TickerText_C
// Size: 0x278 (Inherited: 0x230)
struct UUI_TickerText_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct URichTextSizable* RichTextSizable_212; // 0x238(0x08)
	struct USizeBox* SizeBox_2; // 0x240(0x08)
	float Progress; // 0x248(0x04)
	float Width; // 0x24c(0x04)
	struct UDataTable* RichTextStyle; // 0x250(0x08)
	struct FText Text; // 0x258(0x18)
	float TextLength; // 0x270(0x04)
	float Speed; // 0x274(0x04)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_TickerText.UI_TickerText_C.Tick
	void Construct(); // Function UI_TickerText.UI_TickerText_C.Construct
	void PreConstruct(bool IsDesignTime); // Function UI_TickerText.UI_TickerText_C.PreConstruct
	void SetText(struct FText TickerText); // Function UI_TickerText.UI_TickerText_C.SetText
	void SetSpeed(float Speed); // Function UI_TickerText.UI_TickerText_C.SetSpeed
	void SetStyle(struct UDataTable* NewTextStyleSet); // Function UI_TickerText.UI_TickerText_C.SetStyle
	void ExecuteUbergraph_UI_TickerText(int32_t EntryPoint); // Function UI_TickerText.UI_TickerText_C.ExecuteUbergraph_UI_TickerText
};

