// WidgetBlueprintGeneratedClass TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C
// Size: 0x268 (Inherited: 0x230)
struct UTOOLTIP_ServerWorkEnvironment_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x238(0x08)
	URichTextBlock* DATALockMessage; // 0x240(0x08)
	UHorizontalBox* LockedBar; // 0x248(0x08)
	FText Text; // 0x250(0x18)

	void SetText(FText InText);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment(int32_t EntryPoint);
};

