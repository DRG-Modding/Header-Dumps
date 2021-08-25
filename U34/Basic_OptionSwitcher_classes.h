// WidgetBlueprintGeneratedClass Basic_OptionSwitcher.Basic_OptionSwitcher_C
// Size: 0x289 (Inherited: 0x230)
struct UBasic_OptionSwitcher_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* ArrowBox_Text; // 0x238(0x08)
	struct UBasic_ScrollArrow2_C* ArrowLeft; // 0x240(0x08)
	struct UBasic_ScrollArrow2_C* ArrowRight; // 0x248(0x08)
	struct UButton* Button_Left; // 0x250(0x08)
	struct UButton* Button_Right; // 0x258(0x08)
	struct TArray<struct FText> options; // 0x260(0x10)
	int32_t SelectedIndex; // 0x270(0x04)
	bool Loop; // 0x274(0x01)
	char UnknownData_275[0x3]; // 0x275(0x03)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x278(0x10)
	bool White Text; // 0x288(0x01)

	void ContainsOption(struct FText Option, bool DoesContain); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ContainsOption
	bool RemoveOption(struct FText Item); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.RemoveOption
	void GetOptionCount(int32_t count); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetOptionCount
	void ClearOptions(); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ClearOptions
	void Add Option(struct FText Option, int32_t Index); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.Add Option
	void GetSelectedValue(struct FText Value); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetSelectedValue
	void GetSelectedIndex(int32_t Index); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetSelectedIndex
	void SetSelectedValue(struct FText Value); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.SetSelectedValue
	void SetSelectedIndex(int32_t NewIndex); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.SetSelectedIndex
	void Set Options(struct TArray<struct FText> options, int32_t DefaultIndex); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.Set Options
	void PreConstruct(bool IsDesignTime); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.PreConstruct
	void BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature(); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature(); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_Basic_OptionSwitcher(int32_t EntryPoint); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ExecuteUbergraph_Basic_OptionSwitcher
	void OnSelectionChanged__DelegateSignature(struct FText Value, int32_t Index); // Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.OnSelectionChanged__DelegateSignature
};

