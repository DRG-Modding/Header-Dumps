// WidgetBlueprintGeneratedClass Basic_PasswordField.Basic_PasswordField_C
// Size: 0x280 (Inherited: 0x230)
struct UBasic_PasswordField_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UEditableTextBox* ServerPassword; // 0x238(0x08)
	UBorder* ServerPasswordBorder; // 0x240(0x08)
	FText HintText; // 0x248(0x18)
	FMulticastInlineDelegate OnTextChanged; // 0x260(0x10)
	FMulticastInlineDelegate OnTextCommitted; // 0x270(0x10)

	void GetPassword(FText Password);
	FText GetPasswordHint();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(FText Text);
	void BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature(FText Text, enum class ETextCommit CommitMethod);
	void ExecuteUbergraph_Basic_PasswordField(int32_t EntryPoint);
	void OnTextCommitted__DelegateSignature(FText Text, char CommitMethod);
	void OnTextChanged__DelegateSignature(FText Text);
};

