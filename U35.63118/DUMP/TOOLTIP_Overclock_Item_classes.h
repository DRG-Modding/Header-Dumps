// WidgetBlueprintGeneratedClass TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C
// Size: 0x290 (Inherited: 0x230)
struct UTOOLTIP_Overclock_Item_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow23; // 0x238(0x08)
	UTextBlock* DATA_Overclock_CategoryName; // 0x240(0x08)
	UTextBlock* DATA_Overclock_Title; // 0x248(0x08)
	UBorder* EquipBorder; // 0x250(0x08)
	UBorder* HeaderBorder2; // 0x258(0x08)
	UOverlay* HeaderOverlay; // 0x260(0x08)
	USizeBox* HeaderSize; // 0x268(0x08)
	UITM_Overclock_Details_C* ITM_Overclock_Details; // 0x270(0x08)
	UITM_Overclock_Icon_C* ITM_Overclock_Icon; // 0x278(0x08)
	UItemUpgrade* Overclock; // 0x280(0x08)
	USchematicCategory* Category; // 0x288(0x08)

	void PreConstruct(bool IsDesignTime);
	void SetOverclock(UItemUpgrade* Overclock);
	void ExecuteUbergraph_TOOLTIP_Overclock_Item(int32_t EntryPoint);
};

