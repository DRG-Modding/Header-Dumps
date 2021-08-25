// WidgetBlueprintGeneratedClass Basic_CheckBox.Basic_CheckBox_C
// Size: 0x2aa (Inherited: 0x230)
struct UBasic_CheckBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* TickShow; // 0x238(0x08)
	struct UWidgetAnimation* Click; // 0x240(0x08)
	struct UImage* Checkbox_Border; // 0x248(0x08)
	struct UButton* Checkbox_Button; // 0x250(0x08)
	struct UImage* CheckBox_Tick; // 0x258(0x08)
	struct UTextBlock* CheckBoxText; // 0x260(0x08)
	struct UHorizontalBox* Horizontal; // 0x268(0x08)
	struct USizeBox* SizeBox_2; // 0x270(0x08)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x278(0x10)
	float Size; // 0x288(0x04)
	bool IsChecked; // 0x28c(0x01)
	char UnknownData_28D[0x3]; // 0x28d(0x03)
	struct FText Text; // 0x290(0x18)
	bool UpperCase; // 0x2a8(0x01)
	char TextColor; // 0x2a9(0x01)

	void SetText(struct FText InText, bool InUpperCase); // Function Basic_CheckBox.Basic_CheckBox_C.SetText
	void SetIsChecked(bool InIsChecked); // Function Basic_CheckBox.Basic_CheckBox_C.SetIsChecked
	bool GetIsChecked(); // Function Basic_CheckBox.Basic_CheckBox_C.GetIsChecked
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function Basic_CheckBox.Basic_CheckBox_C.PreConstruct
	void ClickButton(); // Function Basic_CheckBox.Basic_CheckBox_C.ClickButton
	void ExecuteUbergraph_Basic_CheckBox(int32_t EntryPoint); // Function Basic_CheckBox.Basic_CheckBox_C.ExecuteUbergraph_Basic_CheckBox
	void OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function Basic_CheckBox.Basic_CheckBox_C.OnCheckStateChanged__DelegateSignature
};

