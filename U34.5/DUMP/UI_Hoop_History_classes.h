// WidgetBlueprintGeneratedClass UI_Hoop_History.UI_Hoop_History_C
// Size: 0x298 (Inherited: 0x230)
struct UUI_Hoop_History_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UConsoleScreen_Empty_C* ConsoleScreen_Empty; // 0x238(0x08)
	UTextBlock* Header; // 0x240(0x08)
	UVerticalBox* ScoreParent; // 0x248(0x08)
	UUI_Hoop_HistoryLine_C* UI_Hoop_HistoryLine; // 0x250(0x08)
	UUI_Hoop_HistoryLine_C* UI_Hoop_HistoryLine_1; // 0x258(0x08)
	UUI_Hoop_HistoryLine_C* UI_Hoop_HistoryLine_2; // 0x260(0x08)
	UUI_Hoop_HistoryLine_C* UI_Hoop_HistoryLine_3; // 0x268(0x08)
	TArray<UUI_Hoop_HistoryLine_C*> Lines; // 0x270(0x10)
	int32_t Index; // 0x280(0x04)
	TArray<int32_t> Scores; // 0x288(0x10)

	void GetHistoryCount(int32_t History Count);
	void OnRep_Scores();
	void Construct();
	void UpdateScores(TArray<int32_t> Scores);
	void ExecuteUbergraph_UI_Hoop_History(int32_t EntryPoint);
};

