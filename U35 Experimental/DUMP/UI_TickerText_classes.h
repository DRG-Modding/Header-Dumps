// WidgetBlueprintGeneratedClass UI_TickerText.UI_TickerText_C
// Size: 0x278 (Inherited: 0x230)
struct UUI_TickerText_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	URichTextSizable* RichTextSizable_212; // 0x238(0x08)
	USizeBox* SizeBox_2; // 0x240(0x08)
	float Progress; // 0x248(0x04)
	float Width; // 0x24c(0x04)
	UDataTable* RichTextStyle; // 0x250(0x08)
	FText Text; // 0x258(0x18)
	float TextLength; // 0x270(0x04)
	float Speed; // 0x274(0x04)

	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetText(FText TickerText);
	void SetSpeed(float Speed);
	void SetStyle(UDataTable* NewTextStyleSet);
	void ExecuteUbergraph_UI_TickerText(int32_t EntryPoint);
};

