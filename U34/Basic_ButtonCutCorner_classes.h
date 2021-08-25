// WidgetBlueprintGeneratedClass Basic_ButtonCutCorner.Basic_ButtonCutCorner_C
// Size: 0x2e1 (Inherited: 0x230)
struct UBasic_ButtonCutCorner_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* Background; // 0x238(0x08)
	struct UButton* Button_1; // 0x240(0x08)
	struct UImage* Image_Outline; // 0x248(0x08)
	struct UOverlay* Overlay_Outer; // 0x250(0x08)
	struct UScaleBox* ScaleBox_54; // 0x258(0x08)
	struct USizeBox* Sizer; // 0x260(0x08)
	struct UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x268(0x08)
	struct FText ButtonText; // 0x270(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x288(0x10)
	struct FText ControllerOverrideText; // 0x298(0x18)
	int32_t Font Size; // 0x2b0(0x04)
	float Width (minimum); // 0x2b4(0x04)
	float Height; // 0x2b8(0x04)
	char UnknownData_2BC[0x4]; // 0x2bc(0x04)
	struct FMulticastInlineDelegate OnPressed; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x2d0(0x10)
	bool IsSelected; // 0x2e0(0x01)

	void IsPressed(bool IsPressed); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.IsPressed
	void SetButtonText(struct FText Text, struct FText OverrideControllerText); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.SetButtonText
	void SetFontSize(int32_t FontSize); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.SetFontSize
	void PreConstruct(bool IsDesignTime); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.PreConstruct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature(); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
	void Update Look(); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.Update Look
	void Click(); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.Click
	void Toggle(bool IsToggleOn); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.Toggle
	void ExecuteUbergraph_Basic_ButtonCutCorner(int32_t EntryPoint); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.ExecuteUbergraph_Basic_ButtonCutCorner
	void OnReleased__DelegateSignature(); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.OnReleased__DelegateSignature
	void OnPressed__DelegateSignature(); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.OnPressed__DelegateSignature
	void OnClicked__DelegateSignature(struct UBasic_ButtonCutCorner_C* Button); // Function Basic_ButtonCutCorner.Basic_ButtonCutCorner_C.OnClicked__DelegateSignature
};

