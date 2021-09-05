// WidgetBlueprintGeneratedClass Header_ButtonCutCorner.Header_ButtonCutCorner_C
// Size: 0x2ba (Inherited: 0x230)
struct UHeader_ButtonCutCorner_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* Background; // 0x238(0x08)
	UButton* Button_1; // 0x240(0x08)
	UImage* Image_Outline; // 0x248(0x08)
	USizeBox* Sizer; // 0x250(0x08)
	UTextBlock* TXT_ButtonText; // 0x258(0x08)
	FText ButtonText; // 0x260(0x18)
	FMulticastInlineDelegate OnClicked; // 0x278(0x10)
	int32_t Font Size; // 0x288(0x04)
	float Width (minimum); // 0x28c(0x04)
	float Height; // 0x290(0x04)
	FMulticastInlineDelegate OnPressed; // 0x298(0x10)
	FMulticastInlineDelegate OnReleased; // 0x2a8(0x10)
	bool IsSelected; // 0x2b8(0x01)
	bool TopRightCorner; // 0x2b9(0x01)

	void IsPressed(bool IsPressed);
	void SetButtonText(FText Text);
	void SetFontSize(int32_t FontSize);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
	void Toggle(bool IsToggleOn);
	void Update Look();
	void Click();
	void ExecuteUbergraph_Header_ButtonCutCorner(int32_t EntryPoint);
	void OnReleased__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnClicked__DelegateSignature(UHeader_ButtonCutCorner_C* Button);
};

