// WidgetBlueprintGeneratedClass HoopsScore_Widget.HoopsScore_Widget_C
// Size: 0x248 (Inherited: 0x230)
struct UHoopsScore_Widget_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UConsoleScreen_Empty_C* ConsoleScreen_Empty; // 0x238(0x08)
	UTextBlock* ScoreText; // 0x240(0x08)

	void SetScore(int32_t Score);
	void Construct();
	void ExecuteUbergraph_HoopsScore_Widget(int32_t EntryPoint);
};

