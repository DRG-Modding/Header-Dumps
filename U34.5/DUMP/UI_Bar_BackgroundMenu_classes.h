// WidgetBlueprintGeneratedClass UI_Bar_BackgroundMenu.UI_Bar_BackgroundMenu_C
// Size: 0x2c8 (Inherited: 0x278)
struct UUI_Bar_BackgroundMenu_C : UBarMenuWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x280(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2; // 0x288(0x08)
	UVerticalBox* DrinksBox; // 0x290(0x08)
	UTextBlock* MenuHeader; // 0x298(0x08)
	UTextBlock* TextBlock_3; // 0x2a0(0x08)
	UUI_Bar_BackgroundMenu_ItemSpecialBig_C* UI_Bar_BackgroundMenu_ItemSpecialBig; // 0x2a8(0x08)
	FMulticastInlineDelegate OnRoundSelected; // 0x2b0(0x10)
	ABP_SpaceRig_Bartender_C* Bartender; // 0x2c0(0x08)

	void PreConstruct(bool IsDesignTime);
	void Set Bartender(ABP_SpaceRig_Bartender_C* InBartender);
	void OnNewDrinkableSpecial(UDrinkableDataAsset* Drinkable);
	void ExecuteUbergraph_UI_Bar_BackgroundMenu(int32_t EntryPoint);
	void OnRoundSelected__DelegateSignature(ASpaceRigBar* Bar, UDrinkableDataAsset* RequestedDrink);
};

