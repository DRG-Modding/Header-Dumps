// WidgetBlueprintGeneratedClass UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C
// Size: 0x2c8 (Inherited: 0x278)
struct UUI_Bar_AbyssBarSignenu_C : UBarMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UAnimatedStaticOverlay_C* AnimatedStaticOverlay; // 0x280(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x288(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; // 0x290(0x08)
	struct UBorder* MenuBorder; // 0x298(0x08)
	struct UTextBlock* MenuHeader; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_3; // 0x2a8(0x08)
	struct ASpaceRigBar* BarActor; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnRoundSelected; // 0x2b8(0x10)

	void PreConstruct(bool IsDesignTime); // Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.PreConstruct
	void ExecuteUbergraph_UI_Bar_AbyssBarSignenu(int32_t EntryPoint); // Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.ExecuteUbergraph_UI_Bar_AbyssBarSignenu
	void OnRoundSelected__DelegateSignature(struct ASpaceRigBar* Bar, struct UDrinkableDataAsset* RequestedDrink); // Function UI_Bar_AbyssBarSignenu.UI_Bar_AbyssBarSignenu_C.OnRoundSelected__DelegateSignature
};

