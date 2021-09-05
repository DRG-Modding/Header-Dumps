// WidgetBlueprintGeneratedClass UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C
// Size: 0x338 (Inherited: 0x258)
struct UUI_Bar_OrderMenu_Item_C : USpaceRigBarMenuItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UWidgetAnimation* Click; // 0x260(0x08)
	UWidgetAnimation* Hover; // 0x268(0x08)
	UBorder* Border_1; // 0x270(0x08)
	UBorder* Border_102; // 0x278(0x08)
	UButton* BuyButton; // 0x280(0x08)
	UImage* DrinkIcon; // 0x288(0x08)
	UTextBlock* DrinkNameLabel; // 0x290(0x08)
	UImage* ICON_BeerLicense; // 0x298(0x08)
	USizeBox* SizeBox_4; // 0x2a0(0x08)
	UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost; // 0x2a8(0x08)
	UUI_Bar_LockWarning_C* UI_Bar_LockWarning; // 0x2b0(0x08)
	UUI_Bar_PlayerRankWarning_C* UI_Bar_PlayerRankWarning; // 0x2b8(0x08)
	UUI_Bar_SupporterLabel_C* UI_Bar_SupporterLabel; // 0x2c0(0x08)
	FMulticastInlineDelegate OnDrinksPurchased; // 0x2c8(0x10)
	FMulticastInlineDelegate OnHover; // 0x2d8(0x10)
	FMulticastInlineDelegate OnUnhover; // 0x2e8(0x10)
	bool Selected; // 0x2f8(0x01)
	bool CanOrder; // 0x2f9(0x01)
	FMulticastInlineDelegate OnPurchaseDenied; // 0x300(0x10)
	FMulticastInlineDelegate OnSelected; // 0x310(0x10)
	bool AreBeersFree; // 0x320(0x01)
	FMulticastInlineDelegate OnDrinkUnlocked; // 0x328(0x10)

	bool AreBeersFreee();
	bool HasPlayerRank();
	void GetTemporaryBuf(UTemporaryBuff* buff);
	void UpdateItem();
	void GetBorderColor(FLinearColor OutputColor);
	bool IsInteractable();
	void No_0F2CD82B4BA6006B33BED8B78B16B74B();
	void Yes_0F2CD82B4BA6006B33BED8B78B16B74B();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnCreditsChanged(int32_t Credits);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void OnPlayerProgressChanged(int32_t Rank, int32_t Stars);
	void Select();
	void Unselect();
	void OnHoverFinished();
	void BuyFailed();
	void TryUnlock();
	void OnUnlockAnimFinished_Event();
	void ExecuteUbergraph_UI_Bar_OrderMenu_Item(int32_t EntryPoint);
	void OnDrinkUnlocked__DelegateSignature(UDrinkableDataAsset* Drink);
	void OnSelected__DelegateSignature(USpaceRigBarMenuItem* Item);
	void OnPurchaseDenied__DelegateSignature();
	void OnUnhover__DelegateSignature(USpaceRigBarMenuItem* OrderItem);
	void OnHover__DelegateSignature(USpaceRigBarMenuItem* OrderItem);
	void OnDrinksPurchased__DelegateSignature(UDrinkableDataAsset* Drink);
};

