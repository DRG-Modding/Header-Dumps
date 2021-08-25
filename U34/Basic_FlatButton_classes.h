// WidgetBlueprintGeneratedClass Basic_FlatButton.Basic_FlatButton_C
// Size: 0x284 (Inherited: 0x230)
struct UBasic_FlatButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UNamedSlot* ButtonContent; // 0x238(0x08)
	struct UTextBlock* ButtonText; // 0x240(0x08)
	struct UButton* ButtonWidget; // 0x248(0x08)
	struct FText Text; // 0x250(0x18)
	bool UpperCase; // 0x268(0x01)
	char UnknownData_269[0x3]; // 0x269(0x03)
	int32_t FontSize; // 0x26c(0x04)
	struct FMulticastInlineDelegate OnClicked; // 0x270(0x10)
	char Color Base; // 0x280(0x01)
	char Color Hover; // 0x281(0x01)
	char Font Color; // 0x282(0x01)
	char Font Hover Color; // 0x283(0x01)

	bool IsInteractable(); // Function Basic_FlatButton.Basic_FlatButton_C.IsInteractable
	void SetStyle(char InBaseColor, char InHoverColor, char InTextColor, char InTextHoverColor); // Function Basic_FlatButton.Basic_FlatButton_C.SetStyle
	void CreateMenuStyle(char ColorSelector, struct FSlateBrush SlateBrush); // Function Basic_FlatButton.Basic_FlatButton_C.CreateMenuStyle
	void PreConstruct(bool IsDesignTime); // Function Basic_FlatButton.Basic_FlatButton_C.PreConstruct
	void Set Text(struct FText Text, bool UpperCase); // Function Basic_FlatButton.Basic_FlatButton_C.Set Text
	void Set Font Size(int32_t FontSize); // Function Basic_FlatButton.Basic_FlatButton_C.Set Font Size
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Basic_FlatButton.Basic_FlatButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Basic_FlatButton.Basic_FlatButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Basic_FlatButton.Basic_FlatButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_Basic_FlatButton(int32_t EntryPoint); // Function Basic_FlatButton.Basic_FlatButton_C.ExecuteUbergraph_Basic_FlatButton
	void OnClicked__DelegateSignature(struct UBasic_FlatButton_C* Button); // Function Basic_FlatButton.Basic_FlatButton_C.OnClicked__DelegateSignature
};

