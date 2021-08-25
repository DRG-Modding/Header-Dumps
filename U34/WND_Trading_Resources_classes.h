// WidgetBlueprintGeneratedClass WND_Trading_Resources.WND_Trading_Resources_C
// Size: 0x2a8 (Inherited: 0x230)
struct UWND_Trading_Resources_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_ButtonCutCorner_C* B_Clear; // 0x238(0x08)
	struct UBasic_ButtonCutCorner_C* B_Trade; // 0x240(0x08)
	struct UBorder* B_TradeBasketOutline; // 0x248(0x08)
	struct UImage* I_BalanceGlow; // 0x250(0x08)
	struct UImage* Image; // 0x258(0x08)
	struct UImage* Image_282; // 0x260(0x08)
	struct UImage* Image_Separator; // 0x268(0x08)
	struct UTextBlock* Text_; // 0x270(0x08)
	struct UTextBlock* Text_TotalBalance; // 0x278(0x08)
	struct UVerticalBox* V_BasketItems; // 0x280(0x08)
	struct UVerticalBox* V_Trading; // 0x288(0x08)
	struct TArray<struct UITM_Trading_Resource_C*> ResourceWidgets; // 0x290(0x10)
	int32_t count; // 0x2a0(0x04)
	int32_t CurrTradeBalance; // 0x2a4(0x04)

	void UpdateAmountAfterDeal(); // Function WND_Trading_Resources.WND_Trading_Resources_C.UpdateAmountAfterDeal
	void CountTradeResources(struct TMap<struct UResourceData*, int32_t> Map, bool IsBuyingMinerals); // Function WND_Trading_Resources.WND_Trading_Resources_C.CountTradeResources
	void OnAmoutUpdated(bool DoClearAnim, bool DoTradeAnim); // Function WND_Trading_Resources.WND_Trading_Resources_C.OnAmoutUpdated
	void No_678F03CB47E4D126FB4FF99BC3F43B71(); // Function WND_Trading_Resources.WND_Trading_Resources_C.No_678F03CB47E4D126FB4FF99BC3F43B71
	void Yes_678F03CB47E4D126FB4FF99BC3F43B71(); // Function WND_Trading_Resources.WND_Trading_Resources_C.Yes_678F03CB47E4D126FB4FF99BC3F43B71
	void Construct(); // Function WND_Trading_Resources.WND_Trading_Resources_C.Construct
	void PreConstruct(bool IsDesignTime); // Function WND_Trading_Resources.WND_Trading_Resources_C.PreConstruct
	void BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UBasic_ButtonCutCorner_C* Button); // Function WND_Trading_Resources.WND_Trading_Resources_C.BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UBasic_ButtonCutCorner_C* Button); // Function WND_Trading_Resources.WND_Trading_Resources_C.BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void ClearAll(); // Function WND_Trading_Resources.WND_Trading_Resources_C.ClearAll
	void OnCreditsChanged(int32_t Credits); // Function WND_Trading_Resources.WND_Trading_Resources_C.OnCreditsChanged
	void ExecuteUbergraph_WND_Trading_Resources(int32_t EntryPoint); // Function WND_Trading_Resources.WND_Trading_Resources_C.ExecuteUbergraph_WND_Trading_Resources
};

