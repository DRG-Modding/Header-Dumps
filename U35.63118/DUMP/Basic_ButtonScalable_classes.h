// WidgetBlueprintGeneratedClass Basic_ButtonScalable.Basic_ButtonScalable_C
// Size: 0x2e0 (Inherited: 0x230)
struct UBasic_ButtonScalable_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	USizeBox* Bar_Left_Sizer; // 0x238(0x08)
	USizeBox* Bar_Right_Sizer; // 0x240(0x08)
	UBorder* BaseLeft; // 0x248(0x08)
	UBorder* BaseMid; // 0x250(0x08)
	UBorder* BaseRight; // 0x258(0x08)
	UButton* Button_1; // 0x260(0x08)
	USizeBox* Sizer; // 0x268(0x08)
	USpacer* Spacer_1; // 0x270(0x08)
	USpacer* Spacer_2; // 0x278(0x08)
	UTextBlock* TXT_ButtonText; // 0x280(0x08)
	FText ButtonText; // 0x288(0x18)
	FMulticastInlineDelegate OnClicked; // 0x2a0(0x10)
	int32_t Font Size; // 0x2b0(0x04)
	float Width (minimum); // 0x2b4(0x04)
	float Height; // 0x2b8(0x04)
	bool Thick Bars; // 0x2bc(0x01)
	FMulticastInlineDelegate OnPressed; // 0x2c0(0x10)
	FMulticastInlineDelegate OnReleased; // 0x2d0(0x10)

	void IsPressed(bool IsPressed);
	void SetButtonText(FText Text);
	void SetFontSize(int32_t FontSize);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_Basic_ButtonScalable(int32_t EntryPoint);
	void OnReleased__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnClicked__DelegateSignature();
};

