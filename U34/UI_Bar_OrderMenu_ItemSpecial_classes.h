// WidgetBlueprintGeneratedClass UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C
// Size: 0x371 (Inherited: 0x258)
struct UUI_Bar_OrderMenu_ItemSpecial_C : USpaceRigBarMenuItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UWidgetAnimation* Idle; // 0x260(0x08)
	struct UWidgetAnimation* Click; // 0x268(0x08)
	struct UWidgetAnimation* Hover; // 0x270(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x278(0x08)
	struct UButton* BuyButton; // 0x280(0x08)
	struct UImage* DrinkIconLeft; // 0x288(0x08)
	struct UImage* DrinkIconRight; // 0x290(0x08)
	struct UTextBlock* DrinkNameLabel; // 0x298(0x08)
	struct UImage* Image_388; // 0x2a0(0x08)
	struct UImage* Image_390; // 0x2a8(0x08)
	struct UImage* Img_Frame; // 0x2b0(0x08)
	struct UOverlay* Overlay_2; // 0x2b8(0x08)
	struct UHorizontalBox* RankBox; // 0x2c0(0x08)
	struct UBorder* RankHolder; // 0x2c8(0x08)
	struct UImage* RankIcon; // 0x2d0(0x08)
	struct UTextBlock* RankText; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_169; // 0x2e0(0x08)
	struct UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost; // 0x2e8(0x08)
	struct UUI_Bar_LockWarning_C* UI_Bar_LockWarning; // 0x2f0(0x08)
	struct UUI_Bar_PlayerRankWarning_C* UI_Bar_PlayerRankWarning; // 0x2f8(0x08)
	struct FMulticastInlineDelegate OnDrinksPurchased; // 0x300(0x10)
	struct FMulticastInlineDelegate OnHover; // 0x310(0x10)
	struct FMulticastInlineDelegate OnUnhover; // 0x320(0x10)
	bool Selected; // 0x330(0x01)
	bool CanOrder; // 0x331(0x01)
	char UnknownData_332[0x6]; // 0x332(0x06)
	struct FMulticastInlineDelegate OnPurchaseDenied; // 0x338(0x10)
	struct FMulticastInlineDelegate OnSelected; // 0x348(0x10)
	bool NewVar_1; // 0x358(0x01)
	char UnknownData_359[0x7]; // 0x359(0x07)
	struct FMulticastInlineDelegate OnDrinkUnlocked; // 0x360(0x10)
	bool AreBeersFree; // 0x370(0x01)

	bool HasPlayerRank(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.HasPlayerRank
	void GetTemporaryBuf(struct UTemporaryBuff* buff); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.GetTemporaryBuf
	void UpdateItemStatus(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.UpdateItemStatus
	void GetBorderColor(struct FLinearColor OutputColor); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.GetBorderColor
	bool IsInteractable(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.IsInteractable
	void No_026492834E69A68487066993DA576F51(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.No_026492834E69A68487066993DA576F51
	void Yes_026492834E69A68487066993DA576F51(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Yes_026492834E69A68487066993DA576F51
	void PreConstruct(bool IsDesignTime); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.PreConstruct
	void Construct(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Construct
	void OnCreditsChanged(int32_t Credits); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnCreditsChanged
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void OnPlayerProgressChanged(int32_t Rank, int32_t Stars); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnPlayerProgressChanged
	void Select(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Select
	void Unselect(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.Unselect
	void OnHoverFinished(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnHoverFinished
	void BuyFailed(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.BuyFailed
	void TryUnlock(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.TryUnlock
	void SetDrinkable(struct UDrinkableDataAsset* Drinkable); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.SetDrinkable
	void ExecuteUbergraph_UI_Bar_OrderMenu_ItemSpecial(int32_t EntryPoint); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.ExecuteUbergraph_UI_Bar_OrderMenu_ItemSpecial
	void OnDrinkUnlocked__DelegateSignature(struct UDrinkableDataAsset* Drink); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnDrinkUnlocked__DelegateSignature
	void OnSelected__DelegateSignature(struct USpaceRigBarMenuItem* Item); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnSelected__DelegateSignature
	void OnPurchaseDenied__DelegateSignature(); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnPurchaseDenied__DelegateSignature
	void OnUnhover__DelegateSignature(struct USpaceRigBarMenuItem* OrderItem); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnUnhover__DelegateSignature
	void OnHover__DelegateSignature(struct USpaceRigBarMenuItem* OrderItem); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnHover__DelegateSignature
	void OnDrinksPurchased__DelegateSignature(struct UDrinkableDataAsset* Drink); // Function UI_Bar_OrderMenu_ItemSpecial.UI_Bar_OrderMenu_ItemSpecial_C.OnDrinksPurchased__DelegateSignature
};

