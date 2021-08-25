// WidgetBlueprintGeneratedClass WND_Trading_DailyDeal.WND_Trading_DailyDeal_C
// Size: 0x2d0 (Inherited: 0x230)
struct UWND_Trading_DailyDeal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_ButtonCutCorner_C* B_Trade; // 0x238(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x240(0x08)
	struct UImage* DailyDealHeadline_BG; // 0x248(0x08)
	struct UImage* I_PosterOutline; // 0x250(0x08)
	struct UImage* Icon_Refresh; // 0x258(0x08)
	struct UITM_Trading_DailyDeal_C* ITM_DailyDeal2; // 0x260(0x08)
	struct UImage* MineralTraderHeadline_Outline; // 0x268(0x08)
	struct UOverlay* Overlay_DealHolder; // 0x270(0x08)
	struct UOverlay* Overlay_SoldOut; // 0x278(0x08)
	struct UTextBlock* Text_; // 0x280(0x08)
	struct UTextBlock* Text_TimeToNext; // 0x288(0x08)
	struct UVerticalBox* V_DailyDeal; // 0x290(0x08)
	struct FRandomStream RandomStream; // 0x298(0x08)
	struct FTimerHandle Timer; // 0x2a0(0x08)
	struct FDailyDeal CurrDeal; // 0x2a8(0x18)
	struct FMulticastInlineDelegate OnDealBought; // 0x2c0(0x10)

	void FormatDailyDealResources(struct TMap<struct UResourceData*, int32_t> Resources); // Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.FormatDailyDealResources
	void No_D21FAC5A44FF696C3525F18876AC316A(); // Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.No_D21FAC5A44FF696C3525F18876AC316A
	void Yes_D21FAC5A44FF696C3525F18876AC316A(); // Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.Yes_D21FAC5A44FF696C3525F18876AC316A
	void PreConstruct(bool IsDesignTime); // Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.PreConstruct
	void Refresh(); // Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.Refresh
	void UpdateTime(); // Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.UpdateTime
	void BndEvt__B_Trade_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UBasic_ButtonCutCorner_C* Button); // Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.BndEvt__B_Trade_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void Construct(); // Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.Construct
	void OnResourceAmountChanged(struct UResourceData* Resource, float currentAmount); // Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.OnResourceAmountChanged
	void OnCreditsChanged(int32_t Credits); // Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.OnCreditsChanged
	void ExecuteUbergraph_WND_Trading_DailyDeal(int32_t EntryPoint); // Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.ExecuteUbergraph_WND_Trading_DailyDeal
	void OnDealBought__DelegateSignature(); // Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.OnDealBought__DelegateSignature
};

