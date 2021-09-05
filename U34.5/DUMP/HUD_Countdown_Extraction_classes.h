// WidgetBlueprintGeneratedClass HUD_Countdown_Extraction.HUD_Countdown_Extraction_C
// Size: 0x250 (Inherited: 0x230)
struct UHUD_Countdown_Extraction_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; // 0x238(0x08)
	UTextBlock* DATA_Header; // 0x240(0x08)
	UTextBlock* DATA_Time; // 0x248(0x08)

	void FormatTime(int32_t Time, FText Text);
	void CountdownStarted(FText countdownText);
	void OnCountdownTimeChanged(int32_t SecondsLeft);
	void OnCountdownFinished();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_Countdown_Extraction(int32_t EntryPoint);
};

