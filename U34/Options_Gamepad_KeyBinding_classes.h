// WidgetBlueprintGeneratedClass Options_Gamepad_KeyBinding.Options_Gamepad_KeyBinding_C
// Size: 0x290 (Inherited: 0x230)
struct UOptions_Gamepad_KeyBinding_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Error; // 0x238(0x08)
	struct UBasic_Option_C* Basic_Option; // 0x240(0x08)
	struct UUI_AdvancedLabel_C* LabelInfo; // 0x248(0x08)
	struct UOptions_Gamepad_KeyCapture_C* UI_KeyCapture_Primary; // 0x250(0x08)
	struct FCustomKeySetting ButtonSettings; // 0x258(0x38)

	void PreConstruct(bool IsDesignTime); // Function Options_Gamepad_KeyBinding.Options_Gamepad_KeyBinding_C.PreConstruct
	void BndEvt__UI_KeyCapture_Primary_K2Node_ComponentBoundEvent_0_OnCapturingChanged__DelegateSignature(bool InCapturing); // Function Options_Gamepad_KeyBinding.Options_Gamepad_KeyBinding_C.BndEvt__UI_KeyCapture_Primary_K2Node_ComponentBoundEvent_0_OnCapturingChanged__DelegateSignature
	void ExecuteUbergraph_Options_Gamepad_KeyBinding(int32_t EntryPoint); // Function Options_Gamepad_KeyBinding.Options_Gamepad_KeyBinding_C.ExecuteUbergraph_Options_Gamepad_KeyBinding
};

