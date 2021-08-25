// WidgetBlueprintGeneratedClass UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C
// Size: 0x338 (Inherited: 0x258)
struct UUI_Bar_OrderMenu_Item_C : USpaceRigBarMenuItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UWidgetAnimation* Click; // 0x260(0x08)
	struct UWidgetAnimation* Hover; // 0x268(0x08)
	struct UBorder* Border_1; // 0x270(0x08)
	struct UBorder* Border_102; // 0x278(0x08)
	struct UButton* BuyButton; // 0x280(0x08)
	struct UImage* DrinkIcon; // 0x288(0x08)
	struct UTextBlock* DrinkNameLabel; // 0x290(0x08)
	struct UImage* ICON_BeerLicense; // 0x298(0x08)
	struct USizeBox* SizeBox_4; // 0x2a0(0x08)
	struct UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost; // 0x2a8(0x08)
	struct UUI_Bar_LockWarning_C* UI_Bar_LockWarning; // 0x2b0(0x08)
	struct UUI_Bar_PlayerRankWarning_C* UI_Bar_PlayerRankWarning; // 0x2b8(0x08)
	struct UUI_Bar_SupporterLabel_C* UI_Bar_SupporterLabel; // 0x2c0(0x08)
	struct FMulticastInlineDelegate OnDrinksPurchased; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnHover; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnUnhover; // 0x2e8(0x10)
	bool Selected; // 0x2f8(0x01)
	bool CanOrder; // 0x2f9(0x01)
	char UnknownData_2FA[0x6]; // 0x2fa(0x06)
	struct FMulticastInlineDelegate OnPurchaseDenied; // 0x300(0x10)
	struct FMulticastInlineDelegate OnSelected; // 0x310(0x10)
	bool AreBeersFree; // 0x320(0x01)
	char UnknownData_321[0x7]; // 0x321(0x07)
	struct FMulticastInlineDelegate OnDrinkUnlocked; // 0x328(0x10)

	bool AreBeersFreee(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.AreBeersFreee
	bool HasPlayerRank(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.HasPlayerRank
	void GetTemporaryBuf(struct UTemporaryBuff* buff); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetTemporaryBuf
	void UpdateItem(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.UpdateItem
	void GetBorderColor(struct FLinearColor OutputColor); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetBorderColor
	bool IsInteractable(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.IsInteractable
	void No_0F2CD82B4BA6006B33BED8B78B16B74B(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.No_0F2CD82B4BA6006B33BED8B78B16B74B
	void Yes_0F2CD82B4BA6006B33BED8B78B16B74B(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Yes_0F2CD82B4BA6006B33BED8B78B16B74B
	void PreConstruct(bool IsDesignTime); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.PreConstruct
	void Construct(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Construct
	void OnCreditsChanged(int32_t Credits); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnCreditsChanged
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void OnPlayerProgressChanged(int32_t Rank, int32_t Stars); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnPlayerProgressChanged
	void Select(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Select
	void Unselect(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Unselect
	void OnHoverFinished(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnHoverFinished
	void BuyFailed(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BuyFailed
	void TryUnlock(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.TryUnlock
	void OnUnlockAnimFinished_Event(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnUnlockAnimFinished_Event
	void ExecuteUbergraph_UI_Bar_OrderMenu_Item(int32_t EntryPoint); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.ExecuteUbergraph_UI_Bar_OrderMenu_Item
	void OnDrinkUnlocked__DelegateSignature(struct UDrinkableDataAsset* Drink); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinkUnlocked__DelegateSignature
	void OnSelected__DelegateSignature(struct USpaceRigBarMenuItem* Item); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnSelected__DelegateSignature
	void OnPurchaseDenied__DelegateSignature(); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnPurchaseDenied__DelegateSignature
	void OnUnhover__DelegateSignature(struct USpaceRigBarMenuItem* OrderItem); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnUnhover__DelegateSignature
	void OnHover__DelegateSignature(struct USpaceRigBarMenuItem* OrderItem); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnHover__DelegateSignature
	void OnDrinksPurchased__DelegateSignature(struct UDrinkableDataAsset* Drink); // Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinksPurchased__DelegateSignature
};

