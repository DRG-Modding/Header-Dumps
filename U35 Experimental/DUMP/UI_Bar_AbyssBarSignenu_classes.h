// WidgetBlueprintGeneratedClass UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C
// Size: 0x2c0 (Inherited: 0x278)
struct UUI_Bar_AbyssBarSignenu_C : UBarMenuWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x280(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x288(0x08)
	UBorder* MenuBorder; // 0x290(0x08)
	UTextBlock* MenuHeader; // 0x298(0x08)
	UTextBlock* TextBlock_3; // 0x2a0(0x08)
	ASpaceRigBar* BarActor; // 0x2a8(0x08)
	FMulticastInlineDelegate OnRoundSelected; // 0x2b0(0x10)

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Bar_AbyssBarSignenu(int32_t EntryPoint);
	void OnRoundSelected__DelegateSignature(ASpaceRigBar* Bar, UDrinkableDataAsset* RequestedDrink);
};

