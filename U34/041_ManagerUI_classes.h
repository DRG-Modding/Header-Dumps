// WidgetBlueprintGeneratedClass 041_ManagerUI.041_ManagerUI_C
// Size: 0x270 (Inherited: 0x230)
struct U041_ManagerUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UCheckBox* Chutes; // 0x238(0x08)
	struct UCheckBox* ExtendedMats; // 0x240(0x08)
	struct UCheckBox* Legs; // 0x248(0x08)
	struct UCheckBox* Lights; // 0x250(0x08)
	struct UCheckBox* MainBody; // 0x258(0x08)
	struct UCheckBox* UUUCompat; // 0x260(0x08)
	struct AMod041_C* Main Mod; // 0x268(0x08)

	void Construct(); // Function 041_ManagerUI.041_ManagerUI_C.Construct
	void BndEvt__UUUCompat_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 041_ManagerUI.041_ManagerUI_C.BndEvt__UUUCompat_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__ExtendedMats_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 041_ManagerUI.041_ManagerUI_C.BndEvt__ExtendedMats_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__MainBody_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 041_ManagerUI.041_ManagerUI_C.BndEvt__MainBody_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__Legs_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 041_ManagerUI.041_ManagerUI_C.BndEvt__Legs_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__Chutes_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 041_ManagerUI.041_ManagerUI_C.BndEvt__Chutes_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	void BndEvt__Lights_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function 041_ManagerUI.041_ManagerUI_C.BndEvt__Lights_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	void ExecuteUbergraph_041_ManagerUI(int32_t EntryPoint); // Function 041_ManagerUI.041_ManagerUI_C.ExecuteUbergraph_041_ManagerUI
};

