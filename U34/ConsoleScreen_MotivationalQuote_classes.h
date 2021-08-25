// WidgetBlueprintGeneratedClass ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C
// Size: 0x268 (Inherited: 0x230)
struct UConsoleScreen_MotivationalQuote_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* TextAnim; // 0x238(0x08)
	struct UTextBlock* TextBlock_3; // 0x240(0x08)
	struct UTextBlock* TextBlock_147; // 0x248(0x08)
	struct UTextBlock* TXT_Main; // 0x250(0x08)
	struct TArray<struct FText> texts; // 0x258(0x10)

	void Construct(); // Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.Tick
	void ExecuteUbergraph_ConsoleScreen_MotivationalQuote(int32_t EntryPoint); // Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.ExecuteUbergraph_ConsoleScreen_MotivationalQuote
};

