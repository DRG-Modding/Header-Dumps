// WidgetBlueprintGeneratedClass ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C
// Size: 0x268 (Inherited: 0x230)
struct UConsoleScreen_MotivationalQuote_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* TextAnim; // 0x238(0x08)
	UTextBlock* TextBlock_3; // 0x240(0x08)
	UTextBlock* TextBlock_147; // 0x248(0x08)
	UTextBlock* TXT_Main; // 0x250(0x08)
	TArray<FText> texts; // 0x258(0x10)

	void Construct();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_ConsoleScreen_MotivationalQuote(int32_t EntryPoint);
};

