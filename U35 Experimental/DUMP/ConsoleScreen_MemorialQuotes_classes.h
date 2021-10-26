// WidgetBlueprintGeneratedClass ConsoleScreen_MemorialQuotes.ConsoleScreen_MemorialQuotes_C
// Size: 0x288 (Inherited: 0x230)
struct UConsoleScreen_MemorialQuotes_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* TextAnim; // 0x238(0x08)
	UTextBlock* TextBlock_3; // 0x240(0x08)
	UTextBlock* TextBlock_147; // 0x248(0x08)
	UTextBlock* TXT_Main; // 0x250(0x08)
	TArray<FString> SetText; // 0x258(0x10)
	TArray<FText> texts; // 0x268(0x10)
	TArray<FText> TextTester; // 0x278(0x10)

	void Construct();
	void ExecuteUbergraph_ConsoleScreen_MemorialQuotes(int32_t EntryPoint);
};

