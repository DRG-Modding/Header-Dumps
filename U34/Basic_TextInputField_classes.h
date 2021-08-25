// WidgetBlueprintGeneratedClass Basic_TextInputField.Basic_TextInputField_C
// Size: 0x280 (Inherited: 0x230)
struct UBasic_TextInputField_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UEditableTextBox* InputField; // 0x238(0x08)
	struct UBorder* InputFieldBorder; // 0x240(0x08)
	struct FText HintText; // 0x248(0x18)
	struct FMulticastInlineDelegate OnTextChanged; // 0x260(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x270(0x10)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function Basic_TextInputField.Basic_TextInputField_C.OnKeyUp
	void SetText(struct FText InText); // Function Basic_TextInputField.Basic_TextInputField_C.SetText
	void GetHint(struct FText HintText); // Function Basic_TextInputField.Basic_TextInputField_C.GetHint
	struct FText GetText(); // Function Basic_TextInputField.Basic_TextInputField_C.GetText
	void PreConstruct(bool IsDesignTime); // Function Basic_TextInputField.Basic_TextInputField_C.PreConstruct
	void BndEvt__InputField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function Basic_TextInputField.Basic_TextInputField_C.BndEvt__InputField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__InputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // Function Basic_TextInputField.Basic_TextInputField_C.BndEvt__InputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
	void ExecuteUbergraph_Basic_TextInputField(int32_t EntryPoint); // Function Basic_TextInputField.Basic_TextInputField_C.ExecuteUbergraph_Basic_TextInputField
	void OnTextCommitted__DelegateSignature(struct FText Text, char CommitMethod); // Function Basic_TextInputField.Basic_TextInputField_C.OnTextCommitted__DelegateSignature
	void OnTextChanged__DelegateSignature(struct FText Text); // Function Basic_TextInputField.Basic_TextInputField_C.OnTextChanged__DelegateSignature
};

