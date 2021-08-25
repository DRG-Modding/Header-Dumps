// WidgetBlueprintGeneratedClass UI_Bar_OrderMenu.UI_Bar_OrderMenu_C
// Size: 0x308 (Inherited: 0x278)
struct UUI_Bar_OrderMenu_C : UBarMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1; // 0x280(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x288(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_4; // 0x290(0x08)
	struct UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x298(0x08)
	struct UBasic_ButtonScalable2_C* CloseButton; // 0x2a0(0x08)
	struct UVerticalBox* DrinksBox; // 0x2a8(0x08)
	struct UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x2b0(0x08)
	struct UUI_Bar_OrderMenu_Preview_C* Preview; // 0x2b8(0x08)
	struct UUI_Bar_Inventory_C* UI_Bar_Inventory; // 0x2c0(0x08)
	struct UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item; // 0x2c8(0x08)
	struct UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item_C_2; // 0x2d0(0x08)
	struct UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item_C_3; // 0x2d8(0x08)
	struct UUI_Bar_OrderMenu_ItemSpecial_C* UI_Bar_OrderMenu_ItemSpecial; // 0x2e0(0x08)
	struct ASpaceRigBar* BarActor; // 0x2e8(0x08)
	struct FMulticastInlineDelegate OnRoundSelected; // 0x2f0(0x10)
	struct UDrinkableDataAsset* SelectedDrink; // 0x300(0x08)

	struct TArray<struct UDrinkableDataAsset*> GetDrinkables(); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.GetDrinkables
	void SetMenu(struct UDrinkableDataAsset* Special, struct TArray<struct UDrinkableDataAsset*> Drinks); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetMenu
	void OnDrinkAdded(struct UUI_Bar_OrderMenu_Item_C* DrinkWidget); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkAdded
	void OnDrinksPurchased_Event(struct UDrinkableDataAsset* Drink); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinksPurchased_Event
	void Cancel Order(); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Cancel Order
	void OnShown(); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnShown
	void OnHover_Event(struct USpaceRigBarMenuItem* OrderItem); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnHover_Event
	void BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature(struct USpaceRigBarMenuItem* Previous Item, struct USpaceRigBarMenuItem* New Item); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature
	void OnPurchaseDenied_Event(); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnPurchaseDenied_Event
	void BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature(struct USpaceRigBarMenuItem* OrderItem); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature
	void BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature(); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature
	void OnClosed(); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnClosed
	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	void BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature(struct UDrinkableDataAsset* Drink); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature
	void SetBartender(struct ASpaceRigBar* BarActor); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetBartender
	void OnNewDrinkableSpecial(struct UDrinkableDataAsset* Drinkable); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnNewDrinkableSpecial
	void ReceiveCloseCommand(); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ReceiveCloseCommand
	void BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature(); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature
	void OnDrinkUnlocked(struct UDrinkableDataAsset* Drink); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkUnlocked
	void Construct(); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Construct
	void ExecuteUbergraph_UI_Bar_OrderMenu(int32_t EntryPoint); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ExecuteUbergraph_UI_Bar_OrderMenu
	void OnRoundSelected__DelegateSignature(struct ASpaceRigBar* Bar, struct UDrinkableDataAsset* RequestedDrink); // Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnRoundSelected__DelegateSignature
};

