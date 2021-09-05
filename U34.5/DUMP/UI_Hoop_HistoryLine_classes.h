// WidgetBlueprintGeneratedClass UI_Hoop_HistoryLine.UI_Hoop_HistoryLine_C
// Size: 0x240 (Inherited: 0x230)
struct UUI_Hoop_HistoryLine_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* ScoreText; // 0x238(0x08)

	void SetScore(int32_t Score);
	void Construct();
	void ExecuteUbergraph_UI_Hoop_HistoryLine(int32_t EntryPoint);
};

