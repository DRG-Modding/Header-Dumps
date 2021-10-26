// WidgetBlueprintGeneratedClass WND_Trading_DailyDeal.WND_Trading_DailyDeal_C
// Size: 0x2d0 (Inherited: 0x230)
struct UWND_Trading_DailyDeal_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ButtonCutCorner_C* B_Trade; // 0x238(0x08)
	UBlurBackground_C* BlurBackground; // 0x240(0x08)
	UImage* DailyDealHeadline_BG; // 0x248(0x08)
	UImage* I_PosterOutline; // 0x250(0x08)
	UImage* Icon_Refresh; // 0x258(0x08)
	UITM_Trading_DailyDeal_C* ITM_DailyDeal2; // 0x260(0x08)
	UImage* MineralTraderHeadline_Outline; // 0x268(0x08)
	UOverlay* Overlay_DealHolder; // 0x270(0x08)
	UOverlay* Overlay_SoldOut; // 0x278(0x08)
	UTextBlock* Text_; // 0x280(0x08)
	UTextBlock* Text_TimeToNext; // 0x288(0x08)
	UVerticalBox* V_DailyDeal; // 0x290(0x08)
	FRandomStream RandomStream; // 0x298(0x08)
	FTimerHandle Timer; // 0x2a0(0x08)
	FDailyDeal CurrDeal; // 0x2a8(0x18)
	FMulticastInlineDelegate OnDealBought; // 0x2c0(0x10)

	void FormatDailyDealResources(TMap<UResourceData*, int32_t> Resources);
	void No_D21FAC5A44FF696C3525F18876AC316A();
	void Yes_D21FAC5A44FF696C3525F18876AC316A();
	void PreConstruct(bool IsDesignTime);
	void Refresh();
	void UpdateTime();
	void BndEvt__B_Trade_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void Construct();
	void OnResourceAmountChanged(UResourceData* Resource, float currentAmount);
	void OnCreditsChanged(int32_t Credits);
	void ExecuteUbergraph_WND_Trading_DailyDeal(int32_t EntryPoint);
	void OnDealBought__DelegateSignature();
};

