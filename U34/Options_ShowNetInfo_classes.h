// WidgetBlueprintGeneratedClass Options_ShowNetInfo.Options_ShowNetInfo_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_ShowNetInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_CheckBox_C* Basic_CheckBox; // 0x238(0x08)

	void Construct(); // Function Options_ShowNetInfo.Options_ShowNetInfo_C.Construct
	void OnShowFPSChanged(bool NewValue); // Function Options_ShowNetInfo.Options_ShowNetInfo_C.OnShowFPSChanged
	void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function Options_ShowNetInfo.Options_ShowNetInfo_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
	void ExecuteUbergraph_Options_ShowNetInfo(int32_t EntryPoint); // Function Options_ShowNetInfo.Options_ShowNetInfo_C.ExecuteUbergraph_Options_ShowNetInfo
};

