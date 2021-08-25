// WidgetBlueprintGeneratedClass ITM_NewsTicker.ITM_NewsTicker_C
// Size: 0x260 (Inherited: 0x230)
struct UITM_NewsTicker_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UUI_TickerText_C* UI_TickerText; // 0x238(0x08)
	struct UNewsTextHeadlines* MineralTradeData; // 0x240(0x08)
	int32_t LastSeed; // 0x248(0x04)
	bool IsTesting; // 0x24c(0x01)
	char UnknownData_24D[0x3]; // 0x24d(0x03)
	struct UMissionNameBank* MissionNames; // 0x250(0x08)
	struct UNewsTextLists* NewsTexts; // 0x258(0x08)

	struct FString GenerateFluffStock(struct FRandomStream RandomStream); // Function ITM_NewsTicker.ITM_NewsTicker_C.GenerateFluffStock
	void GenerateTickerText(); // Function ITM_NewsTicker.ITM_NewsTicker_C.GenerateTickerText
	void Construct(); // Function ITM_NewsTicker.ITM_NewsTicker_C.Construct
	void CheckForNewText(); // Function ITM_NewsTicker.ITM_NewsTicker_C.CheckForNewText
	void ExecuteUbergraph_ITM_NewsTicker(int32_t EntryPoint); // Function ITM_NewsTicker.ITM_NewsTicker_C.ExecuteUbergraph_ITM_NewsTicker
};

