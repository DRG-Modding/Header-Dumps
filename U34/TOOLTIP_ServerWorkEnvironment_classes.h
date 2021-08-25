// WidgetBlueprintGeneratedClass TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C
// Size: 0x268 (Inherited: 0x230)
struct UTOOLTIP_ServerWorkEnvironment_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x238(0x08)
	struct URichTextBlock* DATALockMessage; // 0x240(0x08)
	struct UHorizontalBox* LockedBar; // 0x248(0x08)
	struct FText Text; // 0x250(0x18)

	void SetText(struct FText InText); // Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.SetText
	void PreConstruct(bool IsDesignTime); // Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.PreConstruct
	void ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment(int32_t EntryPoint); // Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment
};

