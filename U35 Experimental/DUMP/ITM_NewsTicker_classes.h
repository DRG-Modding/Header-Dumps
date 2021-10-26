// WidgetBlueprintGeneratedClass ITM_NewsTicker.ITM_NewsTicker_C
// Size: 0x260 (Inherited: 0x230)
struct UITM_NewsTicker_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UUI_TickerText_C* UI_TickerText; // 0x238(0x08)
	UNewsTextHeadlines* MineralTradeData; // 0x240(0x08)
	int32_t LastSeed; // 0x248(0x04)
	bool IsTesting; // 0x24c(0x01)
	UMissionNameBank* MissionNames; // 0x250(0x08)
	UNewsTextLists* NewsTexts; // 0x258(0x08)

	FString GenerateFluffStock(FRandomStream RandomStream);
	void GenerateTickerText();
	void Construct();
	void CheckForNewText();
	void ExecuteUbergraph_ITM_NewsTicker(int32_t EntryPoint);
};

