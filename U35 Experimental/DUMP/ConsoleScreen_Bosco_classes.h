// WidgetBlueprintGeneratedClass ConsoleScreen_Bosco.ConsoleScreen_Bosco_C
// Size: 0x260 (Inherited: 0x230)
struct UConsoleScreen_Bosco_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* TextAnim; // 0x238(0x08)
	UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate; // 0x240(0x08)
	FText TextToDisplay; // 0x248(0x18)

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ConsoleScreen_Bosco(int32_t EntryPoint);
};

