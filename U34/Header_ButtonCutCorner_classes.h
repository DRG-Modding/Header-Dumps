// WidgetBlueprintGeneratedClass Header_ButtonCutCorner.Header_ButtonCutCorner_C
// Size: 0x2ba (Inherited: 0x230)
struct UHeader_ButtonCutCorner_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* Background; // 0x238(0x08)
	struct UButton* Button_1; // 0x240(0x08)
	struct UImage* Image_Outline; // 0x248(0x08)
	struct USizeBox* Sizer; // 0x250(0x08)
	struct UTextBlock* TXT_ButtonText; // 0x258(0x08)
	struct FText ButtonText; // 0x260(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x278(0x10)
	int32_t Font Size; // 0x288(0x04)
	float Width (minimum); // 0x28c(0x04)
	float Height; // 0x290(0x04)
	char UnknownData_294[0x4]; // 0x294(0x04)
	struct FMulticastInlineDelegate OnPressed; // 0x298(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x2a8(0x10)
	bool IsSelected; // 0x2b8(0x01)
	bool TopRightCorner; // 0x2b9(0x01)

	void IsPressed(bool IsPressed); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.IsPressed
	void SetButtonText(struct FText Text); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.SetButtonText
	void SetFontSize(int32_t FontSize); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.SetFontSize
	void PreConstruct(bool IsDesignTime); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.PreConstruct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature(); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
	void Toggle(bool IsToggleOn); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.Toggle
	void Update Look(); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.Update Look
	void Click(); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.Click
	void ExecuteUbergraph_Header_ButtonCutCorner(int32_t EntryPoint); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.ExecuteUbergraph_Header_ButtonCutCorner
	void OnReleased__DelegateSignature(); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.OnReleased__DelegateSignature
	void OnPressed__DelegateSignature(); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.OnPressed__DelegateSignature
	void OnClicked__DelegateSignature(struct UHeader_ButtonCutCorner_C* Button); // Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.OnClicked__DelegateSignature
};

