// WidgetBlueprintGeneratedClass TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C
// Size: 0x290 (Inherited: 0x230)
struct UTOOLTIP_Overclock_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow23; // 0x238(0x08)
	struct UTextBlock* DATA_Overclock_CategoryName; // 0x240(0x08)
	struct UTextBlock* DATA_Overclock_Title; // 0x248(0x08)
	struct UBorder* EquipBorder; // 0x250(0x08)
	struct UBorder* HeaderBorder2; // 0x258(0x08)
	struct UOverlay* HeaderOverlay; // 0x260(0x08)
	struct USizeBox* HeaderSize; // 0x268(0x08)
	struct UITM_Overclock_Details_C* ITM_Overclock_Details; // 0x270(0x08)
	struct UITM_Overclock_Icon_C* ITM_Overclock_Icon; // 0x278(0x08)
	struct UItemUpgrade* Overclock; // 0x280(0x08)
	struct USchematicCategory* Category; // 0x288(0x08)

	void PreConstruct(bool IsDesignTime); // Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.PreConstruct
	void SetOverclock(struct UItemUpgrade* Overclock); // Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.SetOverclock
	void ExecuteUbergraph_TOOLTIP_Overclock_Item(int32_t EntryPoint); // Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.ExecuteUbergraph_TOOLTIP_Overclock_Item
};

