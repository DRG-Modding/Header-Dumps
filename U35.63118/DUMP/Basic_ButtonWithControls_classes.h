// WidgetBlueprintGeneratedClass Basic_ButtonWithControls.Basic_ButtonWithControls_C
// Size: 0x2d9 (Inherited: 0x230)
struct UBasic_ButtonWithControls_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* BaseLeft; // 0x238(0x08)
	UBorder* BaseMid; // 0x240(0x08)
	UBorder* BaseRight; // 0x248(0x08)
	UButton* Button_1; // 0x250(0x08)
	UTextBlock* TXT_ButtonText; // 0x258(0x08)
	UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x260(0x08)
	FText ButtonText; // 0x268(0x18)
	bool ShowInput; // 0x280(0x01)
	FLinearColor Tint_Base; // 0x284(0x10)
	FText InputStandardText; // 0x298(0x18)
	FText InputControllerOverride; // 0x2b0(0x18)
	FMulticastInlineDelegate OnClicked; // 0x2c8(0x10)
	char PreviewAs; // 0x2d8(0x01)

	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_Basic_ButtonWithControls(int32_t EntryPoint);
	void OnClicked__DelegateSignature();
};

