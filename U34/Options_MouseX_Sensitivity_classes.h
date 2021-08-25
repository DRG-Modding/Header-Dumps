// WidgetBlueprintGeneratedClass Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C
// Size: 0x271 (Inherited: 0x230)
struct UOptions_MouseX_Sensitivity_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* BaseMid; // 0x238(0x08)
	struct UBasic_Slider_C* Basic_Slider; // 0x240(0x08)
	struct UHorizontalBox* ManualSensitivityInput; // 0x248(0x08)
	struct USpinBox* SensitivityInput; // 0x250(0x08)
	struct UButton* Togglemanualinput; // 0x258(0x08)
	struct UTextBlock* TXT_ButtonText; // 0x260(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_208; // 0x268(0x08)
	bool UseSpinboxInput; // 0x270(0x01)

	void Construct(); // Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.Construct
	void UINeedsUpdate(); // Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.UINeedsUpdate
	void ShowOptions(); // Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.ShowOptions
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value); // Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	void BndEvt__ToggleManualinput_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.BndEvt__ToggleManualinput_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__SensitivityInput_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.BndEvt__SensitivityInput_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature
	void ExecuteUbergraph_Options_MouseX_Sensitivity(int32_t EntryPoint); // Function Options_MouseX_Sensitivity.Options_MouseX_Sensitivity_C.ExecuteUbergraph_Options_MouseX_Sensitivity
};

