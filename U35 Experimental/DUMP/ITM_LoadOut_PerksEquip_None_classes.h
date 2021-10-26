// WidgetBlueprintGeneratedClass ITM_LoadOut_PerksEquip_None.ITM_LoadOut_PerksEquip_None_C
// Size: 0x268 (Inherited: 0x230)
struct UITM_LoadOut_PerksEquip_None_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* Background; // 0x238(0x08)
	UBorder* FrameBorder; // 0x240(0x08)
	UBorder* SelectionBorder; // 0x248(0x08)
	bool ItemHovered; // 0x250(0x01)
	FMulticastInlineDelegate OnClicked; // 0x258(0x10)

	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void OnMouseLeave(FPointerEvent MouseEvent);
	void Refresh();
	void ExecuteUbergraph_ITM_LoadOut_PerksEquip_None(int32_t EntryPoint);
	void OnClicked__DelegateSignature();
};

