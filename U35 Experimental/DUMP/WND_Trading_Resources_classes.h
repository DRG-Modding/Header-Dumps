// WidgetBlueprintGeneratedClass WND_Trading_Resources.WND_Trading_Resources_C
// Size: 0x2a8 (Inherited: 0x230)
struct UWND_Trading_Resources_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ButtonCutCorner_C* B_Clear; // 0x238(0x08)
	UBasic_ButtonCutCorner_C* B_Trade; // 0x240(0x08)
	UBorder* B_TradeBasketOutline; // 0x248(0x08)
	UImage* I_BalanceGlow; // 0x250(0x08)
	UImage* Image; // 0x258(0x08)
	UImage* Image_282; // 0x260(0x08)
	UImage* Image_Separator; // 0x268(0x08)
	UTextBlock* Text_; // 0x270(0x08)
	UTextBlock* Text_TotalBalance; // 0x278(0x08)
	UVerticalBox* V_BasketItems; // 0x280(0x08)
	UVerticalBox* V_Trading; // 0x288(0x08)
	TArray<UITM_Trading_Resource_C*> ResourceWidgets; // 0x290(0x10)
	int32_t count; // 0x2a0(0x04)
	int32_t CurrTradeBalance; // 0x2a4(0x04)

	void UpdateAmountAfterDeal();
	void CountTradeResources(TMap<UResourceData*, int32_t> Map, bool IsBuyingMinerals);
	void OnAmoutUpdated(bool DoClearAnim, bool DoTradeAnim);
	void No_678F03CB47E4D126FB4FF99BC3F43B71();
	void Yes_678F03CB47E4D126FB4FF99BC3F43B71();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void ClearAll();
	void OnCreditsChanged(int32_t Credits);
	void ExecuteUbergraph_WND_Trading_Resources(int32_t EntryPoint);
};

