// WidgetBlueprintGeneratedClass Basic_TextInputField.Basic_TextInputField_C
// Size: 0x280 (Inherited: 0x230)
struct UBasic_TextInputField_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UEditableTextBox* InputField; // 0x238(0x08)
	UBorder* InputFieldBorder; // 0x240(0x08)
	FText HintText; // 0x248(0x18)
	FMulticastInlineDelegate OnTextChanged; // 0x260(0x10)
	FMulticastInlineDelegate OnTextCommitted; // 0x270(0x10)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void SetText(FText InText);
	void GetHint(FText HintText);
	FText GetText();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__InputField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(FText Text);
	void BndEvt__InputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(FText Text, enum class ETextCommit CommitMethod);
	void ExecuteUbergraph_Basic_TextInputField(int32_t EntryPoint);
	void OnTextCommitted__DelegateSignature(FText Text, char CommitMethod);
	void OnTextChanged__DelegateSignature(FText Text);
};

