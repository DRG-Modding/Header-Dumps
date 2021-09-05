// WidgetBlueprintGeneratedClass Basic_OptionSwitcher.Basic_OptionSwitcher_C
// Size: 0x289 (Inherited: 0x230)
struct UBasic_OptionSwitcher_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* ArrowBox_Text; // 0x238(0x08)
	UBasic_ScrollArrow2_C* ArrowLeft; // 0x240(0x08)
	UBasic_ScrollArrow2_C* ArrowRight; // 0x248(0x08)
	UButton* Button_Left; // 0x250(0x08)
	UButton* Button_Right; // 0x258(0x08)
	TArray<FText> options; // 0x260(0x10)
	int32_t SelectedIndex; // 0x270(0x04)
	bool Loop; // 0x274(0x01)
	FMulticastInlineDelegate OnSelectionChanged; // 0x278(0x10)
	bool White Text; // 0x288(0x01)

	void ContainsOption(FText Option, bool DoesContain);
	bool RemoveOption(FText Item);
	void GetOptionCount(int32_t count);
	void ClearOptions();
	void Add Option(FText Option, int32_t Index);
	void GetSelectedValue(FText Value);
	void GetSelectedIndex(int32_t Index);
	void SetSelectedValue(FText Value);
	void SetSelectedIndex(int32_t NewIndex);
	void Set Options(TArray<FText> options, int32_t DefaultIndex);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_Basic_OptionSwitcher(int32_t EntryPoint);
	void OnSelectionChanged__DelegateSignature(FText Value, int32_t Index);
};

