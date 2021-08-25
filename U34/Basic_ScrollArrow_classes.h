// WidgetBlueprintGeneratedClass Basic_ScrollArrow.Basic_ScrollArrow_C
// Size: 0x274 (Inherited: 0x230)
struct UBasic_ScrollArrow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* arrow_bracket; // 0x238(0x08)
	struct UImage* arrow_main; // 0x240(0x08)
	struct UButton* button_arrow; // 0x248(0x08)
	struct USizeBox* SizeBox_1; // 0x250(0x08)
	struct USizeBox* SizeBox_2; // 0x258(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x260(0x10)
	float ButtonAngle; // 0x270(0x04)

	void PreConstruct(bool IsDesignTime); // Function Basic_ScrollArrow.Basic_ScrollArrow_C.PreConstruct
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Basic_ScrollArrow.Basic_ScrollArrow_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__button_arrow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ScrollArrow.Basic_ScrollArrow_C.BndEvt__button_arrow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__button_arrow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ScrollArrow.Basic_ScrollArrow_C.BndEvt__button_arrow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__button_arrow_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function Basic_ScrollArrow.Basic_ScrollArrow_C.BndEvt__button_arrow_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	void BndEvt__button_arrow_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function Basic_ScrollArrow.Basic_ScrollArrow_C.BndEvt__button_arrow_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	void ExecuteUbergraph_Basic_ScrollArrow(int32_t EntryPoint); // Function Basic_ScrollArrow.Basic_ScrollArrow_C.ExecuteUbergraph_Basic_ScrollArrow
	void OnClicked__DelegateSignature(); // Function Basic_ScrollArrow.Basic_ScrollArrow_C.OnClicked__DelegateSignature
};

