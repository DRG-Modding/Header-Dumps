// WidgetBlueprintGeneratedClass _MENU_Trading._MENU_Trading_C
// Size: 0x2e8 (Inherited: 0x270)
struct U_MENU_Trading_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UButton* Button_TradeTicker; // 0x278(0x08)
	struct UImage* I_HeaderSeparator; // 0x280(0x08)
	struct UImage* Image_1135; // 0x288(0x08)
	struct UITM_NewsTicker_C* ITM_NewsTicker; // 0x290(0x08)
	struct UMENU_LockedTemplate_C* MENU_LockedTemplate; // 0x298(0x08)
	struct UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x2a0(0x08)
	struct UImage* MineralTraderHeadline_BG; // 0x2a8(0x08)
	struct UImage* MineralTraderHeadline_Outline; // 0x2b0(0x08)
	struct URetainerBox* RetainerBox_1; // 0x2b8(0x08)
	struct UCanvasPanel* TradingCanvas; // 0x2c0(0x08)
	struct UWND_Trading_DailyDeal_C* WND_DailyDeal; // 0x2c8(0x08)
	struct UWND_Trading_Resources_C* WND_ResourceTrading; // 0x2d0(0x08)
	struct TArray<struct UBiome*> Biomes; // 0x2d8(0x10)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function _MENU_Trading._MENU_Trading_C.OnKeyUp
	void OnShown(); // Function _MENU_Trading._MENU_Trading_C.OnShown
	void Back(); // Function _MENU_Trading._MENU_Trading_C.Back
	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(); // Function _MENU_Trading._MENU_Trading_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function _MENU_Trading._MENU_Trading_C.PreConstruct
	void OnClosed(); // Function _MENU_Trading._MENU_Trading_C.OnClosed
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function _MENU_Trading._MENU_Trading_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function _MENU_Trading._MENU_Trading_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__WND_DailyDeal_K2Node_ComponentBoundEvent_2_OnDealBought__DelegateSignature(); // Function _MENU_Trading._MENU_Trading_C.BndEvt__WND_DailyDeal_K2Node_ComponentBoundEvent_2_OnDealBought__DelegateSignature
	void BndEvt__Button_TradeTicker_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function _MENU_Trading._MENU_Trading_C.BndEvt__Button_TradeTicker_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph__MENU_Trading(int32_t EntryPoint); // Function _MENU_Trading._MENU_Trading_C.ExecuteUbergraph__MENU_Trading
};

