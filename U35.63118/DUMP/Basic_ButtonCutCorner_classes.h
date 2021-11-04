// WidgetBlueprintGeneratedClass Basic_ButtonCutCorner.Basic_ButtonCutCorner_C
// Size: 0x2e1 (Inherited: 0x230)
struct UBasic_ButtonCutCorner_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* Background; // 0x238(0x08)
	UButton* Button_1; // 0x240(0x08)
	UImage* Image_Outline; // 0x248(0x08)
	UOverlay* Overlay_Outer; // 0x250(0x08)
	UScaleBox* ScaleBox_54; // 0x258(0x08)
	USizeBox* Sizer; // 0x260(0x08)
	UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x268(0x08)
	FText ButtonText; // 0x270(0x18)
	FMulticastInlineDelegate OnClicked; // 0x288(0x10)
	FText ControllerOverrideText; // 0x298(0x18)
	int32_t Font Size; // 0x2b0(0x04)
	float Width (minimum); // 0x2b4(0x04)
	float Height; // 0x2b8(0x04)
	FMulticastInlineDelegate OnPressed; // 0x2c0(0x10)
	FMulticastInlineDelegate OnReleased; // 0x2d0(0x10)
	bool IsSelected; // 0x2e0(0x01)

	void IsPressed(bool IsPressed);
	void SetButtonText(FText Text, FText OverrideControllerText);
	void SetFontSize(int32_t FontSize);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
	void Update Look();
	void Click();
	void Toggle(bool IsToggleOn);
	void ExecuteUbergraph_Basic_ButtonCutCorner(int32_t EntryPoint);
	void OnReleased__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
};

