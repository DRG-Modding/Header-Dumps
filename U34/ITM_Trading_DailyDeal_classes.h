// WidgetBlueprintGeneratedClass ITM_Trading_DailyDeal.ITM_Trading_DailyDeal_C
// Size: 0x2a8 (Inherited: 0x230)
struct UITM_Trading_DailyDeal_C : UDealWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* SalesBubblePing; // 0x238(0x08)
	struct UImage* I_SaleBubble; // 0x240(0x08)
	struct UImage* I_SaleBubbleBG; // 0x248(0x08)
	struct UImage* I_TopBG; // 0x250(0x08)
	struct UImage* Icon_Resource_Left; // 0x258(0x08)
	struct UImage* Icon_Resource_Right; // 0x260(0x08)
	struct UITM_Trading_ResourcePoster_C* ITM_ResourcePoster; // 0x268(0x08)
	struct UTextBlock* TextBlock_Amount; // 0x270(0x08)
	struct UTextBlock* TextBlock_Credits; // 0x278(0x08)
	struct UTextBlock* TextBlock_Get; // 0x280(0x08)
	struct UTextBlock* TextBlock_Percent; // 0x288(0x08)
	struct UTextBlock* TextBlock_Profit; // 0x290(0x08)
	struct UTextBlock* TextBlock_ResourceName; // 0x298(0x08)
	struct UTextBlock* TextBlock_Sell; // 0x2a0(0x08)

	void UpdateDealText(); // Function ITM_Trading_DailyDeal.ITM_Trading_DailyDeal_C.UpdateDealText
	void Construct(); // Function ITM_Trading_DailyDeal.ITM_Trading_DailyDeal_C.Construct
	void ExecuteUbergraph_ITM_Trading_DailyDeal(int32_t EntryPoint); // Function ITM_Trading_DailyDeal.ITM_Trading_DailyDeal_C.ExecuteUbergraph_ITM_Trading_DailyDeal
};

