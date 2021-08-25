// WidgetBlueprintGeneratedClass WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C
// Size: 0x250 (Inherited: 0x230)
struct UWND_DailyDealOnTerminal_C : UDealWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x238(0x08)
	struct UITM_Trading_DailyDeal_C* ITM_Trading_DailyDeal; // 0x240(0x08)
	struct UOverlay* Overlay_SoldOut; // 0x248(0x08)

	void Construct(); // Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.Construct
	void OnCreditsChanged(int32_t Credits); // Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.OnCreditsChanged
	void UpdateDealText(); // Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.UpdateDealText
	void ExecuteUbergraph_WND_DailyDealOnTerminal(int32_t EntryPoint); // Function WND_DailyDealOnTerminal.WND_DailyDealOnTerminal_C.ExecuteUbergraph_WND_DailyDealOnTerminal
};

