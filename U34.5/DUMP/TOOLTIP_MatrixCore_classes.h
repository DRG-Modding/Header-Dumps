// WidgetBlueprintGeneratedClass TOOLTIP_MatrixCore.TOOLTIP_MatrixCore_C
// Size: 0x258 (Inherited: 0x230)
struct UTOOLTIP_MatrixCore_C : UUserWidget {
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x230(0x08)
	UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x238(0x08)
	UUI_GenericLabel_C* SchematicCategory; // 0x240(0x08)
	UUI_GenericLabel_C* SchematicName; // 0x248(0x08)
	UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon; // 0x250(0x08)

	void FromSchematic(USchematic* InSchematic);
};

