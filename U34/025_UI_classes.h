// WidgetBlueprintGeneratedClass 025_UI.025_UI_C
// Size: 0x2a8 (Inherited: 0x230)
struct U025_UI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UCheckBox* AllowClipping; // 0x238(0x08)
	struct UCheckBox* BETC; // 0x240(0x08)
	struct UCheckBox* Bosco; // 0x248(0x08)
	struct UEditableTextBox* DeathTransitionTime; // 0x250(0x08)
	struct UCheckBox* Doretta; // 0x258(0x08)
	struct UCheckBox* Molly; // 0x260(0x08)
	struct UCheckBox* RememberZoom; // 0x268(0x08)
	struct UEditableTextBox* ReviveTransitionTime; // 0x270(0x08)
	struct UEditableTextBox* RotationSensitivity; // 0x278(0x08)
	struct UEditableTextBox* TransitionTime; // 0x280(0x08)
	struct UEditableTextBox* ZoomAmount; // 0x288(0x08)
	struct UEditableTextBox* ZoomSpeed; // 0x290(0x08)
	struct U025_SaveData_C* Save Data; // 0x298(0x08)
	struct AMod025_C* Main Mod; // 0x2a0(0x08)

	void BndEvt__RotationSpeed_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 025_UI.025_UI_C.BndEvt__RotationSpeed_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__ZoomSpeed_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 025_UI.025_UI_C.BndEvt__ZoomSpeed_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__TransitionSpeed_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 025_UI.025_UI_C.BndEvt__TransitionSpeed_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	void Construct(); // Function 025_UI.025_UI_C.Construct
	void BndEvt__ZoomAmount_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 025_UI.025_UI_C.BndEvt__ZoomAmount_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__DeathTransitionTime_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 025_UI.025_UI_C.BndEvt__DeathTransitionTime_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__DeathTransitionTime_1_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function 025_UI.025_UI_C.BndEvt__DeathTransitionTime_1_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__AllowClipping_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 025_UI.025_UI_C.BndEvt__AllowClipping_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__Doretta_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 025_UI.025_UI_C.BndEvt__Doretta_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__Bosco_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 025_UI.025_UI_C.BndEvt__Bosco_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__Molly_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 025_UI.025_UI_C.BndEvt__Molly_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__BETC_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 025_UI.025_UI_C.BndEvt__BETC_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__RememberZoom_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 025_UI.025_UI_C.BndEvt__RememberZoom_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
	void ExecuteUbergraph_025_UI(int32_t EntryPoint); // Function 025_UI.025_UI_C.ExecuteUbergraph_025_UI
};

