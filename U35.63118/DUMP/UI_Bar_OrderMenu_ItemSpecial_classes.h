// WidgetBlueprintGeneratedClass UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C
// Size: 0x371 (Inherited: 0x258)
struct UUI_Bar_OrderMenu_ItemSpecial_C : USpaceRigBarMenuItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UWidgetAnimation* Idle; // 0x260(0x08)
	UWidgetAnimation* Click; // 0x268(0x08)
	UWidgetAnimation* Hover; // 0x270(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x278(0x08)
	UButton* BuyButton; // 0x280(0x08)
	UImage* DrinkIconLeft; // 0x288(0x08)
	UImage* DrinkIconRight; // 0x290(0x08)
	UTextBlock* DrinkNameLabel; // 0x298(0x08)
	UImage* Image_388; // 0x2a0(0x08)
	UImage* Image_390; // 0x2a8(0x08)
	UImage* Img_Frame; // 0x2b0(0x08)
	UOverlay* Overlay_2; // 0x2b8(0x08)
	UHorizontalBox* RankBox; // 0x2c0(0x08)
	UBorder* RankHolder; // 0x2c8(0x08)
	UImage* RankIcon; // 0x2d0(0x08)
	UTextBlock* RankText; // 0x2d8(0x08)
	UTextBlock* TextBlock_169; // 0x2e0(0x08)
	UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost; // 0x2e8(0x08)
	UUI_Bar_LockWarning_C* UI_Bar_LockWarning; // 0x2f0(0x08)
	UUI_Bar_PlayerRankWarning_C* UI_Bar_PlayerRankWarning; // 0x2f8(0x08)
	FMulticastInlineDelegate OnDrinksPurchased; // 0x300(0x10)
	FMulticastInlineDelegate OnHover; // 0x310(0x10)
	FMulticastInlineDelegate OnUnhover; // 0x320(0x10)
	bool Selected; // 0x330(0x01)
	bool CanOrder; // 0x331(0x01)
	FMulticastInlineDelegate OnPurchaseDenied; // 0x338(0x10)
	FMulticastInlineDelegate OnSelected; // 0x348(0x10)
	bool NewVar_1; // 0x358(0x01)
	FMulticastInlineDelegate OnDrinkUnlocked; // 0x360(0x10)
	bool AreBeersFree; // 0x370(0x01)

	bool HasPlayerRank();
	void GetTemporaryBuf(UTemporaryBuff* buff);
	void UpdateItemStatus();
	void GetBorderColor(FLinearColor OutputColor);
	bool IsInteractable();
	void No_026492834E69A68487066993DA576F51();
	void Yes_026492834E69A68487066993DA576F51();
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
	void SetDrinkable(UDrinkableDataAsset* Drinkable);
	void ExecuteUbergraph_UI_Bar_OrderMenu_ItemSpecial(int32_t EntryPoint);
	void OnDrinkUnlocked__DelegateSignature(UDrinkableDataAsset* Drink);
	void OnSelected__DelegateSignature(USpaceRigBarMenuItem* Item);
	void OnPurchaseDenied__DelegateSignature();
	void OnUnhover__DelegateSignature(USpaceRigBarMenuItem* OrderItem);
	void OnHover__DelegateSignature(USpaceRigBarMenuItem* OrderItem);
	void OnDrinksPurchased__DelegateSignature(UDrinkableDataAsset* Drink);
};

