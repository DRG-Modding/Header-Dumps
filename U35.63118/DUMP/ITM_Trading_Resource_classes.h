// WidgetBlueprintGeneratedClass ITM_Trading_Resource.ITM_Trading_Resource_C
// Size: 0x2ec (Inherited: 0x230)
struct UITM_Trading_Resource_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* GradiantFadeIn; // 0x238(0x08)
	UButton* B_Add; // 0x240(0x08)
	UButton* B_Subtract; // 0x248(0x08)
	UBasic_BG_CutCorner_W_Image_C* Basic_BG_CutCorner_W_Image; // 0x250(0x08)
	UBorder* Border_Glow; // 0x258(0x08)
	UButton* Button_Hover; // 0x260(0x08)
	UImage* CreditsIcon_Buy; // 0x268(0x08)
	UImage* CreditsIcon_Sell; // 0x270(0x08)
	UImage* Icon_Resource; // 0x278(0x08)
	UImage* Image_GradientBackground; // 0x280(0x08)
	UTextBlock* Text_AmountOwned; // 0x288(0x08)
	UTextBlock* Text_BuyPrice; // 0x290(0x08)
	UTextBlock* Text_ResourceName; // 0x298(0x08)
	UTextBlock* Text_SellPrice; // 0x2a0(0x08)
	UResourceData* Resource; // 0x2a8(0x08)
	int32_t ChangeAmout; // 0x2b0(0x04)
	int32_t AmountOwned; // 0x2b4(0x04)
	UITM_Trading_BasketItem_C* TradeBasket; // 0x2b8(0x08)
	FMulticastInlineDelegate AmoutUpdated; // 0x2c0(0x10)
	int32_t CreditsLeft; // 0x2d0(0x04)
	bool DoClearAnim; // 0x2d4(0x01)
	bool DoTradeAnim; // 0x2d5(0x01)
	bool OutroPlaying; // 0x2d6(0x01)
	int32_t RollCounter; // 0x2d8(0x04)
	FTimerHandle RollCounter_Handle; // 0x2e0(0x08)
	int32_t CurrIncrementAmount; // 0x2e8(0x04)

	void UpdateChangeAmount(int32_t IncrementAmount, bool DidUpdate);
	void PreConstruct(bool IsDesignTime);
	void SetData(UResourceData* Resource, UITM_Trading_BasketItem_C* TradeBasket);
	void UpdateNumber(bool DoClearAnim, bool DoTradeAnim, float InitialDelay);
	void SetAvailableBalance(int32_t CreditsLeft);
	void ClearAmount();
	void UpdateAmountOwned();
	void FadeFinished();
	void BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
	void IncrementAmount();
	void Construct();
	void ResourceUpdated(UResourceData* Resource, float currentAmount);
	void ExecuteUbergraph_ITM_Trading_Resource(int32_t EntryPoint);
	void AmoutUpdated__DelegateSignature(bool DoClearAnim, bool DoTradeAnim);
};

