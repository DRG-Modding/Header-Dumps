// WidgetBlueprintGeneratedClass ITM_Trading_Resource.ITM_Trading_Resource_C
// Size: 0x2ec (Inherited: 0x230)
struct UITM_Trading_Resource_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* GradiantFadeIn; // 0x238(0x08)
	struct UButton* B_Add; // 0x240(0x08)
	struct UButton* B_Subtract; // 0x248(0x08)
	struct UBasic_BG_CutCorner_W_Image_C* Basic_BG_CutCorner_W_Image; // 0x250(0x08)
	struct UBorder* Border_Glow; // 0x258(0x08)
	struct UButton* Button_Hover; // 0x260(0x08)
	struct UImage* CreditsIcon_Buy; // 0x268(0x08)
	struct UImage* CreditsIcon_Sell; // 0x270(0x08)
	struct UImage* Icon_Resource; // 0x278(0x08)
	struct UImage* Image_GradientBackground; // 0x280(0x08)
	struct UTextBlock* Text_AmountOwned; // 0x288(0x08)
	struct UTextBlock* Text_BuyPrice; // 0x290(0x08)
	struct UTextBlock* Text_ResourceName; // 0x298(0x08)
	struct UTextBlock* Text_SellPrice; // 0x2a0(0x08)
	struct UResourceData* Resource; // 0x2a8(0x08)
	int32_t ChangeAmout; // 0x2b0(0x04)
	int32_t AmountOwned; // 0x2b4(0x04)
	struct UITM_Trading_BasketItem_C* TradeBasket; // 0x2b8(0x08)
	struct FMulticastInlineDelegate AmoutUpdated; // 0x2c0(0x10)
	int32_t CreditsLeft; // 0x2d0(0x04)
	bool DoClearAnim; // 0x2d4(0x01)
	bool DoTradeAnim; // 0x2d5(0x01)
	bool OutroPlaying; // 0x2d6(0x01)
	char UnknownData_2D7[0x1]; // 0x2d7(0x01)
	int32_t RollCounter; // 0x2d8(0x04)
	char UnknownData_2DC[0x4]; // 0x2dc(0x04)
	struct FTimerHandle RollCounter_Handle; // 0x2e0(0x08)
	int32_t CurrIncrementAmount; // 0x2e8(0x04)

	void UpdateChangeAmount(int32_t IncrementAmount, bool DidUpdate); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateChangeAmount
	void PreConstruct(bool IsDesignTime); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.PreConstruct
	void SetData(struct UResourceData* Resource, struct UITM_Trading_BasketItem_C* TradeBasket); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.SetData
	void UpdateNumber(bool DoClearAnim, bool DoTradeAnim, float InitialDelay); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateNumber
	void SetAvailableBalance(int32_t CreditsLeft); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.SetAvailableBalance
	void ClearAmount(); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.ClearAmount
	void UpdateAmountOwned(); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateAmountOwned
	void FadeFinished(); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.FadeFinished
	void BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	void BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature(); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
	void BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature(); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	void BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature(); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
	void IncrementAmount(); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.IncrementAmount
	void Construct(); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.Construct
	void ResourceUpdated(struct UResourceData* Resource, float currentAmount); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.ResourceUpdated
	void ExecuteUbergraph_ITM_Trading_Resource(int32_t EntryPoint); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.ExecuteUbergraph_ITM_Trading_Resource
	void AmoutUpdated__DelegateSignature(bool DoClearAnim, bool DoTradeAnim); // Function ITM_Trading_Resource.ITM_Trading_Resource_C.AmoutUpdated__DelegateSignature
};

