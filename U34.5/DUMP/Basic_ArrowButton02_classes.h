// WidgetBlueprintGeneratedClass Basic_ArrowButton02.Basic_ArrowButton02_C
// Size: 0x25c (Inherited: 0x230)
struct UBasic_ArrowButton02_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* arrow_bracket; // 0x238(0x08)
	UButton* button_arrow; // 0x240(0x08)
	FMulticastInlineDelegate OnClicked; // 0x248(0x10)
	float ButtonAngle; // 0x258(0x04)

	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__button_arrow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__button_arrow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__button_arrow_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__button_arrow_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_Basic_ArrowButton02(int32_t EntryPoint);
	void OnClicked__DelegateSignature();
};

