// WidgetBlueprintGeneratedClass Options_ControlLayout.Options_ControlLayout_C
// Size: 0x250 (Inherited: 0x230)
struct UOptions_ControlLayout_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Image_Controller; // 0x238(0x08)
	struct UImage* Image_Keyboard_QWERTY; // 0x240(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Input; // 0x248(0x08)

	void Construct(); // Function Options_ControlLayout.Options_ControlLayout_C.Construct
	void OnInputSourceChanged(enum class EFSDInputSource InputSource); // Function Options_ControlLayout.Options_ControlLayout_C.OnInputSourceChanged
	void ExecuteUbergraph_Options_ControlLayout(int32_t EntryPoint); // Function Options_ControlLayout.Options_ControlLayout_C.ExecuteUbergraph_Options_ControlLayout
};

