// WidgetBlueprintGeneratedClass Basic_ButtonWithControls.Basic_ButtonWithControls_C
// Size: 0x2d9 (Inherited: 0x230)
struct UBasic_ButtonWithControls_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* BaseLeft; // 0x238(0x08)
	struct UBorder* BaseMid; // 0x240(0x08)
	struct UBorder* BaseRight; // 0x248(0x08)
	struct UButton* Button_1; // 0x250(0x08)
	struct UTextBlock* TXT_ButtonText; // 0x258(0x08)
	struct UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x260(0x08)
	struct FText ButtonText; // 0x268(0x18)
	bool ShowInput; // 0x280(0x01)
	char UnknownData_281[0x3]; // 0x281(0x03)
	struct FLinearColor Tint_Base; // 0x284(0x10)
	char UnknownData_294[0x4]; // 0x294(0x04)
	struct FText InputStandardText; // 0x298(0x18)
	struct FText InputControllerOverride; // 0x2b0(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x2c8(0x10)
	char PreviewAs; // 0x2d8(0x01)

	void PreConstruct(bool IsDesignTime); // Function Basic_ButtonWithControls.Basic_ButtonWithControls_C.PreConstruct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Basic_ButtonWithControls.Basic_ButtonWithControls_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ButtonWithControls.Basic_ButtonWithControls_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ButtonWithControls.Basic_ButtonWithControls_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_Basic_ButtonWithControls(int32_t EntryPoint); // Function Basic_ButtonWithControls.Basic_ButtonWithControls_C.ExecuteUbergraph_Basic_ButtonWithControls
	void OnClicked__DelegateSignature(); // Function Basic_ButtonWithControls.Basic_ButtonWithControls_C.OnClicked__DelegateSignature
};

