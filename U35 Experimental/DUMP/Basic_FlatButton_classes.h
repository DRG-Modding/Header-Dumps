// WidgetBlueprintGeneratedClass Basic_FlatButton.Basic_FlatButton_C
// Size: 0x284 (Inherited: 0x230)
struct UBasic_FlatButton_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UNamedSlot* ButtonContent; // 0x238(0x08)
	UTextBlock* ButtonText; // 0x240(0x08)
	UButton* ButtonWidget; // 0x248(0x08)
	FText Text; // 0x250(0x18)
	bool UpperCase; // 0x268(0x01)
	int32_t FontSize; // 0x26c(0x04)
	FMulticastInlineDelegate OnClicked; // 0x270(0x10)
	enum class ENUM_MenuColors Color Base; // 0x280(0x01)
	enum class ENUM_MenuColors Color Hover; // 0x281(0x01)
	enum class ENUM_MenuColors Font Color; // 0x282(0x01)
	enum class ENUM_MenuColors Font Hover Color; // 0x283(0x01)

	bool IsInteractable();
	void SetStyle(enum class ENUM_MenuColors InBaseColor, enum class ENUM_MenuColors InHoverColor, enum class ENUM_MenuColors InTextColor, enum class ENUM_MenuColors InTextHoverColor);
	void CreateMenuStyle(enum class ENUM_MenuColors ColorSelector, FSlateBrush SlateBrush);
	void PreConstruct(bool IsDesignTime);
	void Set Text(FText Text, bool UpperCase);
	void Set Font Size(int32_t FontSize);
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_Basic_FlatButton(int32_t EntryPoint);
	void OnClicked__DelegateSignature(UBasic_FlatButton_C* Button);
};

