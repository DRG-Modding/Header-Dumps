// WidgetBlueprintGeneratedClass Options_MouseY_Sensitivity.Options_MouseY_Sensitivity_C
// Size: 0x271 (Inherited: 0x230)
struct UOptions_MouseY_Sensitivity_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* BaseMid; // 0x238(0x08)
	UBasic_Slider_C* Basic_Slider; // 0x240(0x08)
	UHorizontalBox* ManualSensitivityInput; // 0x248(0x08)
	USpinBox* SensitivityInput; // 0x250(0x08)
	UButton* ToggleManualinput; // 0x258(0x08)
	UTextBlock* TXT_ButtonText; // 0x260(0x08)
	UWidgetSwitcher* WidgetSwitcher_208; // 0x268(0x08)
	bool UseSpinboxInput; // 0x270(0x01)

	void Construct();
	void UINeedsUpdate();
	void ShowOptions();
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__SensitivityInput_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void BndEvt__Button_152_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Options_MouseY_Sensitivity(int32_t EntryPoint);
};

