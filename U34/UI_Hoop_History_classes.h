// WidgetBlueprintGeneratedClass UI_Hoop_History.UI_Hoop_History_C
// Size: 0x298 (Inherited: 0x230)
struct UUI_Hoop_History_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UConsoleScreen_Empty_C* ConsoleScreen_Empty; // 0x238(0x08)
	struct UTextBlock* Header; // 0x240(0x08)
	struct UVerticalBox* ScoreParent; // 0x248(0x08)
	struct UUI_Hoop_HistoryLine_C* UI_Hoop_HistoryLine; // 0x250(0x08)
	struct UUI_Hoop_HistoryLine_C* UI_Hoop_HistoryLine_1; // 0x258(0x08)
	struct UUI_Hoop_HistoryLine_C* UI_Hoop_HistoryLine_2; // 0x260(0x08)
	struct UUI_Hoop_HistoryLine_C* UI_Hoop_HistoryLine_3; // 0x268(0x08)
	struct TArray<struct UUI_Hoop_HistoryLine_C*> Lines; // 0x270(0x10)
	int32_t Index; // 0x280(0x04)
	char UnknownData_284[0x4]; // 0x284(0x04)
	struct TArray<int32_t> Scores; // 0x288(0x10)

	void GetHistoryCount(int32_t History Count); // Function UI_Hoop_History.UI_Hoop_History_C.GetHistoryCount
	void OnRep_Scores(); // Function UI_Hoop_History.UI_Hoop_History_C.OnRep_Scores
	void Construct(); // Function UI_Hoop_History.UI_Hoop_History_C.Construct
	void UpdateScores(struct TArray<int32_t> Scores); // Function UI_Hoop_History.UI_Hoop_History_C.UpdateScores
	void ExecuteUbergraph_UI_Hoop_History(int32_t EntryPoint); // Function UI_Hoop_History.UI_Hoop_History_C.ExecuteUbergraph_UI_Hoop_History
};

