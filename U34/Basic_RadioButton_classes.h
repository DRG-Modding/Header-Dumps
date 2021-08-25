// WidgetBlueprintGeneratedClass Basic_RadioButton.Basic_RadioButton_C
// Size: 0x2b9 (Inherited: 0x230)
struct UBasic_RadioButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* TickShow; // 0x238(0x08)
	struct UWidgetAnimation* Click; // 0x240(0x08)
	struct UImage* BorderInner; // 0x248(0x08)
	struct UImage* BorderOuter; // 0x250(0x08)
	struct UButton* Checkbox_Button; // 0x258(0x08)
	struct UHorizontalBox* Horizontal; // 0x260(0x08)
	struct UTextBlock* RadioText; // 0x268(0x08)
	struct USizeBox* SizeBox_2; // 0x270(0x08)
	struct UImage* Tick; // 0x278(0x08)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x280(0x10)
	float Size; // 0x290(0x04)
	bool IsChecked; // 0x294(0x01)
	bool CanUncheck; // 0x295(0x01)
	char UnknownData_296[0x2]; // 0x296(0x02)
	struct FText Text; // 0x298(0x18)
	bool UpperCase; // 0x2b0(0x01)
	char UnknownData_2B1[0x3]; // 0x2b1(0x03)
	int32_t Index; // 0x2b4(0x04)
	char TextColor; // 0x2b8(0x01)

	void SetTextColor(char Color); // Function Basic_RadioButton.Basic_RadioButton_C.SetTextColor
	void SetText(struct FText InText, bool InUpperCase); // Function Basic_RadioButton.Basic_RadioButton_C.SetText
	void SetIsChecked(bool InIsChecked); // Function Basic_RadioButton.Basic_RadioButton_C.SetIsChecked
	bool GetIsChecked(); // Function Basic_RadioButton.Basic_RadioButton_C.GetIsChecked
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Basic_RadioButton.Basic_RadioButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Basic_RadioButton.Basic_RadioButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Basic_RadioButton.Basic_RadioButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function Basic_RadioButton.Basic_RadioButton_C.PreConstruct
	void Construct(); // Function Basic_RadioButton.Basic_RadioButton_C.Construct
	void ExecuteUbergraph_Basic_RadioButton(int32_t EntryPoint); // Function Basic_RadioButton.Basic_RadioButton_C.ExecuteUbergraph_Basic_RadioButton
	void OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function Basic_RadioButton.Basic_RadioButton_C.OnCheckStateChanged__DelegateSignature
};

