// WidgetBlueprintGeneratedClass _MENU_Trading._MENU_Trading_C
// Size: 0x2e8 (Inherited: 0x270)
struct U_MENU_Trading_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UButton* Button_TradeTicker; // 0x278(0x08)
	UImage* I_HeaderSeparator; // 0x280(0x08)
	UImage* Image_1135; // 0x288(0x08)
	UITM_NewsTicker_C* ITM_NewsTicker; // 0x290(0x08)
	UMENU_LockedTemplate_C* MENU_LockedTemplate; // 0x298(0x08)
	UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x2a0(0x08)
	UImage* MineralTraderHeadline_BG; // 0x2a8(0x08)
	UImage* MineralTraderHeadline_Outline; // 0x2b0(0x08)
	URetainerBox* RetainerBox_1; // 0x2b8(0x08)
	UCanvasPanel* TradingCanvas; // 0x2c0(0x08)
	UWND_Trading_DailyDeal_C* WND_DailyDeal; // 0x2c8(0x08)
	UWND_Trading_Resources_C* WND_ResourceTrading; // 0x2d0(0x08)
	TArray<UBiome*> Biomes; // 0x2d8(0x10)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void OnShown();
	void Back();
	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void OnClosed();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WND_DailyDeal_K2Node_ComponentBoundEvent_2_OnDealBought__DelegateSignature();
	void BndEvt__Button_TradeTicker_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph__MENU_Trading(int32_t EntryPoint);
};

