// WidgetBlueprintGeneratedClass UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C
// Size: 0x2c8 (Inherited: 0x278)
struct UUI_Bar_BackgroundMenu_C : UBarMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x280(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2; // 0x288(0x08)
	struct UVerticalBox* DrinksBox; // 0x290(0x08)
	struct UTextBlock* MenuHeader; // 0x298(0x08)
	struct UTextBlock* TextBlock_3; // 0x2a0(0x08)
	struct UUI_Bar_BackgroundMenu_ItemSpecialBig_C* UI_Bar_BackgroundMenu_ItemSpecialBig; // 0x2a8(0x08)
	struct FMulticastInlineDelegate OnRoundSelected; // 0x2b0(0x10)
	struct ABP_SpaceRig_Bartender_C* Bartender; // 0x2c0(0x08)

	void PreConstruct(bool IsDesignTime); // Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.PreConstruct
	void Set Bartender(struct ABP_SpaceRig_Bartender_C* InBartender); // Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.Set Bartender
	void OnNewDrinkableSpecial(struct UDrinkableDataAsset* Drinkable); // Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnNewDrinkableSpecial
	void ExecuteUbergraph_UI_Bar_BackgroundMenu(int32_t EntryPoint); // Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.ExecuteUbergraph_UI_Bar_BackgroundMenu
	void OnRoundSelected__DelegateSignature(struct ASpaceRigBar* Bar, struct UDrinkableDataAsset* RequestedDrink); // Function UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C.OnRoundSelected__DelegateSignature
};

