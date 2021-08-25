// WidgetBlueprintGeneratedClass ITM_LoadOut_PerksEquip_None.ITM_LoadOut_PerksEquip_None_C
// Size: 0x268 (Inherited: 0x230)
struct UITM_LoadOut_PerksEquip_None_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* Background; // 0x238(0x08)
	struct UBorder* FrameBorder; // 0x240(0x08)
	struct UBorder* SelectionBorder; // 0x248(0x08)
	bool ItemHovered; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x258(0x10)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_LoadOut_PerksEquip_None.ITM_LoadOut_PerksEquip_None_C.OnMouseButtonUp
	void PreConstruct(bool IsDesignTime); // Function ITM_LoadOut_PerksEquip_None.ITM_LoadOut_PerksEquip_None_C.PreConstruct
	void Construct(); // Function ITM_LoadOut_PerksEquip_None.ITM_LoadOut_PerksEquip_None_C.Construct
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_LoadOut_PerksEquip_None.ITM_LoadOut_PerksEquip_None_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function ITM_LoadOut_PerksEquip_None.ITM_LoadOut_PerksEquip_None_C.OnMouseLeave
	void Refresh(); // Function ITM_LoadOut_PerksEquip_None.ITM_LoadOut_PerksEquip_None_C.Refresh
	void ExecuteUbergraph_ITM_LoadOut_PerksEquip_None(int32_t EntryPoint); // Function ITM_LoadOut_PerksEquip_None.ITM_LoadOut_PerksEquip_None_C.ExecuteUbergraph_ITM_LoadOut_PerksEquip_None
	void OnClicked__DelegateSignature(); // Function ITM_LoadOut_PerksEquip_None.ITM_LoadOut_PerksEquip_None_C.OnClicked__DelegateSignature
};

