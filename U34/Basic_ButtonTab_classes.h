// WidgetBlueprintGeneratedClass Basic_ButtonTab.Basic_ButtonTab_C
// Size: 0x321 (Inherited: 0x230)
struct UBasic_ButtonTab_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* Background; // 0x238(0x08)
	struct UButton* Button_1; // 0x240(0x08)
	struct UTextBlock* DATA_HeaderText; // 0x248(0x08)
	struct UImage* IconRight; // 0x250(0x08)
	struct UImage* Image_Outline; // 0x258(0x08)
	struct FText HeaderText; // 0x260(0x18)
	bool Clicked; // 0x278(0x01)
	char UnknownData_279[0x7]; // 0x279(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x280(0x10)
	bool Toggled; // 0x290(0x01)
	char UnknownData_291[0x7]; // 0x291(0x07)
	struct FSlateBrush IconRightBrush; // 0x298(0x88)
	bool IconRightVisible; // 0x320(0x01)

	void SetIconRightVisible(bool IsVisible); // Function Basic_ButtonTab.Basic_ButtonTab_C.SetIconRightVisible
	void SetIconRight(struct FSlateBrush Brush); // Function Basic_ButtonTab.Basic_ButtonTab_C.SetIconRight
	void PreConstruct(bool IsDesignTime); // Function Basic_ButtonTab.Basic_ButtonTab_C.PreConstruct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature(); // Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature(); // Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature(); // Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	void Toggle(bool on); // Function Basic_ButtonTab.Basic_ButtonTab_C.Toggle
	void UpdateLook(); // Function Basic_ButtonTab.Basic_ButtonTab_C.UpdateLook
	void SilentToggle(bool on); // Function Basic_ButtonTab.Basic_ButtonTab_C.SilentToggle
	void ExecuteUbergraph_Basic_ButtonTab(int32_t EntryPoint); // Function Basic_ButtonTab.Basic_ButtonTab_C.ExecuteUbergraph_Basic_ButtonTab
	void OnClicked__DelegateSignature(); // Function Basic_ButtonTab.Basic_ButtonTab_C.OnClicked__DelegateSignature
};

