// WidgetBlueprintGeneratedClass ConsoleScreen_Bosco.ConsoleScreen_Bosco_C
// Size: 0x260 (Inherited: 0x230)
struct UConsoleScreen_Bosco_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* TextAnim; // 0x238(0x08)
	struct UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate; // 0x240(0x08)
	struct FText TextToDisplay; // 0x248(0x18)

	void Construct(); // Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.Construct
	void PreConstruct(bool IsDesignTime); // Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.PreConstruct
	void ExecuteUbergraph_ConsoleScreen_Bosco(int32_t EntryPoint); // Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.ExecuteUbergraph_ConsoleScreen_Bosco
};

