// WidgetBlueprintGeneratedClass ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C
// Size: 0x30b (Inherited: 0x230)
struct UITM_Special_ButtonCutCorner_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* Background; // 0x238(0x08)
	struct UBorder* Border_LeftIcon; // 0x240(0x08)
	struct UButton* Button_1; // 0x248(0x08)
	struct UImage* Image_Outline; // 0x250(0x08)
	struct UImage* LeftIcon; // 0x258(0x08)
	struct UOverlay* Overlay_Icon; // 0x260(0x08)
	struct UOverlay* Overlay_Outer; // 0x268(0x08)
	struct USizeBox* SizeBox_Icon; // 0x270(0x08)
	struct USizeBox* Sizer; // 0x278(0x08)
	struct UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x280(0x08)
	struct FText ButtonText; // 0x288(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x2a0(0x10)
	struct FText ControllerOverrideText; // 0x2b0(0x18)
	int32_t Font Size; // 0x2c8(0x04)
	float Width (minimum); // 0x2cc(0x04)
	float Height; // 0x2d0(0x04)
	char UnknownData_2D4[0x4]; // 0x2d4(0x04)
	struct FMulticastInlineDelegate OnPressed; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x2e8(0x10)
	bool IsSelected; // 0x2f8(0x01)
	char UnknownData_2F9[0x7]; // 0x2f9(0x07)
	struct UTexture2D* Icon; // 0x300(0x08)
	char NormalColor; // 0x308(0x01)
	char SelectedColor; // 0x309(0x01)
	char IconColor; // 0x30a(0x01)

	void IsPressed(bool IsPressed); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.IsPressed
	void SetButtonText(struct FText Text, struct FText OverrideControllerText); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.SetButtonText
	void SetFontSize(int32_t FontSize); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.SetFontSize
	void PreConstruct(bool IsDesignTime); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.PreConstruct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature(); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
	void SetSelected(bool IsSelected); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.SetSelected
	void Update Look(); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.Update Look
	void Click(); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.Click
	void ExecuteUbergraph_ITM_Special_ButtonCutCorner(int32_t EntryPoint); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.ExecuteUbergraph_ITM_Special_ButtonCutCorner
	void OnReleased__DelegateSignature(); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.OnReleased__DelegateSignature
	void OnPressed__DelegateSignature(); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.OnPressed__DelegateSignature
	void OnClicked__DelegateSignature(); // Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.OnClicked__DelegateSignature
};

