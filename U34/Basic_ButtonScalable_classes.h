// WidgetBlueprintGeneratedClass Basic_ButtonScalable.Basic_ButtonScalable_C
// Size: 0x2e0 (Inherited: 0x230)
struct UBasic_ButtonScalable_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USizeBox* Bar_Left_Sizer; // 0x238(0x08)
	struct USizeBox* Bar_Right_Sizer; // 0x240(0x08)
	struct UBorder* BaseLeft; // 0x248(0x08)
	struct UBorder* BaseMid; // 0x250(0x08)
	struct UBorder* BaseRight; // 0x258(0x08)
	struct UButton* Button_1; // 0x260(0x08)
	struct USizeBox* Sizer; // 0x268(0x08)
	struct USpacer* Spacer_1; // 0x270(0x08)
	struct USpacer* Spacer_2; // 0x278(0x08)
	struct UTextBlock* TXT_ButtonText; // 0x280(0x08)
	struct FText ButtonText; // 0x288(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x2a0(0x10)
	int32_t Font Size; // 0x2b0(0x04)
	float Width (minimum); // 0x2b4(0x04)
	float Height; // 0x2b8(0x04)
	bool Thick Bars; // 0x2bc(0x01)
	char UnknownData_2BD[0x3]; // 0x2bd(0x03)
	struct FMulticastInlineDelegate OnPressed; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x2d0(0x10)

	void IsPressed(bool IsPressed); // Function Basic_ButtonScalable.Basic_ButtonScalable_C.IsPressed
	void SetButtonText(struct FText Text); // Function Basic_ButtonScalable.Basic_ButtonScalable_C.SetButtonText
	void SetFontSize(int32_t FontSize); // Function Basic_ButtonScalable.Basic_ButtonScalable_C.SetFontSize
	void PreConstruct(bool IsDesignTime); // Function Basic_ButtonScalable.Basic_ButtonScalable_C.PreConstruct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature(); // Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
	void ExecuteUbergraph_Basic_ButtonScalable(int32_t EntryPoint); // Function Basic_ButtonScalable.Basic_ButtonScalable_C.ExecuteUbergraph_Basic_ButtonScalable
	void OnReleased__DelegateSignature(); // Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnReleased__DelegateSignature
	void OnPressed__DelegateSignature(); // Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnPressed__DelegateSignature
	void OnClicked__DelegateSignature(); // Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnClicked__DelegateSignature
};

