// WidgetBlueprintGeneratedClass Basic_ButtonTab.Basic_ButtonTab_C
// Size: 0x321 (Inherited: 0x230)
struct UBasic_ButtonTab_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* Background; // 0x238(0x08)
	UButton* Button_1; // 0x240(0x08)
	UTextBlock* DATA_headerText; // 0x248(0x08)
	UImage* IconRight; // 0x250(0x08)
	UImage* Image_Outline; // 0x258(0x08)
	FText HeaderText; // 0x260(0x18)
	bool Clicked; // 0x278(0x01)
	FMulticastInlineDelegate OnClicked; // 0x280(0x10)
	bool Toggled; // 0x290(0x01)
	FSlateBrush IconRightBrush; // 0x298(0x88)
	bool IconRightVisible; // 0x320(0x01)

	void SetIconRightVisible(bool IsVisible);
	void SetIconRight(FSlateBrush Brush);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
	void Toggle(bool on);
	void UpdateLook();
	void SilentToggle(bool on);
	void ExecuteUbergraph_Basic_ButtonTab(int32_t EntryPoint);
	void OnClicked__DelegateSignature();
};

