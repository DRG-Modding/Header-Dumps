// WidgetBlueprintGeneratedClass UI_Bar_OrderMenu.UI_Bar_OrderMenu_C
// Size: 0x308 (Inherited: 0x278)
struct UUI_Bar_OrderMenu_C : UBarMenuWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1; // 0x280(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x288(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_4; // 0x290(0x08)
	UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x298(0x08)
	UBasic_ButtonScalable2_C* CloseButton; // 0x2a0(0x08)
	UVerticalBox* DrinksBox; // 0x2a8(0x08)
	UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x2b0(0x08)
	UUI_Bar_OrderMenu_Preview_C* Preview; // 0x2b8(0x08)
	UUI_Bar_Inventory_C* UI_Bar_Inventory; // 0x2c0(0x08)
	UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item; // 0x2c8(0x08)
	UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item_C_2; // 0x2d0(0x08)
	UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item_C_3; // 0x2d8(0x08)
	UUI_Bar_OrderMenu_ItemSpecial_C* UI_Bar_OrderMenu_ItemSpecial; // 0x2e0(0x08)
	ASpaceRigBar* BarActor; // 0x2e8(0x08)
	FMulticastInlineDelegate OnRoundSelected; // 0x2f0(0x10)
	UDrinkableDataAsset* SelectedDrink; // 0x300(0x08)

	TArray<UDrinkableDataAsset*> GetDrinkables();
	void SetMenu(UDrinkableDataAsset* Special, TArray<UDrinkableDataAsset*> Drinks);
	void OnDrinkAdded(UUI_Bar_OrderMenu_Item_C* DrinkWidget);
	void OnDrinksPurchased_Event(UDrinkableDataAsset* Drink);
	void Cancel Order();
	void OnShown();
	void OnHover_Event(USpaceRigBarMenuItem* OrderItem);
	void BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature(USpaceRigBarMenuItem* Previous Item, USpaceRigBarMenuItem* New Item);
	void OnPurchaseDenied_Event();
	void BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature(USpaceRigBarMenuItem* OrderItem);
	void BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature();
	void OnClosed();
	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature(UDrinkableDataAsset* Drink);
	void SetBartender(ASpaceRigBar* BarActor);
	void OnNewDrinkableSpecial(UDrinkableDataAsset* Drinkable);
	void ReceiveCloseCommand();
	void BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature();
	void OnDrinkUnlocked(UDrinkableDataAsset* Drink);
	void Construct();
	void ExecuteUbergraph_UI_Bar_OrderMenu(int32_t EntryPoint);
	void OnRoundSelected__DelegateSignature(ASpaceRigBar* Bar, UDrinkableDataAsset* RequestedDrink);
};

